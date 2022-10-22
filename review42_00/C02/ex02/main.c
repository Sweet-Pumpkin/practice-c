#include <stdio.h>
#include "ft_str_is_alpha.c"

int main(void)
{
    char arr1[] = "Hi";
    char arr2[] = "";
    char arr3[] = " ";
    char arr4[] = "1234";
    char arr5[] = "1234a";

    printf("alphabet : %d\n", ft_str_is_alpha(arr1));
    printf("empty : %d\n", ft_str_is_alpha(arr2));
    printf("blank : %d\n", ft_str_is_alpha(arr3));
    printf("number : %d\n", ft_str_is_alpha(arr4));
    printf("number + alphabet : %d", ft_str_is_alpha(arr5));

    return (0);
}
