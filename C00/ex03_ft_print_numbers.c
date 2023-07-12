#include <unistd.h>

void    ft_print_numbers(void)
{
    write(1, "0123456789", 10);
}

// Just the main
int main(void)
{
    ft_print_numbers();
}

/*
 *  other techniques
 *  char i = '0';
 *  while ( i <= '9' )
 *      write(1, &i++, 1);
 */
