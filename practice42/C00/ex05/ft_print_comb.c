#include <unistd.h>
void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_print_comb(void) {
  char num1, num2, num3;

  num1 = '0';
  while (num1 <= '7') {
    num2 = num1 + 1;
    while (num2 <= '8') {
      num3 = num2 + 1;
      while (num3 <= '9') {
        ft_putchar(num1);
        ft_putchar(num2);
        ft_putchar(num3);

        if (num1 != '7') {
          ft_putchar(',');
          ft_putchar(' ');
        }
        num3++;
      }
      num2++;
    }
    num1++;
  }
} 

/* 답안확인 */
int main(void) {
  ft_print_comb();
  return 0;
}
