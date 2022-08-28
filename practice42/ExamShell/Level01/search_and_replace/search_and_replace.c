#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int n = 0;
    
    while (str[n] != '\0')
    {
        n++;
    }
    return n;
}

void ft_replace(char *str, char *search, char *replace)
{   
    int n = 0;

    while (str[n] != '\0')
    {
        if (str[n] == search[0])
        {
            str[n] = replace[0];
        }

        ft_putchar(str[n]);
        n++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        ft_replace(argv[1], argv[2], argv[3]);
    }
    else
    {
        ft_putchar('\n');
    }

    return 0;
}
