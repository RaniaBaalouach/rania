/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:03:19 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/30 23:18:28 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t len;
    char *str;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    len = ft_strlen(s1);
    while (len > start && ft_strchr(set, s1[len - 1]))
        len--;
    str = malloc(sizeof(char) * (len - start + 1));
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1 + start, len - start + 1);
    return (str);
}