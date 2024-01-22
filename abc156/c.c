#include <stdio.h>

int main(void) {
  int i, p;

  int N;
  scanf("%d", &N);

  int X[N+1];
  for (i=0; i<N; i++) scanf("%d", &X[i]);

  int max = X[0], min = X[0];
  for (i=0; i<N; i++) {
    if (max < X[i]) max = X[i];
    if (min > X[i]) min = X[i];
  }

  int cst, cst_min = 10e9;
  for (p=min; p<=max; p++) {
    for (i=0, cst=0; i<N; i++) cst += (X[i]-p)*(X[i]-p);
    if (cst_min > cst) cst_min = cst;
  }

  printf("%d\n", cst_min);

  return 0;
}
