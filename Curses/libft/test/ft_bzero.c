#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}


// int main()
// {
// 	char str[] = "Hello World";
// 	char str2[] = "Hello World";
// 	ft_bzero(str, 5);
// 	bzero(str2, 5);
// 	int i = 0;
// 	while (i < 11)
// 	{
// 		printf("%c", str[i]);		
// 		i++;
// 	}
// 	printf("\n");
// 	int j = 0;
// 	while (j < 11)
// 	{
// 		printf("%c", str2[j]);		
// 		j++;
// 	}
// }