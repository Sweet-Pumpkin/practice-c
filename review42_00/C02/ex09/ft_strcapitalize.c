/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:35:34 by dano              #+#    #+#             */
/*   Updated: 2022/10/24 21:51:05 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 문자 상태 체크 함수
int ft_check(char *str, int idx)
{
    char before;

    before = str[idx - 1];
    if (idx == 0)
        return (1);
    else if (before >= '0' && before <= '9')
        return (0);
    else if (before >= 'A' && before <= 'Z')
        return (0);
    else if (before >= 'a' && before <= 'z')
        return (0);

    return (1);
}

// 대문자 변환 함수
void ft_upper(char *str, int idx)
{
    if (str[idx] >= 'a' && str[idx] <= 'z')
        str[idx] -= 32;
}

// 소문자 변환 함수
void ft_lower(char *str, int idx)
{
    if (str[idx] >= 'A' && str[idx] <= 'Z')
        str[idx] += 32;
}

// 메인 함수
char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_check(str, i))
            ft_upper(str, i);
        else 
            ft_lower(str, i);

        i++;
    }

    return (str);
}
