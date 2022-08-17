char    *ft_strcpy(char *dest, char *src)
{
    int idx;

    idx = -1;
    while (src[++idx])
        *(dest + idx) = *(src + idx);
    *(dest + idx) = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
	char *src = "Hello World!";
	char dest[100];
	char *out = ft_strcpy(dest, src);
	printf(out);
}