#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[idx] >= 33 && str[idx] <= 126)
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

// 테스트
int main(void)
{
    char arr1[] = "Hello";
    char arr2[] = "!#\"";
    char arr3[] = "엥";
    char arr4[] = "";

    printf("arr1 : %d\n", ft_str_is_printable(arr1));
    printf("arr2 : %d\n", ft_str_is_printable(arr2));
    printf("arr3 : %d\n", ft_str_is_printable(arr3));
    printf("arr4 : %d\n", ft_str_is_printable(arr4));

    return 0;
}
