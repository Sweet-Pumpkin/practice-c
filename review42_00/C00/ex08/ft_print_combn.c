/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:22:34 by test42            #+#    #+#             */
/*   Updated: 2022/10/18 14:29:48 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int idx;

// 출력 함수
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// 하나의 오름차순 출력 함수
void ft_print_num(int n, int *arr, int pos)
{
    if (pos == 1)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }

    idx = 0;
    while (idx < n)
    {
        ft_putchar('0' + arr[idx]);
        idx++;
    }
}

// 앞자리 업데이트
void ft_print_increment(int n, int *arr)
{
    idx = n - 1;
    int max = 9;

    // 9가 나온 자릿수 이전 배열로 전환
    while (arr[idx] == max)
    {
        idx--;
        max--;
    }

    // 9가 나온 자릿수 이전 배열 값 + 1
    arr[idx] += 1;

    // 9가 나온 자릿수 변경
    while (idx < n)
    {
        arr[idx + 1] = arr[idx] + 1;
        idx++;
    }
}

void ft_print_combn(int n)
{
    int arr[n];

    idx = 0;
    while (idx < n)
    {
        arr[idx] = idx;
        idx++;
    }

    // 첫번째 오름차순 출력
    // 첫번째 오름차순 앞 & 마지막 오름차순 뒤에 ", "가 붙지 않기 때문에
    // 여기에서는 첫번째 오름차순을 제외하고 나머지 숫자들 앞에 ", "를 붙인다.
    ft_print_num(n, arr, 0);

    // 나머지 오름차순 출력
    // arr[0]은 10 - n 보다 커서는 안되며, arr[n - 1]은 9를 넘어서는 안된다.
    while (arr[0] != 10 - n || arr[n - 1] != 9)
    {
        // 마지막 자리가 9가 아닐 경우 1씩 더해서 출력
        if (arr[n - 1] != 9) arr[n - 1] += 1;
        // 마지막 자리가 9라면 앞자리 업데이트
        else ft_print_increment(n, arr);
        ft_print_num(n, arr, 1);
    }
}
