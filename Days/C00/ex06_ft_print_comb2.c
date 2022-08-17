#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    output(int a, int b)
{
    ft_putchar(a / 10 + '0');
    ft_putchar(a % 10 + '0');
    ft_putchar(' ');
    ft_putchar(b / 10 + '0');
    ft_putchar(b % 10 + '0');
    if (a < 98)
        write(1, ", ", 2);
}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = -1;
    while (++a < 99)
    {
        b = a;
        while (++b < 100)
            output(a, b);
    }
}

// Main
int main(void)
{
    ft_print_comb2();
}