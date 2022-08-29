#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if (str[idx] >= '0' && str[idx] <= '9')
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
    char arr1[] = "Hello!";
    char arr2[] = "Hello9";
    char arr3[] = "0123";
    char arr4[] = "";

    printf("arr1 : %d\n", ft_str_is_numeric(arr1));
    printf("arr2 : %d\n", ft_str_is_numeric(arr2));
    printf("arr3 : %d\n", ft_str_is_numeric(arr3));
    printf("arr4 : %d\n", ft_str_is_numeric(arr4));

    return 0;
}
