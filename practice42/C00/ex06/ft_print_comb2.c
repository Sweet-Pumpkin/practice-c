/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:15:28 by test42            #+#    #+#             */
/*   Updated: 2022/08/19 00:15:30 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_print_comb2(void) {
  int a, b;

  a = -1;

  while(a++ < 98) {
    b = a;
    while (b++ < 99) {
      ft_putchar((a / 10) + '0');
      ft_putchar((a % 10) + '0');
      ft_putchar(' ');
      ft_putchar((b / 10) + '0');
      ft_putchar((b % 10) + '0');
      if (a != 99) {
        ft_putchar(',');
        ft_putchar(' ');
      }
    }
  }
} 

/* 답안확인 */
int main(void) {
  ft_print_comb2();
  return 0;
}
