#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

// Just the main
int main(void)
{
    ft_print_reverse_alphabet();
}

/*
 *  other techniques
 *  char i = 'z';
 *  while ( i >= 'a' )
 *      write(1, &i--, 1);
 */
