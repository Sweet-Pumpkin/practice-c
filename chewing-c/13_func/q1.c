#include <stdio.h>

int magicbox(int i)
{
    i += 4;
    return (i);
}

int main(void)
{
    int i;

    printf("마술 상자에 집어넣을 값 : ");
    scanf("%d", &i);

    printf("마술 상자를 지나면 : %d\n", magicbox(i));

    return (0);
}
