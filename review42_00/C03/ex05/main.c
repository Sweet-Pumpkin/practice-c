#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[30] = "1234";
    char src[] = "567";
    unsigned int res;
    unsigned int n;

    n = 0;
    // res = ft_strlcat(dest, src, n);
    res = strlcat(dest, src, n);

    printf("dest : %s\n res : %d\n", dest, res);

    return (0);
}
