/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:42:57 by test42            #+#    #+#             */
/*   Updated: 2022/08/18 10:44:42 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {
    if (nb == -2147483648) {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    } else if (nb < 0) {
        ft_putchar('-');
        ft_putnbr(-nb);
    } else {
        if (nb > 9) {
            ft_putnbr(nb / 10);
        }
        ft_putchar('0' + nb % 10);
    }
}

int main(void) {
    ft_putnbr(-2147483648);
    return 0;
}
