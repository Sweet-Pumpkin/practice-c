#include <stdio.h>

int main(void) {
  printf("\n\n----- 구구단 -----\n\n");
  for (int i = 2; i <= 9; i++) {
    printf("\n--- %d단 계산 ---\n", i);
    for (int j = 1; j <= 9; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
  }

  printf("\n\n----- 별찍기 -----\n\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n----- 거꾸로 별찍기 -----\n\n");
  for(int i = 0; i < 5; i++) {
    for (int j = i; j < 5 - 1; j++) {
      printf(" ");
    }
    for (int k = 0; k <= i; k++) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n ----- DONE -----\n\n");
  return 0;
}