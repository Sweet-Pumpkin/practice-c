// 9498번 시험 성적

// 문제
// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

// 입력 
// 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

// 출력
// 시험 성적을 출력한다.

// 예제입력1
// 100

// 예제출력1
// A

// 제출 답안
#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);
  if (num >= 90 && num <= 100) {
    printf("A");
  } else if (num >= 80 && num <= 89) {
    printf("B");
  } else if (num >= 70 && num <= 79) {
    printf("C");
  } else if (num >= 60 && num <= 69) {
    printf("D");
  } else {
    printf("F");
  }
  return 0;
}