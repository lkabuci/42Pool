#include "libft.h"

void*	ft_calloc(size_t count, size_t size)
{
	char* ptr;

	ptr = malloc(size * count);
	while (size > 0)
	{
		*(ptr + size) = '\0';
		size--;
	}
	
	return ((void*)ptr);
}