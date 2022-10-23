#include <stdio.h>
#include "ft_str_is_lowercase.c"

int main(void)
{
    char arr1[] = "HI";
    char arr2[] = " ";
    char arr3[] = "";
    char arr4[] = "123a";

    printf("Uppercase : %d\n", ft_str_is_lowercase(arr1));
    printf("Blank : %d\n", ft_str_is_lowercase(arr2));
    printf("Empty : %d\n", ft_str_is_lowercase(arr3));
    printf("Number + Lowercase : %d\n", ft_str_is_lowercase(arr4));

    return (0);
}
