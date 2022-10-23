#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main(void)
{
    char arr1[] = "HI";
    char arr2[] = "";
    char arr3[] = "hi";

    printf("Uppercase : %d\n", ft_str_is_uppercase(arr1));

    printf("Empty : %d\n", ft_str_is_uppercase(arr2));
    printf("Lowercase : %d\n", ft_str_is_uppercase(arr3));

    return (0);
}
