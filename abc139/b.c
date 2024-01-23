#include <stdio.h>

int main(void) {
  int A, B;
  scanf("%d %d", &A, &B);

  int n_outlet = 1, count = 0;
  while (n_outlet < B) {
    n_outlet--;
    n_outlet += A;
    count++;
  }

  printf("%d\n", count);

  return 0;
}
