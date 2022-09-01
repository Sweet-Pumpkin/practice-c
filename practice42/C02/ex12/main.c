#include <stdio.h>
#include "ft_print_memory.c"

int main(void)
{   
    char res[] = "Hello World! HARD CODING!!";

    ft_print_memory(res, 54);
    
    printf("\n");

    return 0;
}
