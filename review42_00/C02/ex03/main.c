#include <stdio.h>
#include "ft_str_is_numeric.c"

int main(void)
{
    char arr1[] = "Hi";
    char arr2[] = "7";
    char arr3[] = "Hell0";
    char arr4[] = " ";
    char arr5[] = "";

    printf("alphabet : %d\n", ft_str_is_numeric(arr1));
    printf("number : %d\n", ft_str_is_numeric(arr2));
    printf("alphabet + number : %d\n", ft_str_is_numeric(arr3));
    printf("blank : %d\n", ft_str_is_numeric(arr4));
    printf("empty : %d\n", ft_str_is_numeric(arr5));

    return (0);
}
