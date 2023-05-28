/*
 * programiranje 2, FRI
 * vaje 09 - Naloga
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje09/vaje09.pdf
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

#include "naloga.h"

int vsotaI(Vozlisce* zacetek) {
  Vozlisce *p = zacetek;

  int sum = 0;
  while (p != NULL) {
    sum += p->podatek;
    p = p->naslednje;
  }

  return sum;
}

int vsotaR(Vozlisce* zacetek) {
  if (zacetek == NULL) return 0;

  return (zacetek->podatek + vsotaR(zacetek->naslednje));
}

Vozlisce* vstaviUrejenoI(Vozlisce* zacetek, int element) {
  Vozlisce *novo = malloc(sizeof(Vozlisce));
  novo->podatek = element;

  // Vstavljanje na zacetek seznama
  if (zacetek == NULL) {
    return novo;
  } else if (zacetek->podatek > element) {
    novo->naslednje = zacetek;
    return novo;

  // Vstavljanje na nezacetno pozicijo
  } else {
    Vozlisce *v = zacetek;
    while (v->naslednje != NULL && v->naslednje->podatek < element) {
      v = v->naslednje;
    }

    novo->naslednje = v->naslednje;
    v->naslednje = novo;
  }

  return zacetek;
}

Vozlisce* vstaviUrejenoR(Vozlisce* zacetek, int element) {
  if (zacetek == NULL || element <= zacetek->podatek) {
    Vozlisce *novo = malloc(sizeof(Vozlisce));
    novo->podatek = element;
    novo->naslednje = zacetek;
    return novo;
  }

  zacetek->naslednje = vstaviUrejenoR(zacetek->naslednje, element);
  return zacetek;
}

int main() {

  return 0;
}
