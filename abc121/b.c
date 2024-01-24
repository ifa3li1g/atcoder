#include <stdio.h>

int main(void) {
  int i, j;

  int n, m, c;
  scanf("%d %d %d", &n, &m, &c);

  int b[m+1];
  for (i=0; i<m; i++) scanf("%d", &b[i]);

  int a[n+1][m+1];
  for (i=0; i<n; i++) for (j=0; j<m; j++) scanf("%d", &a[i][j]);

  int count = 0, sum;
  for (i=0; i<n; i++) {
    for(sum=c, j=0; j<m; j++) sum += a[i][j] * b[j];

    if (sum > 0) count++;
  }

  printf("%d\n", count);

  return 0;
}
