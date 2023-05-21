/*
 * programiranje 2, FRI
 * vaje 01 - Vsota po modulu
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje01/vaje01.pdf
 *
 * status: finished
 * testi: /
 *
 * avtor: apogacnik
 * marec 2023
 *
*/

#include <stdio.h>

int main() {
  int a = getchar() - '0';
  getchar();
  int b = getchar() - '0';

  putchar(((a + b) % 10) + '0');
  putchar('\n');

  return 0;
}
