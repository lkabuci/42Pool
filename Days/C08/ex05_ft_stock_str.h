#include "ft_stock_str.h"
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_putstr(char *str) {
  int i;

  i = -1;
  while (*(str + ++i))
    ft_putchar(*(str + i));
}

void ft_putnbr(int nbr) {
  long int long_nbr;

  long_nbr = nbr;
  if (long_nbr < 0) {
    ft_putchar('-');
    long_nbr *= -1;
  }
  if (long_nbr < 10)
    ft_putchar(long_nbr + '0');
  else {
    ft_putnbr(long_nbr / 10);
    ft_putchar((long_nbr % 10) + '0');
  }
}

void ft_show_tab(struct s_stock_str *par) {
  int idx;

  idx = -1;
  while (par[++idx].str) {
    ft_putstr(par[idx].str);
    ft_putchar('\n');
    ft_putnbr(par[idx].size);
    ft_putchar('\n');
    ft_putstr(par[idx].copy);
    ft_putchar('\n');
  }
}
