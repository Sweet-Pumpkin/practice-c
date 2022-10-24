#include <stdio.h>
#include "ft_strupcase.c"

int main(void)
{
    char arr[] = "Hello World!!";

    printf("%s", arr);
    printf(" ---> ");
    printf("%s\n", ft_strupcase(arr));

    return (0);
}
