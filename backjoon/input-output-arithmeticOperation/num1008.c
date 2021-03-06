// 1008번 A/B

// 문제
// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

// 입력 
// 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

// 출력
// 첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10-9 이하이면 정답이다.

// 예제입력1
// 1 3
// 10-9 이하의 오차를 허용한다는 말은 꼭 소수 9번째 자리까지만 출력하라는 뜻이 아니다.

// 예제출력1
// 0.33333333333333333333333333333333

// 예제입력2
// 4 5

// 예제출력2
// 0.8

// 알고리즘 분류
// 수학, 구현, 사칙연산

// 제출 답안
#include <stdio.h>
int main(void) {
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("%.9lf", a / b);
  return 0;
}