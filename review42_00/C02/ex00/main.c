#include <stdio.h>
#include "ft_strcpy.c"

int main(void)
{
    char arr1[] = "Hello";
    char arr2[] = "World";

    printf("form : %s\n to : %s\n", arr1, arr2);

    ft_strcpy(arr2, arr1);

    printf("form : %s\n to : %s\n", arr1, arr2);

    return (0);
}
