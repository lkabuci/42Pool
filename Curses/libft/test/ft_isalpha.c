#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}


// #include <stdio.h>

// int main()
// {
// 	printf("%i\n", isalpha(23));
// }