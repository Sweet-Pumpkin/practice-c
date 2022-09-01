/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:43:49 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 18:43:50 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
        else if (str[idx - 1] == ' ' || str[idx - 1] == '+' || str[idx - 1] == '-')
        {
            if (str[idx] >= 'a' && str[idx] <= 'z')
            {
                str[idx] -= 32;
            }
        }
        else if (str[idx] >= 'A' && str[idx] <= 'Z')
        {
            str[idx] += 32;
        }

        idx++;
    }
    return str;
}
