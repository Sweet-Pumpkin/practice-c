#include <stdio.h> 

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char dest[100] = "Hello my name is ";
    char src[] = "Yappie Yappie Yo!";
    int i;

    ft_strncat(dest, src, 6);

    i = 0;
    while (dest[i])
    {
        printf("%c", dest[i]);
        i++;
    }

    printf("\n");

    return (0);
}
