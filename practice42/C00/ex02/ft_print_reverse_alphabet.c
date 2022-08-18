/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:13:58 by test42            #+#    #+#             */
/*   Updated: 2022/08/19 00:14:00 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void) {
	char alphabet;
	alphabet = 'z';
	while (alphabet >= 'a') {
		write(1, &alphabet, 1);
		alphabet--;
	}
}

int main(void) {
	ft_print_reverse_alphabet();
	return 0;
}
