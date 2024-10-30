/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaaloua <rbaaloua@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:30:03 by rbaaloua          #+#    #+#             */
/*   Updated: 2024/10/31 00:03:22 by rbaaloua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long num;

    num = n;
    if (fd < 0)
        return ;
    if (num < 0)
    {
        ft_putchar_fd('-', fd);
        num = -num;
    }
    if (num > 9)
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putchar_fd((num % 10) + '0', fd);
    }
    else
        ft_putchar_fd(num + '0', fd);
}