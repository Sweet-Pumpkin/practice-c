#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int main(void)
{
    char *arr1 = "hello";
    char *arr2 = "hello world";
    char *arr3 = "h";
    char *arr4 = "";

    printf("------ strncmp ------\n");
    printf("%s vs %s : %d\n", arr1, arr2, strncmp(arr1, arr2, 2));
    printf("%s vs %s : %d\n", arr1, arr3, strncmp(arr1, arr3, 2));
    printf("%s vs %s : %d\n", arr1, arr4, strncmp(arr1, arr4, 2));
    printf("unsigned int n = 0 : %d\n", strncmp(arr1, arr4, 0));

    printf("------ ft_strncmp ------\n");
    printf("%s vs %s : %d\n", arr1, arr2, ft_strncmp(arr1, arr2, 2));
    printf("%s vs %s : %d\n", arr1, arr3, ft_strncmp(arr1, arr3, 2));
    printf("%s vs %s : %d\n", arr1, arr4, ft_strncmp(arr1, arr4, 2));
    printf("unsigned int n = 0 : %d\n", strncmp(arr1, arr4, 0));
    
    return (0);
}
