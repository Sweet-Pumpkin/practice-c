/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:01:43 by test42            #+#    #+#             */
/*   Updated: 2022/08/18 11:01:47 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_cal_num(int num[], int n) {
  int idx = 0;

  while (idx < n) {
    ft_putchar('0' + num[idx]);
    idx++;
  }
}

void	ft_print_combn(int n) {
  int num[10];
  int idx = 0;
  while (idx <= 8) {
    num[idx] = '0' + idx;
    idx++;
  }
  ft_cal_num(num, n);
}

int main(void) {
  ft_print_combn(2);
}