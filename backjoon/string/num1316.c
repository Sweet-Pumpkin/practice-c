/*

------ 1152번 단어의 개수 (실버V) ------

****** 문제 ******
 
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

*****************

****** 입력 ******

첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 
둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

*****************

****** 출력 ******

첫째 줄에 그룹 단어의 개수를 출력한다.

******************

****** 예제 입력1 ******

3
happy
new
year

************************

****** 예제 출력1 ******

3

************************

*/

/****** 답안 제출 ******/
#include <stdio.h>
#include <string.h>

int ft_checker(char *arr, int length)
{
  int res = 0;

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      if (arr[i] == arr[j])
      {
        res = j - i;

        if (res > 1)
        {
          if (arr[j - 1] != arr[j])
          {
            return 0;
          }
        }
      }
    }
  }

  return 1;
}


int main(void)
{
  int N;
  int res = 0;
  char arr[101];

  scanf("%d", &N);
  for (int i = 0; i < N; i++)
  {
    scanf("%s", arr);
    res += ft_checker(arr, strlen(arr));
  }

  printf("%d", res);
  return 0;
}