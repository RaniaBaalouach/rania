/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:13:34 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/30 16:14:35 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;
	size_t total;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		total = ft_strlen(s) - start;
	else
		total = len;
	result = (char *)malloc((total + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, total + 1);
	return (result);
}