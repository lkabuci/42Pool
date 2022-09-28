#include <unistd.h>

void print_char(char c) { write(1, &c, 1); }

int main(int argc, char **argv) {
  int str_idx;
  int char_idx;

  str_idx = argc - 1;
  while (str_idx >= 1) {
    char_idx = 0;
    while (argv[str_idx][char_idx]) {
      print_char(argv[str_idx][char_idx]);
      char_idx++;
    }
    str_idx--;
    print_char('\n');
  }
}
