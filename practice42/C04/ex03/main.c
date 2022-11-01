#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    char *str = "\n\t   +++---++--502abc23+56";

    printf("%d\n", ft_atoi(str));

    return (0);
}
