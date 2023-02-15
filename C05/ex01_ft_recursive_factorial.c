int ft_recursive_factorial(int nb) {
  if (nb < 0)
    return (0);
  if (nb == 0 || nb == 1)
    return (1);
  return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int main() {
  printf("fact(0) is %i\n", ft_recursive_factorial(0));
  printf("fact(-10) is %i\n", ft_recursive_factorial(-10));
  printf("fact(1) is %i\n", ft_recursive_factorial(1));
  printf("fact(2) is %i\n", ft_recursive_factorial(2));
  printf("fact(5) is %i\n", ft_recursive_factorial(5));
}
