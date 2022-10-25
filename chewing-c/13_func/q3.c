#include <stdio.h>

int ft_comb(int n)
{
    int i;
    int res;

    res = 0;
    for (i = 1; i <= n; i++)
    {
        res += i;
    }

    return (res);
}

int main(void)
{
    int n;
    int res;

    printf("숫자를 입력하세요.");
    scanf("%d", &n);

    res = ft_comb(n);

    printf("1부터 %d까지의 총 합은 %d입니다.\n", n, res);

    return (0);
}
