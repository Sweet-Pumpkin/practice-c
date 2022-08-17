#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaration
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {
  // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
  // 맞히면 통과, 틀리면 실패

  srand(time(NULL));
  int count = 0;
  for (int i = 1; i <= 5; i++) {
    // x * y = z
    int num1 = getRandomNumber(i);
    int num2 = getRandomNumber(i);
    showQuestion(i, num1, num2);

    int answer = -1;
    scanf("%d", &answer);
    if (answer == -1) {
      printf("프로그램을 종료합니다\n");
      exit(0);
    } else if (answer == num1 * num2) {
      success();
      count++;
    } else {
      fail();
    }
  }

  printf("\n\n 당신은 5개 문제 중 %d개를 맞췄습니다.", count);

  return 0;
}

// Definition
int getRandomNumber(int level) {
  return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2) {
  printf("\n\n\n######## %d번째 비밀번호 ########\n", level);
  printf("\n\t%d x %d는?\n\n", num1, num2);
  printf("#################");
  printf("\n비밀번호를 입력하세요. (종료 : -1) >> ");
}
void success() {
  printf("\n >> Good! 정답입니다! \n");
}
void fail() {
  printf("\n >> 땡! 틀렸습니다!! \n");
}