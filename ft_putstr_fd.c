/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:14:59 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/30 19:37:12 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    
    if (fd < 0 || !s)
        return ;
    // i = 0;
    // while (s[i])
    // {
    //     write(fd, &s[i], 1);
    //     i++;
    // }
    write(fd, s, ft_strlen(s));

}