#include <stdio.h>
#include "ft_print_memory.c"

int main(void)
{   
    char res[] = "Hello World! \n HARD CORDING!! \t\t\t\t\t\t\t FXXXXXXXXXXXXXXXXXK!!!!!!!!!!!!!!";

    ft_print_memory(res, 60);
    
    printf("\n");

    return 0;
}
