#include <stdio.h>
#include "ft_strcapitalize.c"

int main(void)
{
    char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s\n", arr);
    printf("%s\n", ft_strcapitalize(arr));

    return (0);
}
