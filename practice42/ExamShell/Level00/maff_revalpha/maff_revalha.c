#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(void)
{
  char revalpha = 'z';

  while (revalpha >= 'a')
  {
    if (revalpha % 2 == 0)
    {
      ft_putchar(revalpha);
    }
    else 
    {
      ft_putchar(revalpha - 32);
    }

    revalpha--;
  }

  ft_putchar('\n');

  return 0;
}