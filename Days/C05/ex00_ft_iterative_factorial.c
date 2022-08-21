int ft_iterative_factorial(int nb) {
  int idx;
  int result;

  idx = 1;
  result = 1;
  if (nb < 0)
    return (0);
  if (nb == 0 || nb == 1)
    return (1);
  while (idx <= nb) {
    result *= idx;
    idx++;
  }
  return (result);
}

#include <stdio.h>
int main() {
  printf("fact(0) is %i\n", ft_iterative_factorial(0));
  printf("fact(-10) is %i\n", ft_iterative_factorial(-10));
  printf("fact(1) is %i\n", ft_iterative_factorial(1));
  printf("fact(2) is %i\n", ft_iterative_factorial(2));
  printf("fact(5) is %i\n", ft_iterative_factorial(5));
}
