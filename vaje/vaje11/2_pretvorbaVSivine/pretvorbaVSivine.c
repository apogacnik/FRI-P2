/*
 * programiranje 2, FRI
 * vaje 11 - Pretvorba v sivine
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje11/vaje11.pdf
 *
 * status: finished
 * testi: 10/10
 *
 * avtor: apogacnik
 * maj 2023
 *
*/

#include <stdio.h>
#include <stdlib.h>

void preberiHeader(FILE** infp, int *sirina, int *visina) {
  char tmp[10];

  // P6
  fscanf(*infp, "%s\n", tmp);
  // sirina, visina
  fscanf(*infp, "%d%d\n", sirina, visina);
  // 255
  fscanf(*infp, "%s\n", tmp);
}

void zapisiHeader(FILE** outfp, int sirina, int visina) {
  // P5
  fprintf(*outfp, "P5\n");
  // sirina, visina
  fprintf(*outfp, "%d %d\n", sirina, visina);
  // 255
  fprintf(*outfp, "255\n");
}

int main(int argc, char* argv[]) {
  FILE* infp = fopen(argv[1], "rb");
  FILE* outfp = fopen(argv[2], "wb");

  // preberi header .ppm in zapisi header .pgm
  int visina, sirina;
  preberiHeader(&infp, &sirina, &visina);
  zapisiHeader(&outfp, sirina, visina);

  // pretvorba: preberi barvni pixel → pretvori v sivinski → zapisi
  unsigned char *barvniPx = malloc(3 * sizeof(unsigned char)); 
  for(int i = 0; i < visina*sirina; i++) {
    fread(barvniPx, sizeof(unsigned char), 3, infp);
    int R = barvniPx[0];
    int G = barvniPx[1];
    int B = barvniPx[2];

    int sivinskiPx = (30*R + 59*G + 11*B)/100;

    fwrite(&sivinskiPx, sizeof(unsigned char), 1, outfp);
  }

  free(barvniPx);
  fclose(infp);
  fclose(outfp);

  return 0;
}
