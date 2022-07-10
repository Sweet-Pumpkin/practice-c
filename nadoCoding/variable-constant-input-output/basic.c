#include <stdio.h>
int main(void) {

  // 변수(변하는 수)
  // 변수 타입 별 출력 방뻐
  // char(문자형) => %s
  // int(정수형) => %d
  // float(실수형) => %f

  // 정수형 변수
  int age = 26;
  printf("%d\n", age);

  // 주석
  /* age = 27;
  printf("%d\n", age); */
  printf("1\n");
  // printf("2\n");
  printf("3\n");

  // 실수형 변수
  float f = 46.5f;
  printf("%.2f\n", f);
  double d = 4.428;
  printf("%.2lf\n", d);

  // 상수(변하지 않는 수)
  const int YEAR = 2000;
  printf("태어난 연도 : %d\n", YEAR);

  // printf
  // 연산
  int add = 3 + 7;
  printf("3 + 7 = %d\n", add);
  printf("%d * %d = %d\n", 30, 79, 30 * 79);

  // scanf
  // 키보드 입력을 받아서 저장
  int input;
  printf("값을 입력하세요 : ");
  scanf("%d", &input);
  printf("입력값 : %d\n", input);

  int one, two, three;
  printf("3개의 정수 값을 입력하세요 : ");
  scanf("%d %d %d", &one, &two, &three);
  printf("첫 번째 값 : %d\n", one);
  printf("두 번째 값 : %d\n", two);
  printf("세 번째 값 : %d\n", three);
  
  // 문자열
  char c = 'A';
  printf("%c\n", c);
  char str[256];
  scanf("%s", str);
  printf("%s\n", str);

  return 0;
}