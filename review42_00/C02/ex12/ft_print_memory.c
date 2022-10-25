/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dano <dano@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:28:41 by dano              #+#    #+#             */
/*   Updated: 2022/10/25 23:45:03 by dano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char hexa[] = "0123456789abcdef";

// 출력 함 수
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// 16진수 변환 함수
void ft_trans_hexa(unsigned long addr)
{
    if (addr > 15)
    {
        ft_trans_hexa(addr / 16);
        ft_trans_hexa(addr % 16);
    }
    else
        ft_putchar(hexa[addr]);
}

// 첫번째 행의 첫번째 문자의 16진법 주소 출력 함수
void ft_print_addr(unsigned long addr)
{
    unsigned long tmp;
    int i;

    // addr 주소 자릿수 구하기
    tmp = addr;
    i = 0;
    while (tmp)
    {
        tmp /= 16;
        i++;
    }

    // 16개의 자릿수 중 주소 자릿수 외 빈자리를 0으로 채워넣기
    tmp = 0;
    while (i + tmp < 16)
    {
        ft_putchar('0');
        tmp++;
    }

    // addr 주소 16진수로 변환
    ft_trans_hexa(addr);
    ft_putchar(':');
}

// 16진수로 이루어진 컨텐츠 출력 함수
// 포인터는 주솟값 연산이기 때문에 부호를 쓰지 않음 
// 따라서 char 가 아닌, unsigned char 를 써야 함
void ft_print_char_hexa(unsigned char *addr, unsigned int len)
{
    int i;

    // 16진수 출력
    i = 0;
    while (i < len)
    {
        if (i % 2 == 0)
            ft_putchar(' ');

        ft_putchar(hexa[addr[i] / 16]);
        ft_putchar(hexa[addr[i] % 16]);
        i++;
    }

    // 띄어쓰기
    while (i < 16)
    {
        if (i % 2 == 0)
            ft_putchar(' ');

        ft_putchar(' ');
        ft_putchar(' ');
        i++;
    } 

    ft_putchar(' ');
}

// 텍스트 출력 함수
void ft_print_char(unsigned char *addr, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        if (addr[i] >= 32 && addr[i] <= 126)
            ft_putchar(addr[i]);
        else
            ft_putchar('.');

        i++;
    }
}

// 메인 함수
void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int first_txt;
    unsigned int len;

    first_txt = 0;
    while (size)
    {   // len 값 적용(몇 줄인지 계산)
        // 한 줄 이상(16 이상)일 경우 len는 16
        // 한 줄 이하(16 이하)일 경우 len는 나머지 size
        if (size / 16)
            len = 16;
        else 
            len = size;

        ft_print_addr((unsigned long)addr + first_txt); // 메모리 주소를 사용하는 데이터 타입은 unsigned long을 사용한다.
        ft_print_char_hexa(addr + first_txt, len);
        ft_print_char(addr + first_txt, len);
        ft_putchar('\n');

        // 한 줄 당 첫번째 단어 값 적용
        first_txt += 16;

        size -= len;
    }

    return (addr);
}
