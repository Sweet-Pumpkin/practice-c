#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest1[30] = "GO TO";
    char *src1 = " HELL";

    int res1 = strlcat(dest1, src1, 6);

    printf("------ strlcat ------\n");
    printf("dest : %s\n res : %d\n", dest1, res1);
    printf("\n");

    return (0);
}
