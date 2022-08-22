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

int ft_find_next_prime(int nb) {
  if (nb <= 2)
    return (2);
  while (!ft_is_prime(nb))
    nb++;
  return (nb);
}

#include <stdio.h>
int main() {
  printf("Next prime of -100 is: %i\n", ft_find_next_prime(-100));
  printf("Next prime of 0 is: %i\n", ft_find_next_prime(0));
  printf("Next prime of 1 is: %i\n", ft_find_next_prime(1));
  printf("Next prime of 2 is: %i\n", ft_find_next_prime(2));
  printf("Next prime of 15 is: %i\n", ft_find_next_prime(15));
  printf("Next prime of 13 is: %i\n", ft_find_next_prime(13));
  printf("Next prime of 2147483647 is: %i\n", ft_find_next_prime(2147483647));
  printf("Next prime of 100 is: %i\n", ft_find_next_prime(100));
}
