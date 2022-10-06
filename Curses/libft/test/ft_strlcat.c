#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	index;

	index = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (*(src + index) && (dst_len + index < dstsize - 1))
	{
		*(dst + dst_len + index) = *(src + index);
		index++;
	}
	*(dst + index) = '\0';
	return (dst_len + src_len);
}

