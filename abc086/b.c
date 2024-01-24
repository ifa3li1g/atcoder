#include <stdio.h>

int main(void) {
  int i, c;

  int a, b; 
  scanf("%d %d", &a, &b);

  c = b;

  int b_digit = 0;
  do {
    c /= 10;
    a *= 10;
  } while (c);

  int ab = a + b;
  for (i=0; i<ab; i++) {
    if (i*i == ab) {
      printf("Yes\n");
      return 0;
    }
  }

  printf("No\n");

  return 0;
}
