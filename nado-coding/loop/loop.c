#include <stdio.h>

int main(void) {
  // ++ 연산자
  printf("\n\n----- ++연산자 -----\n\n");
  int a = 10;
  printf("a is %d\n", a); // 10
  a++;
  printf("a is %d\n", a); // 11

  int b = 20;
  printf("b is %d\n", ++b); // 21
  printf("b is %d\n", b++); // 21 
  printf("b is %d\n", b); // 22

  // for 문
  printf("\n\n----- for 문 -----\n\n");
  for (int i = 1; i <= 10; i++) {
    printf("Hello World %d\n", i);
  }

  // while 문
  printf("\n\n----- while 문 -----\n\n");
  int i = 1;
  while (i <= 10)
  {
    printf("Hello World %d\n", i++);
  }

  // do while 문
  printf("\n\n----- do while 문 -----\n\n"); 
  int j = 1;
  do {
    printf("Hello World %d\n", j++);
  } while (j <= 10);

  printf("\n----- DONE -----\n\n");
  return 0;
}