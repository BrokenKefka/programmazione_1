/* Lezione 7 */

/* Esercizio 1
Scrivere un programma che stampi il contenuto di una matrice di interi, generati in
maniera casuale nell’intervallo [0, 100].
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define MIN 0
#define MAX 100
int main(void) {
    int matrice [ROWS][COLS];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrice[i][j] = MIN + rand()%(MAX - MIN + 1);
            printf("\t%d", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/* Esercizio 2
Scrivere un programma in cui si dichiara una matrice NxM, popolata con valori casuali a
piacere. Stampare la matrice e, successivamente, la somma di tutti i valori contenuti.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 7
#define COLS 5
#define MIN 0
#define MAX 100
int main(void) {
    int matrice [ROWS][COLS];
    int i, j, somma;
    somma = 0;

    srand(time(NULL));

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrice[i][j] = MIN + rand()%(MAX - MIN + 1);
            somma += matrice[i][j];
            printf("\t%d", matrice[i][j]);
        }
        printf("\n");
    }

    printf("La somma degli elementi della matrice è %d", somma);

    return 0;
}
*/

/* Esercizio 3 DA STAMPARE AL CONTRARIO
Scrivere un programma che stampi una matrice di float casuali dal primo all’ultimo
elemento e successivamente dall’ultimo al primo.
Esempio: la matrice 3x3 { {1,2,3}, {4,5,6}, {7,8,9} } sarà stampata come { {9,8,7}, {6,5,4},
{3,2,1} }
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define BASE 10
#define ESPONENTE 3
#define ROWS 3
#define COLS 3
#define MIN 0
#define MAX 100

int main(void) {
    float matrice [ROWS][COLS];
    int i, j, min, max;

    srand(time(NULL));

    min = MIN * pow(BASE, ESPONENTE);
    max = MAX * pow(BASE, ESPONENTE);

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrice[i][j] = (min + rand()%(max - min + 1)) / pow(BASE, ESPONENTE);
            printf("\t%.2f", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


/* Esercizio 4
Generare una matrice identità (1 sulla diagonale principale, i restanti valori a 0) utilizzando
un solo ciclo for.
*/

/*
#include <stdio.h>
#define ROWS 6
#define COLS 6

int main() {

    int matrice [ROWS][COLS] = {1};
    int i,j;


    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (i == j){
                matrice [i][j] = 1;
            }
            printf(" %d ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/* Esercizio 6
Scrivere un programma in cui si dichiarano due matrici A e B, inizializzate a piacere.
Dichiarare anche una terza matrice C che contenga la somma, elemento per elemento,
delle altre due matrici.
*/


#include <stdio.h>
#define ROWS 2
#define COLS 2


int main() {
    int matrice[ROWS][COLS];
    int i, j, m, n, k, z;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Inserisci un numero a piacere: \n");
            scanf("%d", &matrice[i][j]);
        }
    }

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d", matrice[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    for (m = 0; m < ROWS; m++) {
        for (n = 0; n < COLS; n++) {
            printf("Inserisci un numero a piacere: \n");
            scanf("%d", &matrice[m][n]);
        }
    }

    for (m = 0; m < ROWS; m++) {
        for (n = 0; n < COLS; n++) {
            printf("%d", matrice[m][n]);
            printf("\t");
        }
        printf("\n");
    }


    for (k = 0; k < ROWS; k++) {
        for (z = 0; z < COLS; z++) {
            matrice[k][z] = matrice[i][j] + matrice[m][n];
        }
    }

    for (k = 0; k < ROWS; k++) {
        for (z = 0; z < COLS; z++) {
            printf("%d", matrice[k][z]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}
