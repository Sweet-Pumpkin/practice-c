#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_ulstr(char *str)
{
    int n = 0;
    
    while (str[n] != '\0')
    {
        if (str[n] >= 'a' && str[n] <= 'z')
        {
            ft_putchar(str[n] - 32);
        }
        else if (str[n] >= 'A' && str[n] <= 'Z')
        {
            ft_putchar(str[n] + 32);
        }
        else 
        {
            ft_putchar(str[n]);
        }
        n++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{   
    if (argc == 2)
    {
        ft_ulstr(argv[1]);
    } 
    else 
    {
        ft_putchar('\n');
    }

    return 0;
}
