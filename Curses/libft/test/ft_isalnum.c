#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}


// #include <stdio.h>
// #include <string.h>

// int main()
// {
	// printf("%i\n", ft_isalnum('!'));
	// printf("%i\n", isalnum('!'));
	// printf("%i\n", ft_isalnum('5'));
	// printf("%i\n", isalnum('5'));
// }