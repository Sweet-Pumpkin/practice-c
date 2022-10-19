#include <stdio.h>
#include "ft_sort_int_tab.c"

void ft_print_sort(int *arr)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[] = { 5, 3, 2, 1, 4  };
    int size = 5;

    printf("Original : ");
    ft_print_sort(arr);

    ft_sort_int_tab(arr, 5);

    printf("Modified : ");
    ft_print_sort(arr);

    return (0);
}
