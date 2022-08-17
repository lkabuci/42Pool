int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if  (str[i] < ' '|| str[i] > '~')
            return (0);
		i++;
    }
    return (1);
}

#include <stdio.h>
int main()
{
	char *str = "this \\is $ printable";
	char *str2 = "This \nis \tNot";
	printf("%i\n", ft_str_is_printable(str));
	printf("%i\n", ft_str_is_printable(str2));
}