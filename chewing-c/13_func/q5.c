#include <stdio.h>

void ft_factorize(int n)
{
    int i;
    int cnt;

    cnt = 0;
    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
}


int main(void)
{
    int N;

    printf("숫자를 입력하세요.\n");
    printf(">>>  ");
    scanf("%d", &N);

    ft_factorize(N);

    return (0);
}
