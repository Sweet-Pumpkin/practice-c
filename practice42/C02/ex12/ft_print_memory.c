#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_addr(long long addr, int n)
{
    long long tmp = addr;

    while (tmp)
    {
        tmp /= 16;

    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int idx = 0;
    int len;

    while (size)
    {
        if (size / 16)
        {
            len = 16;
        }
        else 
        {
            len = size;
        }
        
        ft_print_addr((long long)addr + i, 0);

        size -= len;
    }

    return addr;
}
