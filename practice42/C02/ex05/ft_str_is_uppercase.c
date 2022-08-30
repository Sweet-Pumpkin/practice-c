#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[idx] >= 'A' && str[idx] <= 'Z')
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
    char arr1[] = "hello World!";
    char arr2[] = "hello world!";
    char arr3[] = "012345678A";
    char arr4[] = "";

    printf("arr1 : %d\n", ft_str_is_uppercase(arr1));
    printf("arr2 : %d\n", ft_str_is_uppercase(arr2));
    printf("arr3 : %d\n", ft_str_is_uppercase(arr3));
    printf("arr4 : %d\n", ft_str_is_uppercase(arr4));

    return 0;
}
