// UP & DOWN
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int num = rand() % 100 + 1; // 1 ~ 100
  int answer = 0; // 정답
  int chance = 5; // 기회

  while (chance > 0) {
    printf("남은 기회 %d번\n", chance--);
    printf("숫자를 맞혀보세요(1 ~ 100) : ");
    scanf("%d", &answer);
    if (answer > num) {
      printf("DOWN\n\n");
    } else if (answer < num) {
      printf("UP\n\n");
    } else if (answer == num) {
      printf("정답입니다!\n\n");
      break;
    } else {
      printf("ERROR");
    }

    if (chance == 0) {
      printf("모든 기회를 다 소진했습니다. 정답은 %d입니다.\n", num);
      break;
    }
  }
  return 0;
}