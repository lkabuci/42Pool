#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

int main(int argc, char **argv) {
  int str_idx;
  int char_idx;

  str_idx = 1;
  char_idx = 0;
  while (str_idx < argc) {
    while (argv[str_idx][char_idx]) {
      ft_putchar(argv[str_idx][char_idx]);
      char_idx++;
    }
    ft_putchar('\n');
    str_idx++;
    char_idx = 0;
  }
}
