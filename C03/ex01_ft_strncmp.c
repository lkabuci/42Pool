int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    idx;

    idx = 0;
    if (n == 0)
        return (0);
    while (
        *(s1 + idx) && *(s2 + idx)
        && *(s1 + idx) == *(s2 + idx)
        && idx < n - 1
    )
    {
        idx++;
    }
    return (*(s1 + idx) - *(s2 + idx));
}

#include <stdio.h>
int main()
{
    char s1[] = "Hello";
    char s2[] = "HeGlo";
    printf("Identical: %i\n", ft_strncmp(s1, s2, 2));
    printf("Not identical: %i\n", ft_strncmp(s1, s2, 3));
}