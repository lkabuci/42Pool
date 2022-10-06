#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	index;
	size_t	src_len;

	index = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0 || !dst)
		return (src_len);
	while (index < dstsize)
	{
		*(dst + index) = *(src + index);
		index++;
	}
	return ()
}