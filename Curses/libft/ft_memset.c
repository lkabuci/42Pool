#include "libft.h"

void*	ft_memset(void *b, int c, size_t len)
{
	size_t	index;
	
	index = -1;
	while (++index < len)
	{
		// *(char *)(b + index) = c;
		((unsigned char *)b)[index] = (unsigned char)c;
	}
	return b;
}


// int main()
// {
// 	char tab[] = "";
// 	// printf("%s\n", ft_memset(tab, 65, 2));
// 	printf("%s\n", memset(tab, 65, 200));

// }