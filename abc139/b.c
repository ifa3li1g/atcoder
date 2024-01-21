#include <stdio.h>

int main(void) {
  int A, B;
  scanf("%d %d", &A, &B);

  int ol = 1, cnt = 0;
  while (ol < B) {
    ol = ol + A - 1;
    cnt++;
  }

  printf("%d\n", cnt);

  return 0;
}
