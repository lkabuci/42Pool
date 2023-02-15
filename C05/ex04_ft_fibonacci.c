int ft_fibonacci(int index) {
  if (index < 0)
    return (-1);
  if (index == 0)
    return (0);
  if (index == 1 || index == 2)
    return (1);
  return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>
int main() {
  printf("fab(-10) = %i\n", ft_fibonacci(-10));
  printf("fab(0) = %i\n", ft_fibonacci(0));
  printf("fab(1) = %i\n", ft_fibonacci(1));
  printf("fab(2) = %i\n", ft_fibonacci(2));
  printf("fab(5) = %i\n", ft_fibonacci(5));
}
