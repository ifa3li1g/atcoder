#include <stdio.h>

int main(void) {
  int i;

  int n;
  scanf("%d", &n);

  for (i=1; i<=n; i++) {
    if ((int)(i*1.08) == n) {
      printf("%d\n", i);
      return 0;
    }
  }

  printf(":(\n");

  return 0;
}
