#include <unistd.h>
#include "ft_is_negative.c"

int main(void)
{
    ft_is_negative(-12);
    ft_putchar('\n');
    ft_is_negative(0);
    ft_putchar('\n');
    ft_is_negative(5);
}
