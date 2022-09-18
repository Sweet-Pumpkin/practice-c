/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:10:46 by test42            #+#    #+#             */
/*   Updated: 2022/08/28 18:10:48 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void ft_sort_int_tab(int *tab, int size)
{
    int num, len;
    len = size;

    while (len > 0)
    {
        num = 0;
        while (num < size - 1)
        {
            if (tab[num] > tab[num + 1])
            {
                ft_swap(&tab[num], &tab[num + 1]);
            }
            num++;
        }
        len--;
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
    int res[] = {6, 2, 4, 8, 1, 3, 1};
    int size = 7;

    printf("Original : ");
    ft_print_arr(res, size);

    ft_sort_int_tab(res, size);

    printf("Modified : ");
    ft_print_arr(res, size);

    return 0;
}
