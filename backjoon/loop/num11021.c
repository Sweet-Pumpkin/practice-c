// 11021번 A+B - 7

// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력 
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

// 출력
// 각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.

// 예제입력1
// 5
// 1 1
// 2 3
// 3 4
// 9 8
// 5 2

// 예제출력1
// Case #1: 2
// Case #2: 5
// Case #3: 7
// Case #4: 17
// Case #5: 7

// 제출 답안
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d", &a);
  for (int i = 1; i <= a; i ++) {
    scanf("%d %d", &b, &c);
    printf("Case #%d: %d\n", i, b + c);
  }
  return 0;
}