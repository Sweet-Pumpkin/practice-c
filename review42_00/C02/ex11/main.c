void ft_putstr_non_printable(char *str);

int main(void)
{
    char arr[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(arr);

    return (0);
}
