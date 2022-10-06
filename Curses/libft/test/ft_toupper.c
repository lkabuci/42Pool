#include "libft.h"

int	ft_toupper(int c)
{
	return ((c >= 'a' && c <= 'z') ? c - 32 : c);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%c\n", toupper('a'));
// 	printf("%c\n", toupper('A'));
// 	printf("%c\n", toupper('0'));
// 	printf("%c\n", toupper('~'));

// }