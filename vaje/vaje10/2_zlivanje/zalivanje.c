/*
 * programiranje 2, FRI
 * vaje 10 - Zalivanje
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje10/vaje10.pdf
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
#include <limits.h>

// Odpri datoteke
void openFiles(int n, FILE** infps, FILE** outfp) {
  char imeDatoteke[100];

  for (int i = 0; i < n; i++) {
    scanf("%s", imeDatoteke);
    infps[i] = fopen(imeDatoteke, "r");
  }
  scanf("%s", imeDatoteke);
  *outfp = fopen(imeDatoteke, "w");
}

// Zapri datoteke
void closeFiles(int n, FILE** infps, FILE** outfp) {
  for (int i = 0; i < n; i++) {
    fclose(infps[i]);
  }
  fclose(*outfp);
}

// Vrni indeks najmanjsega kandidata
int indeksMin(int n, int* kandidati) {
  int iMin;
  int min = INT_MAX;

  for (int i = 0; i < n; i++) {
    int kandidat = kandidati[i];
    if ((kandidat > 0) && (kandidat < min)) {
      min = kandidat;
      iMin = i;
    }
  }

  return iMin;
}

int main() {
  int n;
  scanf("%d", &n);

  FILE **infps = malloc(n * sizeof(FILE*));
  FILE *outfp;

  openFiles(n, infps, &outfp);

  // prvi elementi datotek so kandidati za najmanjse stevilo
  // min st izpisemo in iz te datoteke v kandidate preberemo naslednje st
  // if konec datoteke -> kandidat = -1, stKoncanih++

  int *kandidati = malloc(n * sizeof(int));
  int stKoncanih = 0;
  for (int i = 0; i < n; i++) {
    if (fscanf(infps[i], "%d", &kandidati[i]) < 1) {
      kandidati[i] = -1;
      stKoncanih++;
    }
  }

  while (stKoncanih < n) {
    int iMin = indeksMin(n, kandidati);
    fprintf(outfp, "%d\n", kandidati[iMin]);
    if (fscanf(infps[iMin], "%d", &kandidati[iMin]) < 1) {
      kandidati[iMin] = -1;
      stKoncanih++;
    }
  }

  closeFiles(n, infps, &outfp);
  free(infps);

  return 0;
}
