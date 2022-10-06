#include "libft.h"

int	ft_tolower(int c)
{
	return ((c >= 'A' && c <= 'Z') ? c + 32 : c);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%c\n", ft_tolower('a'));
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('0'));
// 	printf("%c\n", ft_tolower('~'));

// }