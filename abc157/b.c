#include <stdio.h>

int main(void) {
  int i, j, k;

  int a[3+1][3+1];
  for (i=0; i<3; i++) for (j=0; j<3; j++) scanf("%d", &a[i][j]);

  int n;
  scanf("%d", &n);

  int b[n+1];
  for (i=0; i<n; i++) scanf("%d", &b[i]);

  for (i=0; i<n; i++) {
    for (j=0; j<3; j++) for (k=0; k<3; k++) {
      if (b[i] == a[j][k]) a[j][k] = 0;
    }
  }
    
  int is_bingo = 0;
  for (i=0; i<3; i++) {
    if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0) is_bingo = 1;
    if (a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0) is_bingo = 1;
  }
  if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0) is_bingo = 1;
  if (a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0) is_bingo = 1;

  printf("%s\n", is_bingo ? "Yes" : "No");

  return 0;
}
