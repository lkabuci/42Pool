#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_hex(unsigned char c)
{
    char    *hex;

    hex = "0123456789abcdef";
    ft_putchar('\\');
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if (str[i] >= ' ' && str[i] <= '~')
            ft_putchar(str[i]);
        else
            print_hex(str[i]);
    }   
}

int main()
{
	char *str = "This '\n' Hex '\v' Non '\r' printable";
	ft_putstr_non_printable(str);
}