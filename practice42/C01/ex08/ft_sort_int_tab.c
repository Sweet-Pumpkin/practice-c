#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void ft_sort_int_tab(int *tab, int size)
{
    int NUM, LASTNUM;
    LASTNUM = size;

    while (LASTNUM > 0){
        NUM = 0;
        while (NUM < size - 1)
        {
            if (tab[NUM] > tab[NUM + 1])
            {
                ft_swap(&tab[NUM], &tab[NUM + 1]);
            }
            NUM++;
        }
        LASTNUM--;
    }
}   

// 테스트
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
    int res[] = {6, 2, 4, 8, 1, 3, 1};
    int size = 7;

    printf("Original : ");
    ft_print_arr(res, size);

    ft_sort_int_tab(res, size);

    printf("Modified : ");
    ft_print_arr(res, size);

    return 0;
}
