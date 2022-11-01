/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 03:14:33 by dano              #+#    #+#             */
/*   Updated: 2022/11/02 04:15:06 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *dest)
{
    unsigned int i;

    i = 0;
    while (dest[i])
        i++;

    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int d_len;
    unsigned int s_len;
    unsigned int tmp;

    d_len = ft_strlen(dest);
    s_len = ft_strlen(src);
    tmp = d_len;

    i = 0;
    while (src[i] && d_len + 1 < size)
    {
        dest[d_len] = src[i];
        d_len++;
        i++;
    }

    dest[d_len] = '\0';

    if (tmp < size)
        return (s_len + tmp);
    else 
        return (s_len + size);
}
