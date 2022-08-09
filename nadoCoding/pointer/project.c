// 물고기가 6마리 있다.
// 이들은 어항에 살고 있는데 사막 환경.
// 사막이 너무 건조해서 물이 빨리 증발.
// 물이 다 증발하기 전에 부지런히 어항에 물을 줘야 한다.

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int level;
int arrayFish[6];
int *cursor;

void initData() {
  level = 1; // 게임 레벨 ( 1 ~ 5 )
  
  for (int i = 0; i < 6; i++) {
    arrayFish[i] = 100; // 어항의 물 높이 ( 0 ~ 100 )
  }
}

void printFishes() {
  printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
  // 3d번 = 3(3칸) + 번(2칸) + 빈칸(1칸) = 6칸
  for (int i = 0; i < 6; i++) {
    printf(" %4d ", arrayFish[i]);
    // 4d = 빈칸(1칸) + 4(4칸) 빈칸(1칸) = 6칸
  }
  printf("\n\n");
}

void decreaseWater(long elapsedTime) {
  for (int i = 0; i < 6; i++) {
    arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3 => 난도 조절을 위한 값
    if(arrayFish[i] < 0) {
      arrayFish[i] = 0;
    }
  }
}

int checkFishAlive() {
  for (int i = 0; i < 6; i++) {
    if (arrayFish[i] > 0) {
      return 1;
    }
  }
  return 0;
}

int main(void) {
  struct timeval startTime; // 게임 시작 시간
  struct timeval endElapsedTime; // 총 경과 시간
  int totalElapsedTime = 0;
  int prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

  int num; // 몇 번 어항에 물을 줄 것인지, 사용자 입력
  initData();

  cursor = arrayFish; // cursor[0] ... cursor[1] ...

  // 게임 시작
  // startTime = clock(); // 현재 시간을 millisecond(1000분의 1초) 단위로 반환
  gettimeofday(&startTime, NULL);
  printf("%ld", startTime.tv_sec); 

  while (1)
  {
    printFishes();
    printf("몇 번 어항에 물을 주시겠어요?? : ");
    scanf("%d", &num);

    // 입력 값 체크
    if (num < 1 || num > 6) {
      printf("\n입력 값이 잘못되었습니다.\n");
      continue;
    }

    // 총 경과 시간
    // totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC * 100;
    gettimeofday(&endElapsedTime, NULL);
    totalElapsedTime = endElapsedTime.tv_sec - startTime.tv_sec;
    printf("총 경과 시간 : %d초\n", totalElapsedTime);
    // 직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
    prevElapsedTime = totalElapsedTime - prevElapsedTime;
    printf("최근 경과 시간 : %ld초\n", prevElapsedTime);

    // 어항의 물을 감소
    decreaseWater(prevElapsedTime);

    // 사용자가 입력한 어항에 물을 준다
    // 1. 어항의 물이 0이면? 물을 주지 않는다.
    if (cursor[num - 1] <= 0) {
      printf("%d번 물고기는 이미 죽었습니다.\n", num);
    }
    // 2. 어항의 물이 0이 아닌 경우 물을 준다. 100을 넘지 않는지 체크
    else if (cursor[num - 1] + 1 <= 100) {
      // 물을 준다
      printf("%d번 어항에 물을 줍니다.\n\n", num);
      cursor[num - 1] += 1;
    }

    // 레벨업을 할 건지 확인
    if (totalElapsedTime / 20 > level - 1) {
      level++;
      printf("\n*** LEVEL UP!! Lv%d => Lv%d ***\n\n", level - 1, level);
      if (level == 5) {
        printf("게임 클리어!! 게임을 종료합니다.\n\n");
        exit(0);
      }
    }

    // 물고기가 죽었는 지 확인
    if (checkFishAlive() == 0) {
      printf("모든 물고기가 죽었습니다. 게임을 종료합니다.\n\n");
      exit(0);
    } else {
      printf("아직 물고기가 살아있습니다.\n");
    }

    // 10초 => 15초 (5초 : prevElapsedTime => 15초) => 25초 (10초?)
    prevElapsedTime = totalElapsedTime;
  }

  return 0;
}