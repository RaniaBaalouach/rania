/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:40:28 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/29 21:33:09 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *p;
	size_t length;

	length = ft_strlen(s1);
	p = (char *)malloc((length + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, length);
	p[length] = '\0';
	return (p);
}