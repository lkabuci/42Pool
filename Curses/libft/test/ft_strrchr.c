#include "libft.h"

char*	ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (--len > 0)
		if (*(s + len) == c)
			return ((char *)s + len);
	return (0);
}

// int main()
// {
// 	printf("%s\n", strrchr("redoneotw", 'o'));
// 	printf("%s\n", ft_strrchr("redoneotw", 'o'));

// 	printf("%s\n", strrchr("redoneotw", 'x'));
// 	printf("%s\n", ft_strrchr("redoneotw", 'x'));

// 	printf("%s\n", strrchr("redoneotw", 0));
// 	printf("%s\n", ft_strrchr("redoneotw", 0));
// }