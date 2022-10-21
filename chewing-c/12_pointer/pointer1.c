#include <stdio.h>

int main(void)
{
    int *p;
    int a = 7;

    p = &a;

    int arr[3] = { 27, 64, 106  };
    int *pa;

    pa = arr;

    printf("int a : %d\n", a);
    printf("pointer *p : %d\n", *p);

    printf("\n");

    printf("arr : %d\n", *(arr + 1));
    printf("pa : %d\n", *(pa + 1));

    return (0);
}
