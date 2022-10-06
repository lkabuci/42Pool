#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	index;

	index = -1;
	while (*(s + ++index));
	return (index);
}

// int main()
// {
// 	printf("%zu", ft_strlen(NULL));
// }