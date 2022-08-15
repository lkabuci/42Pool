int ft_str_is_numeric(char *str)
{
    int idx;

    idx = 0;
    while (str[idx])
    {
        if (str[idx] < '0' || str[idx] > '9')
            return (0);
        idx++;
    }
    return (1);
}

#include <stdio.h>
int main()
{
	char *str = "012456";
	char *str2 = "This !s Not";
	printf("%i\n", ft_str_is_numeric(str));
	printf("%i\n", ft_str_is_numeric(str2));
}