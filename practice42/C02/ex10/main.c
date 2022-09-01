#include <stdio.h>
#include "ft_strlcpy.c"

int main(void)
{
    char src[] = "Hello";
    char dest[] = "";
    
    printf("%d", ft_strlcpy(dest, src, 2));

    return 0;
}
