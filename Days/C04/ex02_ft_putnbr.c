#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    long int long_nbr;

    long_nbr = n;
    if (n < 0)
    {
        ft_putchar('-');
        long_nbr *= -1;
    }
    if (long_nbr < 10)
        ft_putchar(long_nbr + '0');
    else
    {
        ft_putnbr(long_nbr / 10);
        ft_putchar((long_nbr % 10) + '0');
    }
}

// Main
int main(void)
{

    // test 0
    ft_putnbr(0);
    ft_putchar('\n');

    // test nbr < 10
    ft_putnbr(5);
    ft_putchar('\n');

    // test positive
    ft_putnbr(1500);
    ft_putchar('\n');

    // test negative
    ft_putnbr(-1500);
    ft_putchar('\n');

    // max int
    ft_putnbr(2147483647);
    ft_putchar('\n');
    
    // min int
    ft_putnbr(-2147483648);
    ft_putchar('\n');
}