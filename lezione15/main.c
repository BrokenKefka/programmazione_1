/* Lezione 15 */

/* Esercizi liste */

/* Esercizio 1
Scrivere una funzione che inserisca un nodo in testa alla lista. Utilizzare la funzione per popolare una
lista di numeri interi positivi inseriti dall'utente. L'acquisizione termina quando il valore inserito è
negativo.
*/

/*
#include <stdio.h>
#include <stdlib.h>

// questo tipo di struttura ci permette di creare una lista
struct nodo {
	int numero; //primo elemento della struttura che individua il contenuto della cella
	struct nodo *next; //il secondo elemento della struttura individua un puntatore che punta alla prossima cella così possiamo scorrere la lista
};

typedef struct nodo Nodo; //effettuiamo il typedef della struttura di tipo Nodo

void checkAllocazioneNodo(Nodo *nodo); //verifica corretta allocazione della memoria dinamica del nodo

Nodo *inserisciNodoInTesta(Nodo *testa, int numero); //inserisci nodo in testa

void stampaLista(Nodo *nodo); //stampa nodo

void freeLista(Nodo *nodo); //effettua la free

int main(void) {

	Nodo *lista = NULL; //inizializziamo la variabile lista di tipo Nodo a NULL
	int numero;

	// acquisiamo numeri fino a quando non viene inserito un numero negativo
	do {
		printf("\nInserisci un numero a piacimento, zero o negativo per terminare: \n");
		scanf("%d", &numero);
		//effettuiamo un controllo sulla positività del numero se positivo lo inseriamo in testa alla lista
		if (numero > 0) {
			lista = inserisciNodoInTesta(lista, numero);
		}
	} while (numero > 0);

	stampaLista(lista); //funzione che stampa la lista

	freeLista(lista); //funzione che libera la lista

	return EXIT_SUCCESS;
}

// funzione che una volta acquisito il numero lo inserisce in testa alla lista
Nodo *inserisciNodoInTesta(Nodo *testa, int numero) { //parametri variabile di tipo puntatore a nodo e il numero da inserire
	Nodo *nuovoNodo = NULL; //creiamo nuova variabile di tipo puntatore a nodo e la inizializziamo a NULL

	nuovoNodo = (Nodo *) malloc(sizeof(Nodo)); //effettuiamo la malloc del nuovo nodo di size of della struttura Nodo

	checkAllocazioneNodo(nuovoNodo); //verifica corretta allocazione

	nuovoNodo->numero = numero; //il nuovo numero diventa il numero acquisito in input
	nuovoNodo->next = testa; //il prossimo elemento della lista a cui puntiamo diventa la testa

	return nuovoNodo;
}
// verifica corretta allocazione di memoria
void checkAllocazioneNodo(Nodo *nodo) {
	if (nodo == NULL) {
		printf("\nErrore allocazione nodo");
		exit(EXIT_FAILURE);
	}
}
// stampa della lista
void stampaLista(Nodo *nodo) {
	Nodo *aux = NULL;

	aux = nodo;

	while (aux != NULL) {
		if (aux->next == NULL) {
			printf("%d", aux->numero);
		} else {
			printf("%d -> ", aux->numero);
		}
		aux = aux->next;
	}

	printf("\nNULL");
}

// dobbiamo fare attenzione alla free poichè dobbiamo prima spostarci alla casella successiva e poi eliminare la
// casella precedende dove ci trovavamo, se cancellassimo la casella dove ci troviamo attualmente perderemmo il collegamente
// con l'elemento successivo della lista, facciamo uso di una variabile ausiliaria (aux)

void freeLista(Nodo *nodo) {
	Nodo *aux = nodo;
	Nodo *prev;


	while (aux != NULL) {
		prev = aux;
		aux = aux->next; // ci spostiamo nella casella successiva
		free(prev); //facciamo free della casella precedente
	}
}
*/

/* Esercizio 2
Scrivere una funzione che permetta di stampare gli elementi di una lista.
*/

/*
#include <stdio.h>
#include <stdlib.h>

struct nodo {
	int valore;
	struct nodo* next;
};

typedef struct nodo Nodo;

Nodo* allocazioneNodoInTesta(Nodo* testa, int valore);
void checkAllocazione(Nodo* nodo);
void stampaLista(Nodo* nodo);
void freeMemoria(Nodo* nodo);

int main() {

	Nodo* lista = NULL;
	int valore;

	do {
		printf("Inserisci un numero a tuo piacimento, inserisci 0 per terminare.\n");
		scanf(" %d", &valore);
		if (valore != 0) {
			lista = allocazioneNodoInTesta(lista, valore);
		}
	}while (valore != 0);

	stampaLista(lista);

	freeMemoria(lista);

	return EXIT_SUCCESS;
}

Nodo* allocazioneNodoInTesta(Nodo* testa, int valore) {

	Nodo* nuovoNodo = NULL;

	nuovoNodo = (Nodo*) malloc (sizeof(Nodo));

	checkAllocazione(nuovoNodo);

	nuovoNodo->valore = valore;
	nuovoNodo->next = testa;

	return nuovoNodo;
}

void checkAllocazione(Nodo* nodo) {

	if (nodo == NULL) {
		printf("\nErrore di allocazione memoria elemento lista.");
		exit(EXIT_FAILURE);
	}
}

void stampaLista(Nodo *nodo) {
	Nodo *aux = NULL;

	aux = nodo;

	while (aux != NULL) {
		if (aux->next == NULL) {
			printf("%d -> NULL", aux->valore);
		} else {
			printf("%d -> ", aux->valore);
		}
		aux = aux->next;
	}
}

void freeMemoria(Nodo* nodo) {

	Nodo* aux = NULL;
	aux = nodo;
	Nodo* prev;

	while (aux != NULL) {
		prev = aux;
		aux = aux->next; // ci spostiamo nella casella successiva
		free(prev); //facciamo free della casella precedente
	}
}
*/

/* Esercizio 3
Scrivere una funzione che restituisca la dimensione di una lista.
*/

/*
#include "library.h"
#include "strutturaLista.h"

int main() {


	printf("\nLe librerie funzionano");



	return EXIT_SUCCESS;
}
*/

#include "library.h"

typedef struct {
	char nome[31];
	char cognome[31];
}Nome;

typedef struct {
	Nome nome;
	int id;
	int age;
	char sex;
}Studente;

int main() {

	int s[10]={1};
	int* p = s;

	for (int i = 0; i < 9; i++) {
		s[i + 1] = *p;
		(*p)++;
		printf("\n i = %d valore %d",i , s[i+1]);
	}
	printf("\n%d", s[0]);


	return EXIT_SUCCESS;
}