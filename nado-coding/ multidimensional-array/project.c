#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 10마리의 서로 다른 동물(각 카드 2장씩)
// 사용자로부터 2개의 입력 값을 받아서 같은 동물 찾으면 카드 뒤집기
// 모든 동물 쌍을 찾으면 게임 종료
// 총 실패 횟수 알려주기

int arrayAnimal[4][5]; // 카드 지도 총 20장
char *strAnimal[10];

// 초기 세팅 카드 배열
void initAnimalArray()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      arrayAnimal[i][j] = -1;
    }
  }
}

// 초기 세팅 동물 이름
void initAnimalName()
{
  strAnimal[0] = "원숭이";
  strAnimal[1] = "하마";
  strAnimal[2] = "강아지";
  strAnimal[3] = "고양이";
  strAnimal[4] = "돼지";
  strAnimal[5] = "코끼리";
  strAnimal[6] = "기린";
  strAnimal[7] = "낙타";
  strAnimal[8] = "타조";
  strAnimal[9] = "호랑이";
}

// 카드 셔플
void shuffleAnimal()
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      int pos = getEmptyPosition();
      int x = conv_pos_x(pos);
      int y = conv_pos_y(pos);

      arrayAnimal[x][y] = i;
    }
  }
}

// 좌표에서 빈 공간 찾기
int getEmptyPosition()
{
  while (1)
  {
    int randPos = rand() % 20; // 0 - 19 사이 숫자 반환
    int x = conv_pos_x(randPos);
    int y = conv_pos_y(randPos);

    // 좌표가 빈공간(-1)이라면 randPos 반환
    if (arrayAnimal[x][y] == -1)
    {
      return randPos;
    }

  }
}

// 좌표 구하는 함수 ex) 19 => (3.4)
int conv_pos_x(int x)
{
  return x / 5;
}

int conv_pos_y(int y)
{
  return y % 5;
}

int main(void)
{ 
  srand(time(NULL));

  initAnimalArray();
  initAnimalName();

  shuffleAnimal();  

  return 0;
}