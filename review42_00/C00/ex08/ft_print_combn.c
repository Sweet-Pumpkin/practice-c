/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:04:53 by test42            #+#    #+#             */
/*   Updated: 2022/10/10 21:26:54 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// 출력 함수
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// 하나의 오름 차순 출력 함수
void ft_putout(int n, int *arr, int pos)
{
    int idx;
    
    if (pos == 1)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }

    idx = 0;
    while (idx < n)
    {
        ft_putchar(arr[idx] + '0');
        idx++;
    }
}

// n개의 숫자의 모든 조합을 작은 수부터 오름차순으로 출력하는 함수
void ft_print_combn(int n)
{
    int arr[n];
    int idx;

    idx = 0;
    while (idx < n)
    {
        arr[idx] = idx;
        idx++;
    }
    
    // 첫번째 오름차순 출력
    ft_putout(n, arr, 0);
}
