/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:51:23 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/30 18:15:24 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	fill_string(char *str, long num, int len)
{
	while (num > 0)
	{
		--len;
		str[len] = '0' + (num % 10);
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	int len;
	long num;
	char *str;

	len = get_length(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	fill_string(str, num, len);
	str[len] = '\0';
	return (str);
}