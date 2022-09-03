#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int main(void)
{
    char dest1[30] = "GO TO";
    char dest2[30] = "GO TO";
    char *src = " HELL";

    int res1 = strlcat(dest1, src, 6);
    int res2 = ft_strlcat(dest2, src, 6);

    printf("------ strlcat ------\n");
    printf("dest : %s\n res : %d\n", dest1, res1);
    printf("\n");

    printf("------ ft_strlcat ------\n");
    printf("dest : %s\n res : %d\n", dest2, res2);
    printf("\n");
    
    return (0);
}
