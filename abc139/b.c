#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  int n_outlet = 1, count = 0;
  while (n_outlet < b) {
    n_outlet--;
    n_outlet += a;
    count++;
  }

  printf("%d\n", count);

  return 0;
}
