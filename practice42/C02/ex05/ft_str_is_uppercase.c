/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:45:04 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 18:45:05 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[idx] >= 'A' && str[idx] <= 'Z')
        {
            return 1;
        }

        idx++;
    }

    if (str[0] == '\0')
    {
        return 1;
    }

    return 0;
}

// 테스트
int main(void)
{
    char arr1[] = "hello World!";
    char arr2[] = "hello world!";
    char arr3[] = "012345678A";
    char arr4[] = "";

    printf("arr1 : %d\n", ft_str_is_uppercase(arr1));
    printf("arr2 : %d\n", ft_str_is_uppercase(arr2));
    printf("arr3 : %d\n", ft_str_is_uppercase(arr3));
    printf("arr4 : %d\n", ft_str_is_uppercase(arr4));

    return 0;
}
