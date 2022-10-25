void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
    char arr[] = "HELLO WORLD!!";

    ft_print_memory(arr, 10);

    return (0);
}
