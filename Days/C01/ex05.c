#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

int main()
{
	char *twitter = "https://twitter.com/kaboussi_";
	char *github = "https://github.com/kaboussi";
	ft_putstr(twitter);
	write(1, "\n", 1);
	ft_putstr(github);
	write(1, "\n", 1);
}