#include <stdio.h>
#include "ft_rev_int_tab.c"

void ft_print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9  };
    int size = 4;

    printf("Original : ");
    ft_print_arr(arr, size);
    
    ft_rev_int_tab(arr, size);

    printf("Modified : ");
    ft_print_arr(arr, size);

    return (0);
}
