int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if  (str[i] < 'a'|| str[i] > 'z')
            return (0);
		i++;
    }
    return (1);
}

#include <stdio.h>
int main()
{
	char *str = "thisislower";
	char *str2 = "This !s Not";
	printf("%i\n", ft_str_is_lowercase(str));
	printf("%i\n", ft_str_is_lowercase(str2));
}