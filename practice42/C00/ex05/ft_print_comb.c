/* 

****** Exercise 05 ******
ft_print_comb
Turn-in directory : ex05/
Files to turn in : ft_print_comb.c
Allowed functions: write

- 세 개의 서로 다른 숫자를 오름차순의 순서로 여러 가지 조합한 세 자릿수 숫자를 오름차순으로 표시하는 함수를 작성하세요.
- 다음과 같이 출력되어야 합니다. : 

  $>./a.out | cat -e
  012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>

- 789가 이미 있기 때문에 987은 나오지 않습니다.
- 999는 9가 두 번 이상 반복되기 때문에 나오지 않습니다.
- 프로토타입은 다음과 같이 선언합니다. : 

  void ft_print_comb(void);

*/

/* 제출답안 */
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
