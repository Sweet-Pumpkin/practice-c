#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  int arr[60]; // 입력된 로또 번호 저장 배열
  int idx[46] = { 0, }; // 1~45 번호 저장 배열
  int never_came[100] = { 0, }; // 한 번도 나오지 않은 번호 저장
  int duplicate[100] = { 0, }; // 1~2번 입력된 번호 저장 배열
  int times; // 입력 받을 로또 회차
  int i, j, k;
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
  for (i = 1; i <= 10 ; i++)
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
  for (i = 0; i < 60; i++) 
    idx[arr[i]]++;

  // 카운트 된 1~45 번호 중 1번 이상 2번 이하일 경우 결과값 배열에 입력
  int d_cnt = 0;
  int n_cnt = 0;
  for (i = 1; i < 46; i++)
  {
    if (idx[i] > 0 && idx[i] < 3)
    {
      duplicate[d_cnt] = i;
      d_cnt++;
    }
    else if (idx[i] == 0)
    {
      never_came[n_cnt] = i;
      n_cnt++;
    }
  }

  // 1~2번 나온 당첨 번호 출력 파트
  printf("******  10주 동안 1~2번 나온 당첨 번호  ******\n");
  int d_num = 0;
  while (duplicate[d_num] != 0)
  {
    if (d_num % 6 == 0) printf("\n");
    if (duplicate[d_num + 1] != 0) printf("%d번, ", duplicate[d_num]);
    else if (duplicate[d_num + 1] == 0) printf("%d번\n", duplicate[d_num]);
    d_num++;
  }

  printf("\n");
  printf("~~~~~~  총 %d개  ~~~~~~\n\n", d_num);

    // 한 번도 나오지 않은 번호 출력 파트
  printf("******  10주 동안 한 번도 나오지 않은 번호  ******\n");
  int n_num = 0;
  while (never_came[n_num] != 0)
  {
    if (n_num % 6 == 0) printf("\n");
    if (never_came[n_num + 1] != 0) printf("%d번, ", never_came[n_num]);
    else if (never_came[n_num + 1] == 0) printf("%d번\n", never_came[n_num]);
    n_num++;
  }

  printf("\n");
  printf("~~~~~~  총 %d개  ~~~~~~\n\n", n_num);

  // 추천 번호 입력 & 출력 파트
  int recommend, random; 

  printf("******  추천 받아 볼 번호 횟수를 입력하세요.  *******\n");
  printf(">>> ");
  scanf("%d", &recommend);
  printf("\n");

  printf("******  추천 번호  ******\n\n");  
  
  // 난수 초기화 
  srand((unsigned)time(NULL));

  for (i = 0; i < recommend; i++)
  {
    int lotto[6] = { 0, };

    // 번호 랜덤 출력
    for (j = 0; j < 6; j++)
    {
      if (j < 4)
      {
        random = rand() % d_num;
        lotto[j] = duplicate[random];
      } 
      
      if (j >= 4)
      {
        random = rand() % n_num;
        lotto[j] = never_came[random];
      }
      
      // 중복 검사
      for (k = 0; k < j; k++)
        if (lotto[j] == lotto[k]) j--;
    }

    // 번호 정렬
    for (j = 0; j < 6; j++)
      for (k = 0; k < 5; k++)
        if (lotto[k] > lotto[k + 1])
        {
          temp = lotto[k];
          lotto[k] = lotto[k + 1];
          lotto[k + 1] = temp;
        }

    // 출력
    for (j = 0; j < 6; j++)
    {
      if (j < 5) printf("%d, ", lotto[j]);
      else printf("%d", lotto[j]);
    }
    printf("\n");
  }

  return 0;
}