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

void ft_print_comb(void) {
  char num[5];
  num[0] = '0';
  num[3] = ',';
  num[4] = ' ';

  while (num[0] <= '6') {
    num[1] = num[0] + 1;
    while (num[1] <= '8') {
      num[2] = num[1] + 1;
      while (num[2] <= '9') {
        write(1, num, 5);
        num[2]++;
      }
      num[1]++;
    }
    num[0]++;
  }
  
  write(1, "789", 3);
} 

/* 답안확인 */
int main(void) {
  ft_print_comb();
  return 0;
}