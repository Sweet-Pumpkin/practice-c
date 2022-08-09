/* 

****** Exercise 06 ******
ft_print_comb2
Turn-in directory : ex06/
Files to turn in : ft_print_comb2.c
Allowed functions: write

- 00과 99 사이의 두 자릿수 숫자를 오름차순으로 출력하는 함수를 작성하세요.
- 다음과 같이 출력되어야 합니다. : 

  $>./a.out | cat -e
  00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98, 99$>

- 프로토타입은 다음과 같이 선언합니다. : 

  void ft_print_comb2(void);

*/

/* 제출답안 */
#include <unistd.h>

void ft_write(char a) {
  write(1, &a, 1);
}

void getNumbers(int a, int b) {
  ft_write(48 + a / 10);
  ft_write(48 + a % 10);
  ft_write(' ');
  ft_write(48 + b / 10);
  ft_write(48 + b % 10);
  if (a + b != 98 + 99) {
    ft_write(',');
    ft_write(' ');
  }
}

void ft_print_comb2(void) {
  int a, b;
  a = 0;
  while (a <= 99) {
    b = a + 1;
    while (b <= 99) {
      getNumbers(a, b);
      b++;
    }
    a++;
  }
} 

/* 답안확인 */
int main(void) {
  ft_print_comb2();
  return 0;
}