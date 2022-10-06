#include "libft.h"

void*	ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	index = 0;
	if (dst == src || !len)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		len += 1;
		while (--len > 0)
			*((char *)dst + len - 1) = *((char *)src + len - 1);
	}
	return (dst);
}


// int main (void)
// {
//     char string[] = "Start Bull";
    
//     puts(string);
//     ft_memmove(string, string + 6, 4);
//     puts(string);
//     // memmove(fourth+5, fourth, 8);
//     // puts(fourth);
//     return 0;
// }