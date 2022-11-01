#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "Hello my name is Yappie Yappie Yo!";
    char to_find[] = "is";
    char not_found[] = "nxde";
    char empty[] = "";

    printf("str : %s\n", str);
    printf("to_find : %s\n", ft_strstr(str, to_find));
    printf("not_found : %s\n", ft_strstr(str, not_found));
    printf("empty : %s\n", ft_strstr(str, empty));

    return (0);
}
