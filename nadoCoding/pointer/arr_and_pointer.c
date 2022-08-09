#include <stdio.h>

int main(void) {
  int arr[3] = { 5, 10, 15 };
  int *ptr = arr;

  for (int i = 0; i < 3; i++) {
    printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
  }

  for (int j = 0; j < 3; j++) {
    printf("배열 ptr[%d]의 값 : %d\n", j, ptr[j]);
  }

  ptr[0] = 100;
  ptr[1] = 200;
  ptr[2] = 300; 
  
  for (int i = 0; i < 3; i++) {
    // printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
  }

  for (int j = 0; j < 3; j++) {
    // printf("배열 ptr[%d]의 값 : %d\n", j, ptr[j]);
    printf("배열 ptr[%d]의 값 : %d\n", j, *(ptr + j));
  }

  // *(arr + i) = arr[i]
  // arr == &arr[0]

  printf("arr 자체의 값 : %p\n", arr);
  printf("arr[0]의 주소 : %p\n", &arr[0]);

  printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
  printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

  // *&는 아무것도 없는 것과 같다. &는 주소, *는 해당 주소의 값이기 때문.
  printf("arr[0]의 실제 값 : %d\n", *&*&*&*&arr[0]);
  printf("arr[0]의 실제 값 : %d\n", arr[0]);

  return 0;
}