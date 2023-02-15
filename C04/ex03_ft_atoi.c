int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
        str++;
    while (*str && (*str == '+' || *str == '-'))
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str && (*str >= '0' && *str <= '9'))
    {
        result = (result * 10) + (*str - '0');
        str++;
    }
    return (result * sign);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    int result;
    if (argc != 2)
        return (1);
    result = ft_atoi(argv[1]);
    printf("result: %i\n", result);
    return (0);
}