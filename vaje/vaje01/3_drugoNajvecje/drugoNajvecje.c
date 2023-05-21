/*
 * programiranje 2, FRI
 * vaje 01 - Drugo najvecje
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje01/vaje01.pdf
 *
 * status: finished
 * testi: 10/10
 *
 * avtor: apogacnik
 * marec 2023
 *
*/

#include <stdio.h>

int main() {
  int n = getchar() - '0';
  getchar();

  int naj = 0;
  int drugoNaj = 0;

  for (int i = 0; i < n; i++) {
    int curr = getchar() - '0';
    getchar();

    if (curr > naj) {
      drugoNaj = naj;
      naj = curr;
    } else if (curr > drugoNaj) {
      drugoNaj = curr;
    }
  }

  printf("%d\n", drugoNaj);

  return 0;
}
