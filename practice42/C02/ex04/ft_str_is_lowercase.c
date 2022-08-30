#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[idx] >= 'a' && str[idx] <= 'z')
        {
            return 1;
        }

        idx++;
    }

    if (str[0] == '\0')
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    char arr1[] = "Hello!";
    char arr2[] = "HELLO!";
    char arr3[] = "12345a";
    char arr4[] = "";

    printf("arr1 : %d\n", ft_str_is_lowercase(arr1));
    printf("arr2 : %d\n", ft_str_is_lowercase(arr2));
    printf("arr3 : %d\n", ft_str_is_lowercase(arr3));
    printf("arr4 : %d\n", ft_str_is_lowercase(arr4));

    return 0;
}
