/*Ricorda di fare free sempre su tutta la memoria allocata prima di fare return EXIT SUCCESS
 *specialmente nel progetto di fine anno mi raccomando sep
 */
/*
#include <stdio.h>
#include <stdlib.h> //calloc e malloc

int main(void) {
    int dim;
    int i;
    int* array; // puntatore per puntare a zona di memoria dinamica

    printf("Inserisci la dimensione dinamica: ");
    scanf("%d", &dim); //prende in input la lunghezza dinamica dell'array

    //array = (int*) malloc(dim*sizeof(int));

    array = (int*) calloc( dim, sizeof(int));

    for (i = 0; i < dim; i++) {
        array[i] = i;
    }


    for (i = 0; i < dim; i++) {
        printf("%d ", array[i]);
    }
    return EXIT_SUCCESS;
}
*/

/* Esercizio1
Scrivere una funzione float createArray( int dim, int initialValue ) che allochi dinamicamente un array di n elementi
inizializzati a initialValue, e restituisca il puntatore al primo elemento dell'array. Nel main, richiamare la funzione e
stampare l’array. Dopodiché, scrivere una procedura printArray( int dim, float array[dim] ) che stampi l’array al
posto della stampa nel main
*/
/*
#include <stdio.h>
#include <stdlib.h> // per malloc ecc

/*
// dichiarazione prototipi
float* createArray(int dim, float initialValue);
void printArray(int dim, float array[dim]);
int main() {

    int i;
    int n; //dimensione array dinamico
    float valoreIniziale; //valore iniziale stabilito dall'utente
    float *array = NULL;

    printf("Inserisci la dimensione dinamica dell'array:\n");
    scanf("%d", &n);

    printf("Inserisci il valore iniziale:\n");
    scanf("%f", &valoreIniziale);

    array = createArray(n, valoreIniziale);

    printArray(n, array);

    free(array); //libero la memoria allocata

    return EXIT_SUCCESS;
}

float* createArray(int dim, float initialValue) {
    int i;

    //allocazione dinamica dell'array
    //variabile puntatore che riceverà l'indirizzo del
    //blocco di memoria allocato dinamicamente
    float *array = NULL; //dichiarato puntatore a float

    array = (float *) malloc(dim * sizeof(float));
    if (array == NULL) {
        printf("Errore nella locazione dinamica.");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < dim; i++) {
        //scorro tutte le celle dell'array dinamico
        //imposto ogni cella a initialValue
        array[i] = initialValue;
    }

    return array;
}

void printArray(int dim, float array[dim]) {

    int i;

    for (i = 0; i < dim; i++) { //scorro tutte le celle dell'array
        printf("%2.2f ", array[i]); //stampo ogni cella
    }
}
*/

/* Esercizio 5
Definire una struttura ‘Albergo’ composta dai campi 'numeroStanze', 'prezzo', 'localita' che permetta di acquisire i
relativi dati attraverso una procedura passando come parametro l’indirizzo di memoria della stessa. Scrivere poi
una seconda procedura che ne permetta la stampa. La struttura va allocata dinamicamente nel main.
*/

#include <stdio.h>
#include <stdlib.h>
#define  DIM_LOCALITA 31

typedef struct {
    int numeroStanza;
    float prezzo;
    char localita[DIM_LOCALITA + 1];
} Albergo;

int main() {

    //int* indirizzo = (int) malloc(sizeof(int));

    Albergo* alb = (Albergo*) malloc(sizeof(Albergo));


    return EXIT_SUCCESS;
}

void acquisisciDatiAlbergo( Albergo* albergo) {

    printf("Inserisci il numero della stanza: \n");
    scanf("%d", &albergo -> numeroStanza); //meglio usare questa che è più immediata rispetto alla seconda
    //scanf("%d", &(*albergo).numeroStanza);

    printf("Inserisci il prezzo della stanza: \n");
    scanf("%f", &albergo ->prezzo);

    printf("Inserisci la località della stanza: \n");
    scanf(" %31[^\n]s", albergo -> localita);

}