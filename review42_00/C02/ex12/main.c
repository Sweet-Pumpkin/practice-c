void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
    char arr[] = "HelloWorld!!\n\nHARDCODING!!!!xxxxxxx\n\n\nxxxxx????eeeeeeeeeeeeeeeeeeeee@@@@@@uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu";

    ft_print_memory(arr, 50);

    return (0);
}
