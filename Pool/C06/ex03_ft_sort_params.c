#include <unistd.h>

void print_char(char c) { write(1, &c, 1); }

void swap(char **str1, char **str2) {
  char *tmp;

  tmp = *str1;
  *str1 = *str2;
  *str2 = tmp;
}

int str_cmp(char *str1, char *str2) {
  int i;

  i = 0;
  while (*(str1 + i) && *(str2 + i) && *(str1 + i) == *(str2 + i))
    i++;
  return (*(str1 + i) - *(str2 + i));
}

void sort(int argc, char **argv) {
  int idx;
  int v;

  v = 0;
  idx = 1;
  while (idx <= argc - 2) {
    v = idx + 1;
    while (v <= argc - 1) {
      if (str_cmp(argv[idx], argv[v]) > 0)
        swap(&argv[idx], &argv[v]);
      v++;
    }
    idx++;
  }
}

int main(int argc, char **argv) {
  int str_idx;
  int char_idx;

  str_idx = 1;
  char_idx = 0;
  sort(argc, argv);
  while (str_idx < argc) {
    while (argv[str_idx][char_idx]) {
      print_char(argv[str_idx][char_idx]);
      char_idx++;
    }
    print_char('\n');
    str_idx++;
    char_idx = 0;
  }
}
