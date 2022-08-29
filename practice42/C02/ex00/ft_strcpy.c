/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:18:33 by test42            #+#    #+#             */
/*   Updated: 2022/08/29 10:29:38 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int c;
    c = 0;

    while (src[c] != '\0')
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return dest;
}

// 테스트
int main(void)
{
    char arr1[] = "Hello!";
    char arr2[] = "World!";

    printf("from : %s\n to : %s\n", arr1, arr2);

    ft_strcpy(arr2, arr1);

    printf("from : %s\n to : %s\n", arr1, arr2);

    return 0;
}
