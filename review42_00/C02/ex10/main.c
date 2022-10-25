#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[] = "0123456789";
    char src[] = "abcde";

    printf("Before : %s\n", dest);
    printf("%d\n", ft_strlcpy(dest, src, 5));
    printf("After : %s\n", dest);

    return (0);
}
