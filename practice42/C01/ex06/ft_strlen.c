/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:12:56 by test42            #+#    #+#             */
/*   Updated: 2022/08/28 18:10:24 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int n = 0;

    while (str[n] != '\0')
    {
        n++;
    }

    return n;
}

// 테스트
int main(void)
{
    char res[] = "Hello World!!";
    int count = ft_strlen(res);
    printf("%d", count);
}
