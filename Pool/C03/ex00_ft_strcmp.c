int ft_strcmp(char *s1, char *s2)
{
    int idx;

    idx = 0;
    while (*(s1 + idx) && *(s2 + idx) && *(s1 + idx) == *(s2 + idx))
    {
        idx++;
    }
    return (*(s1 + idx) - *(s2 + idx));
}

#include <stdio.h>
int main()
{
	char *str1 = "Hello World";
	char *str2 = "Hello World";
	printf("%i\n", ft_strcmp(str1, str2));

	str2 = "ello World";
	printf("%i\n", ft_strcmp(str1, str2));

	str2 = "Aello World";
	printf("%i\n", ft_strcmp(str1, str2));
}