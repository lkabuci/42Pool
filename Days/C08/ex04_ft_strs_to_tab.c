#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (*(str + i))
    i++;
  return (i);
}

char *ft_strdup(char *str) {
  int i;
  int len;
  char *copy;

  i = -1;
  len = ft_strlen(str);
  copy = (char *)malloc(sizeof(char) * len + 1);
  if (!copy)
    return (0);
  while (++i < len)
    *(copy + i) = *(str + i);
  *(copy + i) = '\0';
  return (copy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av) {
  struct s_stock_str *output;
  int i;

  i = -1;
  output = (struct s_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
  if (!output)
    return (0);
  while (++i < ac) {
    output[i].size = ft_strlen(av[i]);
    output[i].copy = ft_strdup(av[i]);
    output[i].str = av[i];
  }
  output[i].str = 0;
  return (output);
}
