/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:11:57 by dano              #+#    #+#             */
/*   Updated: 2022/10/25 23:01:26 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
    int i;
    char hexa[] = "0123456789abcdef";

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
        {
            ft_putchar('\\');
            ft_putchar(hexa[str[i] / 16]);
            ft_putchar(hexa[str[i] % 16]);
        }
        else
            ft_putchar(str[i]);

        i++;
    }
}
