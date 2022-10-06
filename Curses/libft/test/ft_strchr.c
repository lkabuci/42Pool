#include "libft.h"

char*	ft_strchr(const char *s, int c)
{
	size_t	index;

	index = -1;
	if (!c)
		return ("");
	while (*(s + ++index))
		if (*(s + index) == c)
			return ((char *)(s + index));
	return (0);
}

int main()
{
	printf("%s\n", strchr("redoneotwo", 'o'));
	printf("%s\n", ft_strchr("redoneotwo", 'o'));

	printf("%s\n", strchr("redoneotwo", 'x'));
	printf("%s\n", ft_strchr("redoneotwo", 'x'));

	printf("%s\n", strchr("redoneotwo", 0));
	printf("%s\n", ft_strchr("redoneotwo", 0));
}