// 2472번 기찍 N

// 문제
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

// 입력 
// 첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

// 예제입력1
// 5

// 예제출력1
// 5
// 4
// 3
// 2
// 1

// 제출 답안
#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  for (int i = a; i >= 1; i--) {
    printf("%d\n", i);
  }
  return 0;
}