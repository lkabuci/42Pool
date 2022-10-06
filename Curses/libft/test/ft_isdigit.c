#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	printf("%i\n", ft_isdigit('a'));
// 	printf("%i\n", isdigit('a'));
// 	printf("%i\n", ft_isdigit('5'));
// 	printf("%i\n", isdigit('5'));
// }