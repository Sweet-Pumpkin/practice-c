/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:14:39 by test42            #+#    #+#             */
/*   Updated: 2022/08/19 00:14:42 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_is_negative(int n) {
  if (n < 0) {
    ft_putchar('N');
  } else {
    ft_putchar('P');
  }
} 

/* 답안확인 */
int main(void) {
  ft_is_negative(0);
  return 0;
}
