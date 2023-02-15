#include <unistd.h>

void    print_comb(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a != '7')
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = 47;
    while (++a < '8')
    {
        b = a;
        while (++b < '9')
        {
            c = b;
            while (++c <= '9')
                print_comb(a, b, c);
        }
    }
}

// Main
int main(void)
{
    ft_print_comb();
}