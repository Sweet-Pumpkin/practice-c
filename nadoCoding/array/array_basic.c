#include <stdio.h>

int main(void) {
	int subway_arr[3];
	subway_arr[0] = 30;
	subway_arr[1] = 40;
	subway_arr[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_arr[i]);
	}

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	int arr2[] = { 1, 2 }; // arr[2]
	float arr3[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr3[i]);
	}

	return 0;
}
