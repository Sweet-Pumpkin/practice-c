/* 

****** Exercise 00 ******
ft_putchar
Turn-in directory : ex00/
Files to turn in : ft_putchar.c
Allowed functions: write

- 매개변수로 전달되는 문자를 표시하는 문자를 작성하세요.
- 프로토타입은 다음과 같이 선언합니다. : 

  void ft_putchar(char c);

  문자를 표시하려면 다음과 같이 wirte 함수를 사용해야 합니다.

  wirte(1, &c, 1);

*/

/* 제출답안 */
#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

/* 답안확인 */
int main(void) {
  ft_putchar('a');
  return 0;
}