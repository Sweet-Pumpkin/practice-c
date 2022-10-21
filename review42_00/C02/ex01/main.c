#include <stdio.h>
#include "ft_strncpy.c"

int main(void)
{
    char arr1[] = "MOTHER";
    char arr2[] = "123456789";
    unsigned int n = 4;

    printf("from %s\n to : %s\n", arr1, arr2);

    ft_strncpy(arr2, arr1, n);
    
    printf("from : %s\n to : %s\n", arr1, arr2);

    return (0);
}
