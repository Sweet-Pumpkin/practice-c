/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:46:45 by dano              #+#    #+#             */
/*   Updated: 2022/10/25 16:27:00 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char hexa[] = "0123456789abcdef"; 
int i;

// 출력 함수
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// 16진수 변환 함수
void ft_translate_hexa(long long addr)
{
    if (addr > 15)
    {
        ft_translate_hexa(addr / 16);
        ft_translate_hexa(addr % 16);
    }
    else 
    {
        ft_putchar(hexa[addr]);
    }
}

// 첫번째 행의 첫번째 문자의 16진법 주소 출력 함수
void ft_putaddr(long addr)
{
    long temp;

    temp = addr;
    i = 0;

    while (temp)
    {
        temp /= 16;
        i++;
    }

    printf("temp : %ld\n", temp);
    printf("i : %d\n", i);

    ft_translate_hexa(addr);
    ft_putchar(':');
}

// 메인 함수
void *ft_print_memory(void *addr, unsigned int size)
{
    // 첫번째 행 첫번째 문자 위치
    unsigned int first_txt;
    // 문자 길이 
    unsigned int txt_len;

    first_txt = 0;
    txt_len = 0;
    while (size)
    {
        if (size / 16)
            txt_len = 16;
        else
            txt_len = size;
        
        ft_putaddr((long)addr + first_txt);
        first_txt += 16;
        size -= txt_len;
    }

    return (addr);
}
