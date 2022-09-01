/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:42:57 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 21:07:42 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
   int idx = 0;
   unsigned char hexa[] = "0123456789abcdef";

   while (str[idx] != '\0')
   {
        if (str[idx] < 32 || str[idx] == 127)
        {
            ft_putchar('\\');
            ft_putchar(hexa[str[idx] / 16]);
            ft_putchar(hexa[str[idx] % 16]);
        }
        else 
        {
            ft_putchar(str[idx]);
        }
       idx++;
   }
}
