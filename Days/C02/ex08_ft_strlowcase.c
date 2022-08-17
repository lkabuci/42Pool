char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

#include <stdio.h>
int main()
{
	char str[100] = "LET'S LOWER THIS STRING";
	printf("%s\n", ft_strlowcase(str));
}