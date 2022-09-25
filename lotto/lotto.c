#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 10주간 당첨 번호 중 0번, 1번, 2번 중복 번호 배열 저장 함수
void ft_number(int *idx, int *arr, int num)
{
  int cnt = 0;
  int i;

  if (num == 3)
  {
    for (i = 1; i < 46; i++)
    {
      if (idx[i] >= num)
      {
        arr[cnt] = i;
        cnt++;
      } 
    }
  }
  else 
  {
    for (i = 1; i < 46; i++)
    {
      if (idx[i] == num)
      {
        arr[cnt] = i;
        cnt++;
      } 
    }
  }
}

// 10주간 당첨 번호 출력 함수 
int ft_print_num(int *arr, int cnt)
{
  if (cnt == 0)
    printf("\n\n************  10주 동안 한 번도 나오지 않은 당첨 번호  ************\n");  
  else if (cnt == 3)
    printf("\n\n************  10주 동안 3번 이상 나온 당첨 번호  ************\n");
  else
    printf("\n\n************  10주 동안 %d번 나온 당첨 번호  ************\n", cnt);

  int num = 0;
  while (arr[num] != 0)
  {
    if (num % 6 == 0) printf("\n");
    if (arr[num + 1] != 0) printf("%d번, ", arr[num]);
    else if (arr[num + 1] == 0) printf("%d번\n", arr[num]);
    num++;
  }

  printf("\n");
  printf("~~~~~~~~~~~~~~~~~~  총 %d개  ~~~~~~~~~~~~~~~~~~\n\n", num);

  return num;
}

int main(void) 
{
  int arr[60]; // 입력된 로또 번호 저장 배열
  int idx[46] = { 0, }; // 1~45 번호 저장 배열
  int never_came[100] = { 0, }; // 한 번도 나오지 않은 번호 저장 배열
  int duplicate[100] = { 0, }; // 1번 중복된 번호 저장 배열
  int double_duplicate[100] = { 0, }; // 2번 중복된 번호 저장 배열
  int many_duplicate[100] = { 0, }; // 3번 이상 중복된 번호 저장 배열
  int plus_duplicate[100] = { 0, }; // 중복 번호 1 + 2
  int times; // 입력 받을 로또 회차
  int n_num, d_num, dd_num, m_num, p_num; // 0번, 1번, 2번, 1+2번 번호 배열 길이
  int i, j, k;
  int temp;


  // 사용 설명 파트
  printf("\n******  로또 번호 추출기  ******\n\n");
  printf("- 1등 당첨 번호를 지난 1회차부터 지난 10회차까지 입력하세요.\n");
  printf("- ex) 1 2 3 4 5 6\n");
  printf("\n");
  printf("******************************************\n\n");

  // 로또 회차 입력 파트
  printf("******  최근 로또 회차를 입력해주세요.  ******\n");
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

  // 카운트 된 1~45 번호 중 0번, 1번, 2번 나온 번호들을 구분해서 각각 배열에 정렬
  ft_number(idx, never_came, 0);
  ft_number(idx, duplicate, 1);
  ft_number(idx, double_duplicate, 2);
  ft_number(idx, many_duplicate, 3);

  // 10주간 당첨 번호 출력 파트
  n_num = ft_print_num(never_came, 0);
  d_num = ft_print_num(duplicate, 1);
  dd_num = ft_print_num(double_duplicate, 2);
  m_num = ft_print_num(many_duplicate, 3);

  // 중복 번호 1번, 2번 합치기
  p_num = d_num + dd_num;
  for (i = 0; i < p_num; i++)
  {
    if (i < d_num)  
      plus_duplicate[i] = duplicate[i];
    else 
      plus_duplicate[i] = double_duplicate[i - d_num];
  }

  // 추천 번호 입력 & 출력 파트
  int recommend, random; 

  printf("\n\n******  추천 받아 볼 번호 횟수를 입력하세요.  *******\n");
  printf(">>> ");
  scanf("%d", &recommend);
  printf("\n");

  printf("\n\n******  %d회차 추천 번호  ******\n\n", times + 1);  
  
  // 난수 초기화 
  srand((unsigned)time(NULL));

  for (i = 0; i < recommend; i++)
  {
    int lotto[6] = { 0, };

    // 번호 랜덤 출력
    for (j = 0; j < 6; j++)
    {
      if (j < 3)
      {
        random = rand() % p_num;
        lotto[j] = plus_duplicate[random];
      } 

      if (j == 3)
      {
        random = rand() % m_num;
        lotto[j] = many_duplicate[random];
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