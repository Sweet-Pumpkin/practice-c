#include <stdio.h>
#include "ft_strcapitalize.c"

int main(void)
{
    char arr1[] = "hEllO mOther fATHER; 42-salut! plus+minus-";

    printf("%s", ft_strcapitalize(arr1));
    return 0;
}
