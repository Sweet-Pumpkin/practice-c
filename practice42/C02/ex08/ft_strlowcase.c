/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:44:13 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 18:44:14 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[idx] >= 'A' && str[idx] <= 'Z')
        {
            str[idx] += 32;
        }
        
        idx++;
    }

    return str;
}

// 테스트
int main(void)
{
    char arr1[] = "HELLO WORLD!";
    char arr2[] = "i'm so hapPy~~!";
    char arr3[] = "";

    printf("arr1 : %s\n", ft_strlowcase(arr1));
    printf("arr2 : %s\n", ft_strlowcase(arr2));
    printf("arr3 : %s\n", ft_strlowcase(arr3));

    return 0;
}