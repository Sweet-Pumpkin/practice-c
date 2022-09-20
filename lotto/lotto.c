#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  int arr[60]; // 입력된 로또 번호 저장 배열
  int idx[46] = { 0, }; // 1~45 번호 저장 배열
  int res[100] = { 0, }; // 1~2번 입력된 번호 저장 배열(결과값)
  int times; // 입력 받을 로또 회차
  int temp;

  // 사용 설명 파트
  printf("\n******  로또 번호 추출기  ******\n\n");
  printf("- 1등 당첨 번호를 지난 1회차부터 지난 10회차까지 입력하세요.\n");
  printf("- ex) 1 2 3 4 5 6\n");
  printf("\n");
  printf("******************************************\n\n");

  // 로또 회차 입력 파트
  printf("******  마지막 로또 회차를 입력해주세요.  ******\n");
  printf(">>> ");
  scanf("%d", &times);
  printf("\n");

  // 로또 번호 입력 파트
  for (int i = 1; i <= 10 ; i++)
  {
    printf("****** %d회차 당첨 번호 입력 ******\n", (times + 1) - i );
    printf(">>> ");

    scanf(
      "%d %d %d %d %d %d", 
      &arr[(6 * i) - 6], &arr[(6 * i) - 5], &arr[(6 * i) - 4], &arr[(6 * i) - 3], &arr[(6 * i) - 2], &arr[(6 * i) - 1]
    );

    printf("\n");
  }

  // 입력 받은 번호 중 1~45가 있으면 카운트 1
  for (int i = 0; i < 60; i++) 
    idx[arr[i]]++;

  // 카운트 된 1~45 번호 중 1번 이상 2번 이하일 경우 결과값 배열에 입력
  int cnt = 0;
  for (int i = 1; i < 46; i++)
  {
    if (idx[i] > 0 && idx[i] < 3)
    {
      res[cnt] = i;
      cnt++;
    }
  }

  // 1~2번 나온 당첨 번호 출력 파트
  printf("******  10주 동안 1~2번 나온 당첨 번호  ******\n");
  int num = 0;
  while (res[num] != 0)
  {
    if (num % 6 == 0) printf("\n");
    if (res[num + 1] != 0) printf("%d번, ", res[num]);
    else if (res[num + 1] == 0) printf("%d번\n", res[num]);
    num++;
  }

  printf("\n");
  printf("~~~~~~  총 %d개  ~~~~~~\n\n", num);

  // 추천 번호 입력 & 출력 파트
  int recommend, random; 
  srand((unsigned)time(NULL));

  printf("******  추천 받아 볼 번호 횟수를 입력하세요.  *******\n");
  printf(">>> ");
  scanf("%d", &recommend);
  printf("\n");

  printf("******  추천 번호  ******\n\n");  
  for (int i = 0; i < recommend; i++)
  {
    int lotto[6] = { 0, };

    // 번호 랜덤 출력
    for (int j = 0; j < 6; j++)
    {
      random = rand() % num;
      lotto[j] = res[random];
      
      // 중복 검사
      for (int k = 0; k < j; k++)
        if (lotto[j] == lotto[k]) j--;
    }

    // 번호 정렬
    for (int i = 0; i < 6; i++)
      for (int j = 0; j < 5; j++)
        if (lotto[j] > lotto[j + 1])
        {
          temp = lotto[j];
          lotto[j] = lotto[j + 1];
          lotto[j + 1] = temp;
        }

    // 출력
    for (int i = 0; i < 6; i++)
    {
      if (i < 5) printf("%d, ", lotto[i]);
      else printf("%d", lotto[i]);
    }
    printf("\n");
  }

  return 0;
}