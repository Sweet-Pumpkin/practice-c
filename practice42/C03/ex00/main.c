#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int main(void)
{
    char *arr1 = "Hello";
    char *arr2 = "Hello";
    char *arr3 = "HellO";
    char *arr4 = "World!";
    char *arr5 = "He";
    char *arr6 = "";

    printf("------ strcmp ------\n");
    printf("%s vs %s : %d\n", arr1, arr2, strcmp(arr1, arr2));
    printf("%s vs %s : %d\n", arr1, arr3, strcmp(arr1, arr3));
    printf("%s vs %s : %d\n", arr1, arr4, strcmp(arr1, arr4));
    printf("%s vs %s : %d\n", arr1, arr5, strcmp(arr1, arr5));
    printf("%s vs %s : %d\n", arr1, arr6, strcmp(arr1, arr6));

    printf("\n------ ft_strcmp ------\n");
    printf("%s vs %s : %d\n", arr1, arr2, ft_strcmp(arr1, arr2));
    printf("%s vs %s : %d\n", arr1, arr3, ft_strcmp(arr1, arr3));
    printf("%s vs %s : %d\n", arr1, arr4, ft_strcmp(arr1, arr4));
    printf("%s vs %s : %d\n", arr1, arr5, ft_strcmp(arr1, arr5));
    printf("%s vs %s : %d\n", arr1, arr6, ft_strcmp(arr1, arr6));

    return (0);
}
