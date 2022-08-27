#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
  int n = 0;

  while (s2[n] != '\0')
  {
    s1[n] = s2[n];
    n++;
  }
  s1[n] = '\0';
  return s1;
}

#include <stdio.h>

int main(void)
{
  char before[] = "Hello";
  char after[] = "World";
  
  printf("before: %s, after: %s\n", before, after);
  
  ft_strcpy(after, before);
  
  printf("before: %s, after: %s\n", before, after);

  return 0;
}