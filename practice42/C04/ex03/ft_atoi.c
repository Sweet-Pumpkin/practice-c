/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 06:48:41 by dano              #+#    #+#             */
/*   Updated: 2022/11/02 07:17:58 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 공백문자 isspace
// 1. " ", 2. "\n", 3. "\t", 4. "\v", 5. "\f", 6. "\r"

int ft_atoi(char *str)
{
    int i;
    int tmp;
    int n;

    i = 0;

    // 공백문자가 있다면 넘기기
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;

    tmp = 1;

    // '+', '-' 문자 계산
    // '-'가 홀수면 음수, 짝수면 양수
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            tmp *= -1;

        i++;
    }

    n = 0;

    // 문자형 숫자를 정수형 숫자로 변환
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = (n * 10) + (str[i] - '0');
        i++;
    }

    // 변환된 숫자에 음수 또는 양수 대입
    n *= tmp;

    return (n);
}
