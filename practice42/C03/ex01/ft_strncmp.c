#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int idx = 0;

    if (n == 0)
    {
        return (0);
    }

    while (s1[idx] == s2[idx] && s1[idx] != '\0' && s2[idx] != '\0' && n > 0)
    {
        idx++;
        n--;
    }

    return (s1[idx] - s2[idx]);
}
