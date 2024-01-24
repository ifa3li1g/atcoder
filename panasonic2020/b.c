#include <stdio.h>

int main(void) {
  long long h, w;
  scanf("%lld %lld", &h, &w);

  if (h == 1 || w == 1) {
    printf("%d\n", 1);
  } else {
    printf("%lld\n", (h*w+1)/2);
  }

  return 0;
}
