#include <unistd.h>

int ft_strlen(char *str)
{
  int num = 0;
  while (str[num] != '\0')
  {
    num++;
  }
  return num;
}

#include <stdio.h>

int main(void)
{ 
  char text[] = "HELLO";
  int res = ft_strlen(text);
  printf("%d\n", res);
  return 0;
}