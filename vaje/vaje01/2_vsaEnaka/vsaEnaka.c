/*
 * programiranje 2, FRI
 * vaje 01 - Vsa enaka
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

  int result = 1;

  int prvo = getchar() - '0';
  getchar();

  for (int i = 1; i < n; i++) {
    int curr = getchar() - '0';
    getchar();

    if (prvo != curr) {
      result = 0;
      break;
    }
  }

  putchar(result + '0');
  putchar('\n');

  return 0;
}
