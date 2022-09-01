/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:43:18 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 18:43:19 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int idx = 0;
    int res = 0;
    
    while (src[res] != '\0')
    {
        res++;
    }

    if (size != 0)
    {
        while (src[idx] != '\0' && idx < size - 1)
        {
            dest[idx] = src[idx];
            idx++;
        }
        dest[idx] = '\0';
    }

    return res;
}
