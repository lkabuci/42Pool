#include "libft.h"

void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	index;
	size_t	dst_len;

	index = -1;
	if (dst == src || !n)
		return (dst);
	while (++index < n)
		*(char *)(dst + index) = *(char *)(src + index);
	return (dst);
}

// int main()
// {
// 	char dst[400] = "Hello World";
// 	char src[] = "VVYES";
// 	printf("%s\n", ft_memcpy(dst, src, 1));
// }
