/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:44:55 by test42            #+#    #+#             */
/*   Updated: 2022/10/19 06:00:58 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
    int first, last, tab2[size];

    first = 0;
    last = size - 1;
    while (last >= 0)
    {
        tab2[first] = tab[last];
        first++;
        last--;
    }

    first = 0;
    while (first < size)
    {
        tab[first] = tab2[first];
        first++;
    }
}
