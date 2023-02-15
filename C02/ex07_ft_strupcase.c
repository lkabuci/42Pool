char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}

#include <stdio.h>
int main()
{
	char str[100] = "let's capitalize this string";
	printf("%s\n", ft_strupcase(str));
}