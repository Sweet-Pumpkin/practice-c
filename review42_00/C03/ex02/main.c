#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[100] = "Hello my name is ";
    char src[] = "Yappie Yeppie Yo";
    int i;

    ft_strcat(dest, src);
 
    i = 0;
    while (dest[i])
    {
        printf("%c", dest[i]);
        i++;
    }

    printf("\n");

    return (0);
}
