// 10/10 javni
// 50/50 skriti

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int sumPredhodnih = 0;
  int curr;
  int d;
  for (d = 0; d < n; d++) {
    scanf("%d", &curr);

    // povprecje = sumPredhodnik/d, oz. 0, ce d = 0
    int povprecje = (d > 0) ? sumPredhodnih/d : 0;

    if (curr <= povprecje) break;
    sumPredhodnih += curr;
  }

  printf("%d\n", d);

  return 0;
}
