void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main()
{
	int a = 15;
	int b = 10;
	printf("Before: a = %i, b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("After: a = %i, b = %i\n", a, b);
}