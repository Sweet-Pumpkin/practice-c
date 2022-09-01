#include <stdio.h>
#include "ft_putstr_non_printable.c"

int main(void)
{
    ft_putstr_non_printable("Coucou\ntu vas bien");
    printf("\n");
    ft_putstr_non_printable("Coucou \t\v\0");
    printf("\n");
    ft_putstr_non_printable("");
    printf("\n");
    return 0;
}
