int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if  (str[i] < 'A'|| str[i] > 'Z')
            return (0);
		i++;
    }
    return (1);
}

#include <stdio.h>
int main()
{
	char *str = "THISISUPPERSTRING";
	char *str2 = "This !s Not";
	printf("%i\n", ft_str_is_uppercase(str));
	printf("%i\n", ft_str_is_uppercase(str2));
}