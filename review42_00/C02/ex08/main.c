#include <stdio.h>
#include "ft_strlowcase.c"

int main(void)
{
    char arr[] = "HELLO WORLD!!";

    printf("%s", arr);
    printf(" ---> ");
    printf("%s\n", ft_strlowcase(arr));

    return (0);
}
