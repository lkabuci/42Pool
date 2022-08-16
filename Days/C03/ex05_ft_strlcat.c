int ft_strlen(char *str)
{
    int idx;

    idx = 0;
    while (*(str + idx))
        idx++;
    return (idx);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    counter;
    unsigned int    src_len;
    unsigned int    dest_len;

    counter = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = dest_len;
    if (size == 0)
        return (src_len);
    if (size <= dest_len)
        return (src_len + size);
    while (src[counter] && i < size - 1)
    {
        dest[i] = src[counter];
        i++;
        counter++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}

#include <stdio.h>
int main()
{
	char dest[11] = "Hello";
	char src[6] = " World";

	/*
		If the size is set to 0 "ft_strlcat" will return the the length of the source
		without changing the dest
	*/ 
	printf("size of source: %u\n", ft_strlcat(dest, src, 0));
	printf("%s\n", dest);

	/*
		if the "size" is <= "dest" lenght this means that there's no free space to add more
		element to the dest
		in this case the function should return the the size + the src lenght 
		without touching the dest 
	*/
	printf("source len + size %u\n", ft_strlcat(dest, src, 2));
	printf("%s\n", dest);

	/* 
		if there's enough space to fit n element of src in dest
		it'll be concatinated and return the size of the dest after concatination
		which means ft_strlen(src) + ft_strlen(dest)
	*/
	printf("%u\n", ft_strlcat(dest, src, 12));
	printf("%s\n", dest);

}