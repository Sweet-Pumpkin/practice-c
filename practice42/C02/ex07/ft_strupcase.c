/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:44:27 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 18:44:28 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[idx] >= 'a' && str[idx] <= 'z')
        {
            str[idx] -= 32;
        }

        idx++;
    }

    return str;
}

// 테스트
int main(void)
{
    char arr1[] = "hello world!";
    char arr2[] = "What the fxxk?!";
    char arr3[] = "";

    printf("arr1 : %s\n", ft_strupcase(arr1));
    printf("arr2 : %s\n", ft_strupcase(arr2));
    printf("arr3 : %s\n", ft_strupcase(arr3));

    return 0;
}
