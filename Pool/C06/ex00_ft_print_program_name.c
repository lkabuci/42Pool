#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

int main(int argc, char **argv) {
  int idx;

  idx = 0;
  if (argc == 1) {
    while (argv[0][idx]) {
      ft_putchar(argv[0][idx]);
      idx++;
    }
    ft_putchar('\n');
  }
}
