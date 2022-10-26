#include <stdio.h>

void ft_print_max(int *arr)
{
    int i;
    int j;
    int temp;

    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    printf("정렬 : ");

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main(void)
{   
    int arr[5];
    int i;

    printf("숫자를 입력하세요.\n");

    for (i = 0; i < 5; i++)
    {
        printf(">>>  ");
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("입력된 숫자 : ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    
    printf("\n");

    ft_print_max(arr);

    return (0);
}
