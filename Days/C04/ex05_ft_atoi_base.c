#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int is_valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    if (!*base || !*(base + 1))
        return (0);
    while (*(base + i))
    {
        j = i;
        while (*(base + j++))
        {
            if (*(base + i) == *(base + j)
                || *(base + j) == '-'
                || *(base + j) == '+'
            )
                return (0);
        }
        i++;
    }
    return (1);
}

int is_char_in_base(char c, char *base)
{
    int i;

    i = 0;
    while (*(base + i))
    {
        if (c == *(base + i))
            return (1);
        i++;
    }
    return (0);
}

int get_base_index(char c, char *base)
{
    int index;

    index = 0;
    while (base[index])
    {
        if (c == base[index])
            return (index);
        index++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int result;
    int sign;
    int base_len;

    result = 0;
    sign = 1;
    base_len = ft_strlen(base);
    if (!is_valid_base(base))
        return (0);
    while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
        str++;
    while (*str && (*str == '+' || *str == '-'))
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str && is_char_in_base(*str, base))
    {
        result = result * 10 + get_base_index(*str, base);
        str++;
    }
    return (result * sign);
}

int main(int c, char **v)
{
    (void) c;
    int res = ft_atoi_base(v[1], v[2]);
    printf("%i\n", res);
}