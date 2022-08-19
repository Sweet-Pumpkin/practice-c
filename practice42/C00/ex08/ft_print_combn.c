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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int n, int arr[], int pos) // 오름차순 출력 함수
{
	int idx = 0;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	
	while (idx < n)
	{ // 오름차순으로 출력
		ft_putchar(arr[idx] + '0');
		idx++;
	}
}

void	ft_print_combn_increment(int n, int arr[])
{
	int idx = n - 1;
	int max = 9;

  // 9가 나온 자릿수 이전 배열로 
	while (arr[idx] == max)
	{
		idx--;
		max--;
	}
  // 9가 나온 자릿수 이전 배열 값 + 1
	arr[idx]++;
	while (idx < n)
	{ // 9가 나온 자릿수 변경
		arr[idx + 1] = arr[idx] + 1;
		idx++;
	}
}

void	ft_print_combn(int n)
{
	int arr[n];
	int idx = 0;

	while (idx < n)
	{
		arr[idx] = idx;
		idx++;
	}
	ft_putout(n, arr, 0);

  // 오름차순이기 때문에 첫번째 값 arr[0]은 10 - n 보다 커서는 안되고, 마지막 값 arr[n - 1]은 9를 넘어서는 안된다.
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{ // 마지막 값 arr[n - 1]이 9보다 작다면, +1 => 오름차순으로 출력
		if (arr[n - 1] != 9)
		{
			arr[n - 1] += 1;
		}
		else
		{ // 마지막 자리가 9일 경우 앞자리 변화
			ft_print_combn_increment(n, arr);
		}
		ft_putout(n, arr, 1);
	}

}

int main(void) {
  ft_print_combn(3);
}