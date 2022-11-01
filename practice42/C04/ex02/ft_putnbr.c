/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 04:55:27 by dano              #+#    #+#             */
/*   Updated: 2022/11/02 05:06:00 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else 
    {
        if (nb > 9)
            ft_putnbr(nb / 10);

        ft_putchar('0' + nb % 10);
    }
}
