char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i == 0 || (str[i - 1] >= ' ' && str[i - 1] < '0')
            || (str[i - 1] > '9' && str[i - 1] < 'A')
            || (str[i - 1] > 'Z' && str[i - 1] < 'a')
            || (str[i - 1] > 'z' && str[i - 1] <= '~')
            || str[i - 1] == '\n' || str[i - 1] == '\t')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

#include <stdio.h>
int main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}