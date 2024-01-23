#include <stdio.h>

int main(void) {
  int i;

  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);

  char s[n+1];
  scanf("%s", s);

  int total_pp = 0, overseas_pp = 0, flag = 0;
  for (i=0; i<n; i++) {
    flag = 0;

    switch (s[i]) {
    case 'a':
      if (total_pp < a+b) {
        flag = 1;
        total_pp++;
      }
      break;
    case 'b':
      if (total_pp < a+b && overseas_pp+1 <= b) {
        flag = 1;
        total_pp++;
        overseas_pp++;
      }
      break;
    default:
      break;
    }

    printf("%s\n", flag ? "Yes" : "No");
  }

  return 0;
}
