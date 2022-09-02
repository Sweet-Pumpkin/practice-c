#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int main(void)
{
    char arr1[30] = "Hello";
    char arr2[] = "World";
    char arr3[30] = "Hello";
    char arr4[] = "World";

    printf("------ strcat ------\n");
    printf("%s + %s = ", arr1, arr2);
    
    strcat(arr1, arr2);

    printf("%s\n", arr1);

    printf("\n------ ft_strcat ------\n");
    printf("%s + %s = ", arr3, arr4);
    
    ft_strcat(arr3, arr4);

    printf("%s\n", arr3);

    return (0);
}
