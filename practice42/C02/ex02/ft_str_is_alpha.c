/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:46:08 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 18:46:09 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if (str[idx] >= 'A' && str[idx] <= 'Z' || str[idx] >= 'a' && str[idx] <= 'z')
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
    char arr1[] = "H";
    char arr2[] = "12345a";
    char arr3[] = "0987";
    char arr4[] = "";

    printf("arr1 : %d\n", ft_str_is_alpha(arr1));
    printf("arr2 : %d\n", ft_str_is_alpha(arr2));
    printf("arr3 : %d\n", ft_str_is_alpha(arr3));
    printf("arr4 : %d\n", ft_str_is_alpha(arr4));

    return 0;
}
