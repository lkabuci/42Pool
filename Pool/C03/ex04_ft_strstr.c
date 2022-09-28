char    *ft_strstr(char *str, char *to_find)
{
    int idx;
    int j;

    idx = 0;
    if (!*to_find)
        return (str);
    while (str[idx])
    {
        j = 0;
        while (str[idx + j] && str[idx + j] == to_find[j])
        {
            if (!to_find[j + 1])
                return (&str[idx]);
            j++;
        }
        idx++;
    }
    return (0);
}

#include <stdio.h>
int main()
{
	char *str = "Hello World";
	char *find_all_str = "Hello World";

	printf("%s\n", ft_strstr(str, find_all_str));

	char *find_first_charachter = "W";
	printf("%s\n", ft_strstr(str, find_first_charachter));

	char *a_word_do_not_exists = "Z";
	printf("%s\n", ft_strstr(str, a_word_do_not_exists));
}