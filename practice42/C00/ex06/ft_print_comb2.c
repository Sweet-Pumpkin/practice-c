#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_print_comb2(void) {
  int a, b;

  a = -1;

  while(a++ < 98) {
    b = a;
    while (b++ < 99) {
      ft_putchar((a / 10) + '0');
      ft_putchar((a % 10) + '0');
      ft_putchar(' ');
      ft_putchar((b / 10) + '0');
      ft_putchar((b % 10) + '0');
      if (a != 99) {
        ft_putchar(',');
        ft_putchar(' ');
      }
    }
  }
} 

/* 답안확인 */
int main(void) {
  ft_print_comb2();
  return 0;
}