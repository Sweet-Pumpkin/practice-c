#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
   int idx = 0;

   while (s1[idx] == s2[idx] && s1[idx] != '\0' && s2[idx] != '\0')
   {
       idx++;
   }

   return (s1[idx] - s2[idx]);
}
