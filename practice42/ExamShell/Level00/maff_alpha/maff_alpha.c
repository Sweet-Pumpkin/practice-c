#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(void)
{
  char alphabet = 'a';

  while (alphabet <= 'z')
  {
    if (alphabet % 2 != 0)
    {
      ft_putchar(alphabet - 32);
    } 
    else 
    {
      ft_putchar(alphabet);
    }

    alphabet++;
  }

  ft_putchar('\n');

  return 0;
}