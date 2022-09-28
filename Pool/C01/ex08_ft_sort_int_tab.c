void    swap(int *i, int *j)
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int j;
    int i;

    i = -1;
    while (++i < size)
    {
        j = i;
        while (++j < size)
            if (tab[i] > tab[j])
                swap(&tab[i], &tab[j]);
    }
}


#include <stdio.h>
int main()
{
	int tab[10] = {5, 1, 0, 9, 7, 3, 2, 8, 4, 6};
	int i = -1;
	printf("Before: ");
	while (++i < 10)
		printf("%i", tab[i]);
	printf("\nSorted: ");
	ft_sort_int_tab(tab, 10);
	i = -1;
	while (++i < 10)
		printf("%i", tab[i]);
}