unsigned    int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len;

    i = 0;
    len = 0;
    while (src[len])
        len++;
    if (size > 0)
    {
        while (i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (len);
}

#include <stdio.h>
int main()
{
	char *src = "Hello world";
	char dest[100];
	unsigned int size = ft_strlcpy(dest, src, 6);
	printf("size returned: %u\n", size);
	printf("destination: %s\n", dest);
}