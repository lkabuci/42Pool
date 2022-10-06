#include "libft.h"

void*	ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = -1;
	while (*(unsigned char*)(s + ++index) && index < n)
	{
		if (*(unsigned char*)(s + index) == (unsigned char)c)
			return ((unsigned char*)(s + index)); 
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "hello world";

// 	printf("%s\n", memchr(str, 'z', 5));
// 	printf("%s\n", ft_memchr(str, 'z', 5));
	
// }