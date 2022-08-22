int ft_sqrt(int nb) {
  int mul;

  mul = 1;
  if (nb <= 0)
    return (0);
  while (mul <= nb && mul <= 46341) {
    if (mul * mul == nb)
      return (mul);
    mul++;
  }
  return (0);
}

#include <stdio.h>
int main() {
  printf("sqrt(-10) = %i\n", ft_sqrt(-10));
  printf("sqrt(1) = %i\n", ft_sqrt(1));
  printf("sqrt(0) = %i\n", ft_sqrt(0));
  printf("sqrt(25) = %i\n", ft_sqrt(25));
  printf("sqrt(13) = %i\n", ft_sqrt(13));
  printf("sqrt(2147395600) = %i\n", ft_sqrt(2147395600));
}
