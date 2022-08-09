#include <stdio.h>

void changeArr(int *ptr) {
  ptr[2] = 50;
}

int main(void) {
  int arr[3] = {10, 20, 30};
  // changeArr(arr);
  changeArr(&arr[0]);
  for (int i = 0; i < 3; i++) {
    printf("%d\n", arr[i]);
  }

  // scanf에서 &num과 같이 &를 사용하는 이유?

  return 0;
}