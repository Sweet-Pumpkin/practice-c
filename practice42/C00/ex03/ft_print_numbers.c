/* 

****** Exercise 03 ******
ft_print_numbers
Turn-in directory : ex03/
Files to turn in : ft_print_numbers.c
Allowed functions: write

- 모든 자릿수를 오름차순으로 한 줄로 출력하는 함수를 작성하세요.
- 프로토타입은 다음과 같이 선언합니다. : 

  void ft_print_numbers(void);

*/

/* 제출답안 */
#include <unistd.h>

void ft_print_numbers(void) {
  char n = '0';
  while (n <= '9') {
    write(1, &n, 1);
    n++;
  }
} 

/* 답안확인 */
int main(void) {
  ft_print_numbers();
  return 0;
}