/*

------ 11720번 숫자의 합 (브론즈IV) ------

****** 문제 ******

N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

*****************

****** 입력 ******

첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

*****************

****** 출력 ******

입력으로 주어진 숫자 N개의 합을 출력한다.

******************

****** 예제 입력1 ******

5
54321

************************
 
****** 예제 출력2 ******

15

************************

*/

/****** 답안 제출 ******/
#include <stdio.h>
int main(void) {
  int num, res = 0;
  scanf("%d\n", &num);
  char arr[num];
  scanf("%s", arr);
  for (int i = 0; i < num; i++) {
    res += arr[i] - '0';
  }
  printf("%d", res);
  return 0;
}