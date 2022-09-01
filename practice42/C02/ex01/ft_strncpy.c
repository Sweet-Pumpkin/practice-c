/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test42 <test42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:46:24 by test42            #+#    #+#             */
/*   Updated: 2022/09/01 18:46:25 by test42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int idx;
	idx = 0;

	while (src[idx] != '\0' && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}

// 테스트
int main(void)
{
    char arr1[] = "COPY";
    char arr2[] = "WHAT'S GOING ON!";
    int n = 4;

    printf("from : %s\n to : %s\n", arr1, arr2);

    ft_strncpy(arr2, arr1, n);

    printf("from : %s\n to : %s\n", arr1, arr2);

    return 0;
}
