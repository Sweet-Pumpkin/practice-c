#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int n = -3;

    ft_putchar('0' + n);
    printf("\n");
    ft_putchar('0' + -n);
    printf("\n");

    return (0);
}
