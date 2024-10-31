/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:39:51 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/31 16:08:51 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
    int words;
    int flag;
    int i;

    flag = 0;
    words = 0;
    i = 0;
    while(s[i])
    {
        if (s[i] != c && flag == 0)
        {
            flag = 1;
            words++;
        }
        else if(s[i] == c)
            flag = 0;
        i++;
    }
    return words;
}

static char *full_word(char const *s, char c)
{
    size_t i;
    size_t j;
    char *s_wrd;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    s_wrd = (char *)malloc(sizeof(char) * (i + 1));
    if (!s_wrd)
        return (NULL);
    j = 0;
    while (j < i)
    {
        s_wrd[j] = s[j];
        j++;
    }
    s_wrd[j] = '\0';
    return (s_wrd);
}

static char **ffree(char **str, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        free(str[i]);
        i++;
    }
    free(str);
    return (NULL);
}



char **ft_split(char const *s, char c)
{
    int i;
    char **str;
    char *s_wrd;

    if (!s || !(str = (char **)malloc(((count_words(s, c)) + 1) * sizeof(char *))))
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s)
		{
			s_wrd = full_word(s, c);
			if (!s_wrd)
				return (ffree(str, i));
			str[i++] = s_wrd;
            while (*s && *s != c)
                s++;
		}
    }
    str[i] = (NULL);
    return (str);
}