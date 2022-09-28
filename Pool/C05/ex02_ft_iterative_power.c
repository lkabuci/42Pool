int ft_iterative_power(int nb, int power) {
  int res;

  res = 1;
  if (nb == 0 && power == 0)
    return (1);
  if (power < 0 || nb == 0)
    return (0);
  while (power != 0) {
    res *= nb;
    power--;
  }
  return (res);
}

#include <stdio.h>
int main() {
  printf("power(0, 0) = %i\n", ft_iterative_power(0, 0));
  printf("power(5, 0) = %i\n", ft_iterative_power(5, 0));
  printf("power(0, 5) = %i\n", ft_iterative_power(0, 5));
  printf("power(2, 3) = %i\n", ft_iterative_power(2, 3));
  printf("power(4, -10) = %i\n", ft_iterative_power(4, -10));
}
