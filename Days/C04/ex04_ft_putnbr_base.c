#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    if (!*base || !*(base + 1))
        return (0);
    while (*(base + i))
    {
        j = i;
        while (*(base + j++))
        {
            if (*(base + i) == *(base + j)
                || *(base + j) == '-'
                || *(base + j) == '+'
            )
                return (0);
        }
        i++;
    }
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    long int    base_len;
    long int    long_nbr;

    base_len = 0;
    long_nbr = nbr;
    if (!is_valid_base(base))
        ft_putchar('0');
    else
    {
        if (long_nbr < 0)
        {
            ft_putchar('-');
            long_nbr *= -1;
        }
        while (*(base + base_len))
            base_len++;
        if (long_nbr < base_len)
            ft_putchar(*(base + nbr));
        else
        {
            ft_putnbr_base(long_nbr / base_len, base);
            ft_putnbr_base(long_nbr % base_len, base);
        }
    }
}

// Main
int main(void)
{

    // test 0
    ft_putnbr_base(0, "01");
    ft_putchar('\n');

    // test nbr < base_len
    ft_putnbr_base(5, "0123456789");
    ft_putchar('\n');

    // test positive
    ft_putnbr_base(1500, "poneyvif");
    ft_putchar('\n');

    // test negative
    ft_putnbr_base(-1500, "poneyvif");
    ft_putchar('\n');

    // max int
    ft_putnbr_base(2147483647, "0123456789abcdef");
    ft_putchar('\n');
    
    // min int
    ft_putnbr_base(-2147483648, "0123456789abcdef");
    ft_putchar('\n');
}