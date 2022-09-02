#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
   int idx = 0;
   char hexa[] = "0123456789abcdef";

   while (str[idx] != '\0')
   {
        if (str[idx] < 32 || str[idx] == 127)
        {
            ft_putchar('\\');
            ft_putchar(hexa[str[idx] / 16]);
            ft_putchar(hexa[str[idx] % 16]);
        }
        else 
        {
            ft_putchar(str[idx]);
        }
       idx++;
   }
}
