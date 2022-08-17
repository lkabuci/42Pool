int ft_strlen(char *str)
{
    int idx;

    idx = 0;
    while (*(str + idx))
        idx++;
    return (idx);
}

char    *ft_strcat(char *dest, char *src)
{
    int dest_len;
    int counter;

    counter = 0;
    dest_len = ft_strlen(dest);
    while (src[counter])
    {
        dest[dest_len + counter] = src[counter];
        counter++;
    }
    dest[dest_len + counter] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char src[7] = " World";
    char dest[6] = "Hello";
    printf("%s\n", ft_strcat(dest, src));
}