#include <stdio.h>
#include "ft_str_is_printable.c"

int main(void)
{
    char arr1[] = "Printable!!";
    char arr2[] = "";
    char arr3[] = " ";

    printf("Printable : %d\n", ft_str_is_printable(arr1));
    printf("Empty : %d\n", ft_str_is_printable(arr2));
    printf("Blank : %d\n", ft_str_is_printable(arr3));

    return (0);
}
