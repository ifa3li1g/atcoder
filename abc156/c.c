#include <stdio.h>

int main(void) {
  int i, p;

  int n;
  scanf("%d", &n);

  int x[n+1];
  for (i=0; i<n; i++) scanf("%d", &x[i]);

  int l = x[0], r = x[0];
  for (i=0; i<n; i++) {
    if (l > x[i]) l = x[i];
    if (r < x[i]) r = x[i];
  }

  int cost, cost_min = 10e6;
  for (p=l; p<=r; p++) {
    for (cost=0, i=0; i<n; i++) cost += (x[i]-p)*(x[i]-p);
    if (cost_min > cost) cost_min = cost;
  }

  printf("%d\n", cost_min);

  return 0;
}
