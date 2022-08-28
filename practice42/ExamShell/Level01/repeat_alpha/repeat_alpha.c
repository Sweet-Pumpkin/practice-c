#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_text(char *str)
{
    int n = 0, i = 0;

    while (str[n] != '\0')
    {
        if (str[n] >= 'A' && str[n] <= 'Z')
        {
            i = str[n] - 65;
            
            while (i >= 0)
            {
                ft_putchar(str[n]);
                i--;
            }
        }
        else if (str[n] >= 'a' && str[n] <= 'z')
        {
            i = str[n] - 97;

            while (i >= 0)
            {
                ft_putchar(str[n]);
                i--;
            }
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
    if (argc < 2)
    {
        ft_putchar('\n');
    }
    else
    {
        ft_print_text(argv[1]);
    }

    return 0;
}
