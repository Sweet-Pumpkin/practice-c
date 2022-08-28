/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:22:16 by test42            #+#    #+#             */
/*   Updated: 2022/08/28 17:22:22 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int num, lastNum, tab2[size];

    num = 0;
    lastNum = size - 1;

    while (lastNum >= 0)
    {
        tab2[num] = tab[lastNum];
        num++;
        lastNum--;
    }

    num = 0;

    while (num < size)
    {
        tab[num] = tab2[num];
        num++;
    }
}

// 테스트
void ft_print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int res[] = {8, 0, 7, 1, 6, 2};
    int size = 6;
    
    printf("Original : ");
    ft_print_arr(res, size);

    ft_rev_int_tab(res, size);

    printf("Modified : ");
    ft_print_arr(res, size);

    return 0;
}
