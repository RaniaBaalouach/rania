/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:03:19 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/30 20:24:17 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		printf("%d",i);
		i++;
	}
	if (s[i] == '\0')
		return ((char *)(s + i));
	return (NULL);
}
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
    len = strlen(s1);
    while (len > start && ft_strchr(set, s1[len - 1]))
        len--;
    str = malloc(sizeof(char) * (len - start + 2));
    if (!str)
        return (NULL);
    memcpy(str, s1 + start, len - start + 2);
    str[len - start] = 0;
    return (str);
}
int main()
{
    char *s1 = "555Hello ]\\ 1235555";
    char *set = "532";
    char *trimmed_str;

    trimmed_str = ft_strtrim(s1, set);

    return (0);
}