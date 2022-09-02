#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest1[30] = "Mother";
    char src1[] = "Father";
    char dest2[30] = "Mother";
    char src2[] = "Father";

    printf("------ strncat ------\n");
    printf("%s + %s &number 3 = ", dest1, src1);

    strncat(dest1, src1, 3);

    printf("%s\n", dest1);

    printf("\n------ ft_strncat ------\n");
    printf("%s + %s &number 10 = ", dest2, src2);

    strncat(dest2, src2, 10);

    printf("%s\n", dest2);

    return (0);
}
