#include <unistd.h>

int ft_strlen(char *dest)
{
    int idx = 0;

    while (dest[idx] != '\0')
    {
        idx++;
    }

    return (idx);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int length;
    int idx = 0;

    if (size <= ft_strlen(dest))
    {
        return (size + ft_strlen(src));
    }

    length = ft_strlen(dest);
    while (src[idx] != '\0' && length + 1 < size)
    {
        dest[length] = src[idx];
        length++;
        idx++;
    }

    dest[length] = '\0';

    return (ft_strlen(dest) + ft_strlen(&src[idx]));
}
