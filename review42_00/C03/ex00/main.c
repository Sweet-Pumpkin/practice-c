#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char s1[] = "123456789";
    char s2[] = "123456780";

    printf("%d", ft_strcmp(s1, s2));

    return (0);
}
