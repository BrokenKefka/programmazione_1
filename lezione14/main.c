/* Lezione 14 File header */

/* Esercizio 1
. Scrivere un programma in cui venga chiesto all'utente il nome di un file in cui salvare N valori generati
casualmente, con N sempre inserito dall'utente. Salvare i valori uno per riga.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 25
#define MIN 0
#define MAX 10
#define DIM_STRINGA 32

int main(void) {
	srand(time(NULL));

	int i;
	int arrayNumCasuali[N];
	char stringa[DIM_STRINGA];

	for (i = 0; i < N; i++) {
		arrayNumCasuali[i] = MIN + rand() % (MAX - MIN + 1);
	}

	printf("Quale nome vuoi dare al file?\n");
	scanf(" %[^\n]s", stringa);

	FILE *fp = fopen(stringa, "w");
	if (fp == NULL) exit(EXIT_FAILURE);
	for (i = 0; i < N; i++) {
		fprintf(fp, "*. %d\n", arrayNumCasuali[i]);
	}
	fclose(fp);

	return EXIT_SUCCESS;
}
