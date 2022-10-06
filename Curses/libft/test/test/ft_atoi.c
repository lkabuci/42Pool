#include "../libft.h"


int main()
{
	printf("My atoi: %i\n", ft_atoi("    +234ab"));
	printf("My atoi: %i\n", ft_atoi("    -234ab"));
	printf("My atoi: %i\n\n\n", ft_atoi("    +-234ab"));

	printf("atoi: 	%i\n", atoi("   +234ab"));
	printf("atoi: 	%i\n", atoi("    -234ab"));
	printf("atoi: 	%i\n", atoi("    +-234ab"));
}
