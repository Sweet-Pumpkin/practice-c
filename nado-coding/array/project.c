#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  printf("\n\n === 아빠는 대머리 게임 === \n\n");
  int answer; // 사용자 입력 값
  int treatmemt = rand() % 4; // 발모제 선택 (0 - 3)
  int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
  int prevCntShowBottle = 0; // 앞 게임에 보여준 병 갯수
  // => 서로 보여주는 병 갯수를 다르게 하여 정답률 향상(처음엔 2개 -> 다음엔 3개)

  // 3번의 기회
  for (int i = 1; i <=3; i++) {
    int bottle[4] = { 0, 0, 0, 0 };
    do {
      cntShowBottle = rand() % 2 + 2; // 보여줄 병 갯수 (0 ~ 1, +2 => 2, 3)

    } while (cntShowBottle == prevCntShowBottle);

    int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는 지 여부
    printf(">> %d번째 시도!\n\n", i);

    // 보여줄 병 종류를 선택
    for (int j = 0; j < cntShowBottle; j++) {
      int randBottle = rand() % 4; // 0 ~ 3
      // 아직 선택되지 않은 병이면, 선택처리
      if (bottle[randBottle] == 0) {
        bottle[randBottle] = 1;
        if (randBottle == treatmemt) {
          isIncluded = 1;
        }
      } else {
        // 이미 선택된 병이면, 중복이므로 다시 선택
        j--;
      }
    }
    
    // 사용자에게 문제 표기
    for (int k = 0; k < 4; k++) {
      if(bottle[k] == 1) {
        printf("%d번 물약!\n", k + 1);
      }
    }

    printf("\n\n물약을 머리에 바릅니다\n\n");

    if (isIncluded == 1) {
      printf(">> 성공! 머리가 났어요!!\n");
    } else {
      printf(">> 실패! 머리가 나지 않았어요. ㅠㅠ\n\n");
    }

    printf("\n>> 계속하려면 아무키나 누르세요. <<\n");
    getchar();
  }

  printf("\n\n발모제는 몇 번일까요??\n\n");
  scanf("%d", &answer);

  if (answer == treatmemt + 1) {
    printf("\n >> 정답입니다!!\n");
  } else {
    printf("\n >> 땡!! 틀렸어요. 정답은 %d입니다\n", treatmemt + 1);
  }
  return 0;
}