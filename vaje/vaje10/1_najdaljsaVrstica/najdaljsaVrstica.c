/*
 * programiranje 2, FRI
 * vaje 10 - Najdaljsa vrstica
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje10/vaje10.pdf
 *
 * status: finished
 * testi: /
 *
 * avtor: apogacnik
 * maj 2023
 *
*/

// Pozeni prog.: ./najdaljsaVrstica vrba.txt naj.txt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DOLZINA 1000000

int main(int argc, char *argv[]) {
  FILE* infp = fopen(argv[1], "r");
  FILE* outfp = fopen(argv[2], "w");

  char *currVrstica = malloc(MAX_DOLZINA);
  char *najVrstica = malloc(MAX_DOLZINA);

  while(fgets(currVrstica, MAX_DOLZINA, infp) != NULL) {
    if (strlen(currVrstica) > strlen(najVrstica)) {
      strcpy(najVrstica, currVrstica);
    }
  }

  fputs(najVrstica, outfp);

  free(currVrstica);
  free(najVrstica);
  fclose(infp);
  fclose(outfp);

  return 0;
}
