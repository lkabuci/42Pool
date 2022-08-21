int ft_recursive_power(int nb, int power) {
  if (power < 0)
    return (0);
  if ((nb == 0 && power == 0) || power == 0)
    return (1);
  if (power > 1)
    return (nb * ft_recursive_power(nb, power - 1));
  if (power == 1)
    return (nb);
  return (0);
}

#include <stdio.h>
int main() {
  printf("power(0, 0) = %i\n", ft_recursive_power(0, 0));
  printf("power(2, 0) = %i\n", ft_recursive_power(2, 0));
  printf("power(0, 2) = %i\n", ft_recursive_power(0, 2));
  printf("power(10, -5) = %i\n", ft_recursive_power(10, -5));
  printf("power(2, 3) = %i\n", ft_recursive_power(2, 3));
  printf("power(-2, 3) = %i\n", ft_recursive_power(-2, 3));
}
