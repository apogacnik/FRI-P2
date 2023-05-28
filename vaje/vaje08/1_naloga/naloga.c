/*
 * programiranje 2, FRI
 * vaje 08 - Naloga
 * navodila: https://github.com/apogacnik/FRI-P2/blob/master/vaje/vaje08/vaje08.pdf
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
#include <string.h>

#include "naloga.h"

int poisciStudenta(Student** studentje, int stStudentov, int vpisna) {
  for (int i = 0; i < stStudentov; i++) {
    if (studentje[i]->vpisna == vpisna) return i;
  }

  return -1;
}

int poisciPO(Student* student, char* predmet) {
  for (int i = 0; i < (student->stPO); i++) {
    if(strcmp(student->po[i].predmet, predmet) == 0) {
      return i;
    }
  }

  return -1;
}

int dodaj(Student** studentje, int stStudentov, int vpisna, char* predmet, int ocena) {
  int iStudenta = poisciStudenta(studentje, stStudentov, vpisna);

  // Student ne obstaja
  if (iStudenta == -1) {
    Student *novStudent = malloc(sizeof(Student));
    novStudent->vpisna = vpisna;
    novStudent->stPO = 1;
    novStudent->po = malloc(10 * sizeof(PO));
    strcpy(novStudent->po[0].predmet, predmet);
    novStudent->po[0].ocena = ocena;

    // Vpisi novega studenta na konec tabele
    studentje[stStudentov] = novStudent;
    stStudentov++;

  // Student ze obstaja
  } else {
    Student *currStudent = studentje[iStudenta];
    int iPO = poisciPO(currStudent, predmet);

    // PO ne obstaja
    if (iPO == -1) {
      iPO = currStudent->stPO;
      strcpy(currStudent->po[iPO].predmet, predmet);
      currStudent->po[iPO].ocena = ocena;
      currStudent->stPO++;

    // PO obstaja -> posodobi oceno
    } else {
      currStudent->po[iPO].ocena = ocena;
    }
  }

  return stStudentov;
}

int main() {

  return 0;
}
