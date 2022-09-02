#include <unistd.h>
#include <stdio.h>

char *hexa = "0123456789abcdef";

void ft_putchar(char c)
{
    write(1, &c, 1);
}

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

void ft_putaddr(long long addr)
{
    long long addr2 = addr;
    int idx = 0;

    while (addr2)
    {
        addr2 /= 16;
        idx++;
    }

    addr2 = 0;

    while (idx + addr2 < 16)
    {
        ft_putchar('0');
        addr2++;
    }
    
    ft_translate_hexa(addr);
    ft_putchar(':');
}

void ft_putchar_hexa(unsigned char *addr, int length)
{
    int idx = 0;

    while (idx < length)
    {
        if (idx % 2 == 0)
        {
            ft_putchar(' ');
        }
        
        ft_putchar(hexa[addr[idx] / 16]);
        ft_putchar(hexa[addr[idx] % 16]);
        idx++;
    }

    while (idx < 16)
    {
        if (idx % 2 == 0)
        {
            ft_putchar(' ');
        }

        ft_putchar(' ');
        ft_putchar(' ');
        idx++;
    }

    ft_putchar(' ');    
}

void ft_print_char(unsigned char *addr, int length)
{
    int idx = 0;

    while (idx < length)
    {
        if (addr[idx] >= 32 && addr[idx] < 127)
        {
            ft_putchar(addr[idx]);
        }
        else 
        {
            ft_putchar('.');
        }

        idx++;
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int LINE = 0;
    int length = 0;

    while (size)
    {
        if (size / 16)
        {
            length = 16;
        }
        else 
        {
            length = size;
        }
        
        ft_putaddr((long long)addr + LINE);
        ft_putchar_hexa(addr + LINE, length);
        ft_print_char(addr + LINE, length);
        ft_putchar('\n');
        
        size -= length;
        LINE += 16;
    }

    return addr;
}
