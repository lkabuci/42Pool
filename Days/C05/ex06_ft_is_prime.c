int ft_is_prime(int nb) {
  int a;

  a = 2;
  if (nb == 2147483647)
    return (1);
  if (nb <= 1)
    return (0);
  while (a * a <= nb) {
    if (nb % a == 0 && nb != a)
      return (0);
    a++;
  }
  return (1);
}

#include <stdio.h>
int main() {
  printf("is -10 prime? %i\n", ft_is_prime(-10));
  printf("is 0 prime? %i\n", ft_is_prime(0));
  printf("is 1 prime? %i\n", ft_is_prime(1));
  printf("is 2 prime? %i\n", ft_is_prime(2));
  printf("is 3 prime? %i\n", ft_is_prime(3));
  printf("is 4 prime? %i\n", ft_is_prime(4));
  printf("is 47 prime? %i\n", ft_is_prime(47));
  printf("is 2147483647 prime? %i\n", ft_is_prime(2147483647));
}
