#include <stdio.h>
#include "ft_strlen.c"

int main(void)
{
    char *arr = "Hello World!";
    int cnt = ft_strlen(arr);
    printf("%d", cnt);

    return (0);
}
