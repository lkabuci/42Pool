#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

// Just the main
int main(void)
{
    int n1 = 10;
    int n2 = 0;
    int n3 = -5;
    ft_is_negative(n1);
    ft_is_negative(n2);
    ft_is_negative(n3);
}