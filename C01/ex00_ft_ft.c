void ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int main()
{
	int nbr = 15;
	printf("Before: %i\n", nbr);
	ft_ft(&nbr);
	printf("After: %i\n", nbr);
}