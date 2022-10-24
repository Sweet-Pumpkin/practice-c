#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    char str[] = "Hello World!!";
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }

    ft_putchar('\n');

    return (0);
}
