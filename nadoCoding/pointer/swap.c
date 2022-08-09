#include <stdio.h>

void swap(int a, int b) {
  printf("swap 함수 내 a의 주소 : %p\n", &a);
  printf("swap 함수 내 b의 주소 : %p\n", &b);

  int temp = a;
  a = b;
  b = temp;

  printf("swap 함수 내 => a : %d, b %d\n", a, b);
}

void swap_addr(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;

  printf("주소 값 swap 함수 내 => a : %d, b %d\n", *a, *b);
}

int main(void) {
  int a = 10;
  int b = 20;
  printf("a의 주소 : %p\n", &a);
  printf("b의 주소 : %p\n", &b);

  // a와 b의 값을 바꾸어 보기.
  printf("swap 함수 전 => a : %d, b : %d\n", a, b);
  swap(a, b);
  printf("swap 함수 후 => a : %d, b %d\n", a, b);

  // 값에 의한 복사(Call by Value) => 값만 복사한다는 의미.
  // 주소 값을 넘기면? 메모리 공간에 있는 주소 값 자체를 넘기면...
  printf("주소 값 swap 함수 전 => a : %d, b : %d\n", a, b);
  swap_addr(&a, &b);
  printf("주소 값 swap 함수 후 => a : %d, b %d\n", a, b);

  return 0; 
}