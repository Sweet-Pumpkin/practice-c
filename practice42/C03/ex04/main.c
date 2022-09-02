#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int main(void)
{
    char *str1 = "mother father give me a one dollor";
    char *str2 = "we are the one we are the children";
    char *to_find = "one";
    char *not_find = "papa";
    char *empty = "";

    printf("I wanna find this string : %s\n", to_find);
    printf("Found!! : %s\n", strstr(str1, to_find));
    printf("I can't find : %s\n", strstr(str1, not_find));
    printf("empty!! : %s\n", strstr(str1, empty));
    printf("\n");
    printf("I wanna find this string : %s\n", to_find);
    printf("Found!! : %s\n", ft_strstr(str2, to_find));
    printf("I can't find : %s\n", ft_strstr(str2, not_find));
    printf("empty!! : %s\n", ft_strstr(str1, empty));

    return (0);
}
