/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:12:55 by test42            #+#    #+#             */
/*   Updated: 2022/08/19 00:13:04 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void) {
	char alphabet;
	alphabet = 'a';
	while (alphabet <= 'z') {
		write(1, &alphabet, 1);
		alphabet++;
	}
}

int main(void) {
	ft_print_alphabet();
	return 0;
}
