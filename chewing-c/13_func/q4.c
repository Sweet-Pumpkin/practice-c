#include <stdio.h>

int ft_print_prime(int n)
{
    int i;
    int j;
    int cnt;

    cnt = 0;
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
            if (i % j == 0) 
                break;

        if (i == j)
        {
            cnt += 1;
            printf("%d ", i);
        }
    }
    
    printf("\n");

    return (cnt);
}

int main(void)
{
    int N;
    int res;

    printf("숫자를 입력하세요.\n");
    printf(">>> ");
    scanf("%d", &N);

    res = ft_print_prime(N);

    printf("1부터 %d까지의 소수 갯수는 %d입니다.", N, res);

    return (0);
}
