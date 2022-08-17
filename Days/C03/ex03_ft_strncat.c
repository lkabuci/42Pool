int ft_strlen(char *str)
{
    int idx;

    idx = 0;
    while (str[idx])
        idx++;
    return (idx);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    idx;
    unsigned int    len;

    idx = 0;
    len = ft_strlen(dest);
    while (src[idx] && idx < nb)
    {
        dest[len + idx] = src[idx];
        idx++;
    }
    dest[len + idx] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char src[7] = " Hello";
    char dest[6] = "World";
    printf("%s\n", ft_strncat(dest, src, 4));
}