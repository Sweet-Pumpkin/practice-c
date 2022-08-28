/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:13:13 by test42            #+#    #+#             */
/*   Updated: 2022/08/28 18:10:02 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int n = 0;

    while (str[n] != '\0')
    {
        ft_putchar(str[n]);
        n++;
    }
}

// 테스트
int main(void)
{
    char res[] = "Hello World!!";
    ft_putstr(res);
}
