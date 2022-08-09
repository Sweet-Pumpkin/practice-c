/* 

****** Exercise 04 ******
ft_is_negative
Turn-in directory : ex04/
Files to turn in : ft_is_negative.c
Allowed functions: write

- 매개변수로 입력된 정수의 기호에 따라 'N' 또는 'P'를 출력하는 함수를 작성하세요.
- n이 음수라면 'N'을, 양수이거나 0이면 'P'를 출력해야 합니다.
- 프로토타입은 다음과 같이 선언합니다. : 

  void ft_is_negative(int n);

*/

/* 제출답안 */
#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_is_negative(int n) {
  if (n < 0) {
    ft_putchar('N');
  } else {
    ft_putchar('P');
  }
} 

/* 답안확인 */
int main(void) {
  ft_is_negative(0);
  return 0;
}