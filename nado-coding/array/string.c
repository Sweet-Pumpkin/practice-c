#include <stdio.h>

int main(void) {
  // 문자 vs 문자열
  // 문자
  char c = 'A';
  printf("%c\n", c);

  // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\n'이 포함되어야 함.
  char str[7] = "coding"; // => [c], [o], [d], [i], [n], [g] [\0]
  printf("%s\n", str);

  for (int i = 0; i < sizeof(str); i++) {
    printf("%c\n", str[i]);
  }

  // 영어 1글자 : 1byte
  // 한글 1글자 : 2byte
  // char 크기 : 1byte
  char kor[] = "코딩";
  char en[] = "coding";
  printf("%s => %lu\n", kor, sizeof(kor));
  printf("%s => %lu\n", en, sizeof(en));

  return 0;
}