int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (*(str + i))
    {
        if ((*(str + i) >= 'a' && *(str + i) <= 'z')
            || (*(str + i) >= 'A' && *(str + i) <= 'Z'))
            i++;
        else
            return (0);
    }
    return (1);
}

#include <stdio.h>
int main()
{
	char *str = "thisIsAnAlphabetString";
	char *str2 = "This !s Not";
	printf("%i\n", ft_str_is_alpha(str));
	printf("%i\n", ft_str_is_alpha(str2));
}