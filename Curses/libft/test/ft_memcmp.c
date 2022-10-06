#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (*(unsigned char*)(s1 + index) \
			&& *(unsigned char*)(s2 + index) \
			&& *(unsigned char*)(s1 + index) == *(unsigned char*)(s2 + index) \
			&& index < n \
			)
		index++;
	return (*(unsigned char*)(s1 + index) - *(unsigned char*)(s2 + index));	
}

// int main()
// {
// 	char hexchars [] = "hello";
// 	char hexchars2 [] = "hello";
// 	printf("%d\n", memcmp(hexchars, hexchars2, 3));
// 	printf("%d\n", ft_memcmp(hexchars, hexchars2, 3));
// }