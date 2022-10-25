/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:48:29 by dano              #+#    #+#             */
/*   Updated: 2022/10/25 14:05:56 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 문자열 수를 구하는 함수
unsigned int ft_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
        i++;

    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int res;

    i = 0;
    res = ft_strlen(src);
    // dest나 src 포인터의 가르키는 값이 없다면 0을 반환
    if (!dest || !src)
        return (0);

    // i가 src의 문자열 길이 res 보다 작아야하고, 
    // i + 1 가 size 보다 작아야 한다.('\0'을 포함하기 때문)
    while (i < res && i + 1 < size)
    {
        dest[i] = src[i];
        i++;
    }

    if (size > 0)
        dest[i] = '\0';

    return (res);
}
