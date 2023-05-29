/*
 * programiranje 2, FRI
 * vaje 11 - Barva pike
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje11/vaje11.pdf
 *
 * status: finished
 * testi: 1/1
 *
 * avtor: apogacnik
 * maj 2023
 *
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  FILE* infp = fopen(argv[1], "rb");
  int vrstica = atoi(argv[2]);  // atoi pretvori niz v int
  int stolpec = atoi(argv[3]);

  char tmp[10];

  // P6
  fscanf(infp, "%s\n", tmp);

  // sirina, visina
  int sirina = 0;
  int visina = 0;
  fscanf(infp, "%d%d\n", &sirina, &visina);

  // 255
  fscanf(infp, "%s\n", tmp);

  // vsebina
  unsigned char* pike = malloc(3 * visina * sirina * sizeof(unsigned char));
  fread(pike, sizeof(unsigned char), 3 * visina * sirina, infp);

  // izlusci barvne komponente pike na podanih koordinatah
  // [{R, G, B}, {R, G, B}, {R, G, B}, sirina*vrstica = premik ↓
  //  {R, G, B}, {R, G, B}, {R, G, B}] +stolpec = premik→
  int indeks = 3 * (sirina * vrstica + stolpec);
  printf("%d %d %d\n", pike[indeks], pike[indeks + 1], pike[indeks + 2]);

  fclose(infp);

  return 0;
}
