#include <stdio.h>

// Declaration
void p(int num);

// Calculator
int main(void) {
  int num = 2;
  p(num);
  return 0;
}

// Definition
void p(int num) {
  printf("num은 %d입니다\n", num);
}