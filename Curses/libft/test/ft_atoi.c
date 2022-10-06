#include "libft.h"

int		ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str && ((*str >= '\t' && *str <= '\r') || *str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
   while (*str && ft_isdigit(*str))
   {
		result = result * 10 + *str - '0';
		// printf("%i\n", result);
      str++;
   }
   return (result * sign);
}

int main()
{
	// int i = 2147483647;
	// printf("%i\n",++i);
	// printf("%i\n",++i);
	printf("%i\n", ft_atoi("   2147483649qn"));
	printf("%i\n", atoi("   -2147483649qn"));
}