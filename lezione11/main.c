/* Lezione 11 */

/* Esercizio 1
 Scrivere un programma per lo scambio di due variabili float. In particolare, le due variabili vanno dichiarate
e acquisite nel main, mentre lo scambio deve essere effettuato da una procedura che abbia il seguente
prototipo: void swap( float* v1, float* v2). Nel main, stampare il valore delle variabili prima e dopo lo
scambio.
*/

/*
#include <stdio.h>
#include <stdlib.h>

void scambioClassico(float v1, float v2);

void scambiaPuntatori(float *f1, float *f2); //funzione scambio usando i puntatori

int main(void) {

    float v1, v2;

    printf("Inserisci il primo numero da scambiare: ");
    scanf("%f", &v1);

    printf("\nInserisci il primo numero da scambiare: ");
    scanf("%f", &v2);

    printf("v1 prima dello scambio %.2f\n", v1);
    printf("v2 prima dello scambio %.2f\n", v2);

    //scambioClassico(v1, v2);

    scambiaPuntatori(&v1, &v2);


    printf("v1 dopo dello scambio %.2f\n", v1);
    printf("v2 dopo dello scambio %.2f\n", v2);

    return EXIT_SUCCESS;
}

void scambioClassico(float v1, float v2) {
    float temp;

    temp = v2;
    v2 = v1;
    v1 = temp;

}

void scambiaPuntatori(float *f1, float *f2) { //i parametri non sono variabili ma puntatori a delle variabili

    float temp;

    temp = *f2;
    *f2 = *f1;
    *f1 = temp;

    //printf("v1 dopo dello scambio sub %.2f\n", *f1);
    //printf("v2 dopo dello scambio sub %.2f\n", *f2);

}
*/

/* Esercizio 2
Scrivere un programma che calcoli quoziente e resto di una divisione tra interi. In particolare, dichiarare e
quattro variabili nel main (identificate voi il tipo): valore1, valore2, quoziente, resto; quindi, acquisire
valore1 e valore2 tramite scanf. Il quoziente e resto vanno calcolati mediante una procedura che abbia il
seguente prototipo: void divisioneIntera( … ). Dopo l’invocazione, stampare i valori di quoziente e resto nel
main. Che parametri riceve la procedura? Di che tipo?
*/

/*
#include <stdio.h>
#include <stdlib.h>

void divisioneIntera(int dividendo, int divisori, int* quoziente, int* resto); //chiamata funzione che

int main() {

    int val1, val2, quoziente, resto;

    printf("Inserisci il valore valore 1: \n");
    scanf("%d", &val1);

    printf("Inserisci il valore valore 2: \n");
    scanf("%d", &val2);

    divisioneIntera(val1, val2, &quoziente, &resto);

    printf("Quoziente: %d\n", quoziente);
    printf("Resto: %d\n", resto);

    return EXIT_SUCCESS;
}

void divisioneIntera(int dividendo, int divisore, int* quoziente, int* resto) { //dichiarazione funzione

    *quoziente = dividendo / divisore;
    *resto = dividendo % divisore;
}
*/

/* Esercizio 3
Scrivere un programma in cui si dichiara e inizializza, a piacere, un array di interi nel main. Scrivere,
quindi, una subroutine per la stampa in due versioni:
1. void printArray(int dim, int array[dim]): stampare l’array usando la notazione con parentesi quadre
2. void printArrayAsPointer( int dim, int* array): stampare l’array usando il puntatore all’array
Richiamare entrambe le subroutine del main.
*/

/*
#include <stdio.h>
#define DIM 5

void printArray(int dim, int array[dim]);
void printArrayPointer(int dim, int* array);

int main() {

    int valori[DIM] = {1,2,3,4,5};

    printf("Stampa con subroutine printArray:\n");

    printArray(DIM, valori);

    printf("Stampa con subroutine printArrayPointer:\n");

    printArrayPointer(DIM, valori);

    return 0;
}

void printArray(int dim, int array[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        printf("%d\n", array[i]);
    }
}

void printArrayPointer(int dim, int* array) {

    int i;

    for (i = 0; i < dim; i++) {
        printf("%d\n", *(array + i));
    }
}
*/

/* Esercizio 4
Scrivere un programma in cui si dichiara e inizializza, a piacere, un array di interi nel main. Scrivere,
quindi, una subroutine con il seguente prototipo: int* cerca( int dim, int array[dim], int elementoCercato ).
La subroutine deve cercare elementoCercato nell’array e, se lo trova, ne deve restituire il puntatore,
altrimenti restituisce NULL. Richiamare la subroutine nel main, stampando sia l’indirizzo dell’elemento
che il suo valore, oppure "elemento non trovato".
*/
/*
#include <stdio.h>
#include <stdbool.h>
#define N 5

int* ricercaArray(int dim, int array[dim], int elementoCercato);

int main() {

    int array[N] = {1,2,3,4,5};
    int elemento;

    for (int i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }

    printf("Inserisci l'elemento che vuoi cercare:\n");
    scanf("%d", &elemento);

    ricercaArray(N, array, elemento);



    return 0;
}

int* ricercaArray(int dim, int array[dim], int elementoCercato) {

    int i;
    bool trovato = false;
    int* elemento = NULL;

    for (i = 0; i < dim && !trovato; i++) {
        if (array[i] == elementoCercato) {
            trovato = true;
        }
    }

    if (trovato == true) {
        elemento = &array[i - 1];
        printf("i = %d\n", i);
        printf("Il puntatore è %p\n", elemento);
        printf("Variabile dentro la cella: %d\n", *elemento);
    } else {
        elemento = NULL;
        printf("Elemento non trovato.\n");
    }
}
*/

/* Esercizio 5
Scrivere un programma che trovi il massimo e il minimo di due valori attraverso i seguenti passaggi:
• Scrivere una procedura findMinMax(…) che riceva due valori interi e due puntatori a intero min e max e memorizzi
opportunamente minore e maggiore;
• Nel main: dichiarare quattro variabili intere v1, v2, min, max e acquisire v1, v2 tramite input, generarle casualmente o
impostare dei valori in dichiarazione; quindi, richiamare findMinMax(…) e stampare min e max.
• Estendere il programma creando una subroutine per trovare il minimo e il massimo di tre valori.
*/

/*
#include <stdio.h>
#include <stdlib.h>

void findMinMax(int val1, int val2, int* min, int* max);
void stampaMinMax(int* min, int* max);

int main() {

    int val1, val2;
    int* min = 0;
    int* max = 0;

    printf("Inserisci il primo valore: ");
    scanf("%d", &val1);

    printf("Inserisci il secondo valore: ");
    scanf("%d", &val2);

    findMinMax(val1, val2, &min, &max);
    stampaMinMax(&min, &max);


    return EXIT_SUCCESS;
}

void findMinMax(int val1, int val2, int* min, int* max) {

    if (val1 > val2) {
        *max = val1;
        *min = val2;
    } else {
        *max = val2;
        *min = val1;
    }
}

void stampaMinMax(int* min, int* max) {

    printf("\nIl minimo è: %d", *min);
    printf("\nIl massimo è: %d", *max);
}
*/

/* Esercizio 6
Scrivere un programma che, con l'ausilio di una procedura, trovi il massimo e minimo di un array di N
elementi. In particolare, l'array, il massimo e il minimo sono dichiarati nel main e l'array deve essere
inizializzato casualmente mediante una procedura. Stampare array, massimo e minimo nel main.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MIN 0
#define MAX 500
#define COEFF 10.0

void inizializzazioneArray(int coeff, int min, int max, int dim, int array[dim]);

void stampaArray(int dim, int array[dim]);

void findMinMax(int dim, int array[dim], int *minimo, int *massimo);

void stampaMinMax(int *minimo, int *massimo);

int main() {
    int array[N];
    int *minimo = NULL;
    int *massimo = NULL;

    srand(time(NULL));

    inizializzazioneArray(COEFF, MIN, MAX, N, array);
    stampaArray(N, array);
    findMinMax(N, array, &minimo, &massimo);
    stampaMinMax(&minimo, &massimo);

    printf("Valore cella minimo %p", minimo);
    printf("\nValore cella massimo %p", massimo);

    return EXIT_SUCCESS;
}

void inizializzazioneArray(int coeff, int min, int max, int dim, int array[dim]) {
    int i;

    for (i = 0; i < dim; i++) {
        array[i] = (min + rand() % (max - min + 1)) / (coeff);
    }
}

void stampaArray(int dim, int array[dim]) {
    int i;

    for (i = 0; i < dim; i++) {
        printf("%d ", array[i]);
    }
}

void findMinMax(int dim, int array[dim], int* minimo, int* massimo) {
    int i;

    *minimo = *massimo = array[0];
    for (i = 1; i < dim; i++) {
        if (array[i] > *massimo) {
            *massimo = array[i];
        } else if (array[i] < *minimo) {
            *minimo = array[i];
        }
    }
}

void stampaMinMax(int* minimo, int* massimo) {
    printf("\nIl valore minimo è: %d.\n"
           "Il valore massimo è: %d.\n", *minimo, *massimo);
}
*/

/* Esercizio 7
Scrivere una subroutine che stampi un array ricevuto come parametro. Scrivere poi una subroutine che
stampi una matrice, utilizzando la subroutine precedente.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 5
#define MIN 0
#define MAX 500
#define COEFF 10.0

void inizializzazioneArray(float coeff, int min, int max, int dim, float array[dim]);
void stampaArray(int dim, float array[dim]);
void inizializzazioneMatrice(float coeff, float min, float max, int dim1, int dim2, float matrice[dim1][dim2]);
void stampaMatrice(int dim1, int dim2, float matrice[dim1][dim2]);

int main() {

    srand(time(NULL));

    float array[ROWS];
    float matrice[ROWS][COLS];

    //inizializzazioneArray(COEFF, MIN, MAX, N, array);
    //stampaArray(N, array);
    inizializzazioneMatrice(COEFF, MIN, MAX, ROWS, COLS, matrice);
    stampaMatrice(ROWS, COLS, matrice);

    return EXIT_SUCCESS;
}

void inizializzazioneArray(float coeff, int min, int max, int dim, float array[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        array[i] = (min + rand()%(max - min + 1)) / coeff;
    }
}

void stampaArray(int dim, float array[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        printf("%6.1f", array[i]);
    }
}
// funzione che prende fondamentalmente la riga di array inizializzata e la ripete x volte che sono le righe
void inizializzazioneMatrice(float coeff, float min, float max, int dim1, int dim2, float matrice[dim1][dim2]) {

    int i;

    for (i = 0; i < dim1; i++) { //dim1 sono le righe per le quali voglio che venga ripetuta l'inizializzazione
        inizializzazioneArray(coeff, min, max, dim2, matrice[i]);
    }
}

void stampaMatrice(int dim1, int dim2, float matrice[dim1][dim2]) {

    int i;

    for (i = 0; i < dim1; i++) { //dim1 sono il numero di righe per il quale voglio che l'array venga stampato
        stampaArray(dim2, matrice[i]);
        printf("\n");
    }
}
*/

/* Esercizio 8
Scrivere una funzione di ricerca di un elemento di un array. Se l'elemento passato come parametro si
trova nell'array la funzione ne restituisce l'indice di posizione, altrimenti restituisce -1.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15
#define MIN 0
#define MAX 10

void inizializzazioneArray(int min, int max, int dim, int array[dim]);
void stampaArray(int dim, int array[dim]);
void ricercaParametro(int dim, int array[dim], int* indice, int* trovato, int scelta);
void stampaIndice(int* trovato, int* indice);

int main() {

    srand(time(NULL));

    int scelta;
    int trovato = -1;
    int array[N];
    int indicePosizione;

    inizializzazioneArray(MIN, MAX, N, array);
    stampaArray(N, array);

    printf("\nInserisci il numero che vuoi ricercare nell'array: ");
    scanf("%d", &scelta);


    ricercaParametro(N, array, &indicePosizione, &trovato, scelta);
    stampaIndice(&trovato, &indicePosizione);


    return EXIT_SUCCESS;
}

void inizializzazioneArray(int min, int max, int dim, int array[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        array[i] = min + rand()%(max - min + 1);
    }
}

void stampaArray(int dim, int array[dim]) {

    int i;
    for (i = 0; i < dim; i++) {
        printf("%d ", array[i]);
    }
}

void ricercaParametro(int dim, int array[dim], int* indice, int* trovato, int scelta) {

    int i;
    *trovato = -1;

    for (i = 0; i < dim; i++) {
        if (array[i] == scelta) {
            *trovato = 1;
            *indice = i + 1;

        }
    }
}

void stampaIndice(int* trovato, int* indice) {

    if (*trovato == 1) {
        printf("Il numero cercato si trova nella casella: %d", *indice);
    } else {
        printf("-1");
    }
}
*/

/* Esercizio 9
Scrivere una procedura che stampi il contenuto di un vettore senza usare indici.
*/

/*
#include <stdio.h>
#include <stdlib.h>

#define N 15

void inizializzazioneArray(int dim, int vector[dim]);
void stampaArray(int dim, int vector[dim]);

int main() {

    int vector[N];

    inizializzazioneArray(N, vector);
    stampaArray(N, vector);

    return EXIT_SUCCESS;
}

void inizializzazioneArray(int dim, int vector[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        vector[i] = i;
    }
}

void stampaArray(int dim, int vector[dim]) {

    int i;
    int* p;
    p = vector;

    for (i = 0; i < dim; i++) {
        printf("%d ", *p);
        p++;
    }
}
*/

/* Esercizio 10
Definire una struttura ‘Casa’ composta dai campi 'numeroPiani', 'mq', 'prezzo' che permetta di acquisire i
relativi dati attraverso una procedura passando come parametro l’indirizzo di memoria della stessa.
Scrivere poi una seconda procedura che ne permetta la stampa.
*/
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numeroPiani;
    int mq;
    float prezzo;
} Casa;

void acquisizioneDati(Casa *puntatoreCasa);
void stampaDati(Casa *puntatoreCasa);

int main() {

    Casa casa;

    acquisizioneDati(&casa); //fondamentalmente utilizziamo la &commerciale come nella scanf quindi assegnamo alla variabile
    stampaDati(&casa); //quindi nella funzione abbiamo i puntatori
    // nel main abbiamo la variabile di tipo della struttura che abbiamo creato
    //nella funzione passiamo come parametro il puntatore di tipo della struttura

    return EXIT_SUCCESS;
}

void acquisizioneDati(Casa *puntatoreCasa) {

    printf("Inserisci i piani delle casa:\n");
    scanf("%d", &puntatoreCasa->numeroPiani);
    printf("Inserisci i metri quadri della casa:\n");
    scanf("%d", &puntatoreCasa->mq);
    printf("Inserisci il prezzo:\n");
    scanf("%f", &puntatoreCasa->prezzo);
}

void stampaDati(Casa *puntatoreCasa) {

    printf("\nNumero piani: %d", puntatoreCasa->numeroPiani);
    printf("\nMetri quadri: %d", puntatoreCasa->mq);
    printf("\nPrezzo: %.2f", puntatoreCasa->prezzo);
}
*/

/* Esercizio 11
Scrivere una funzione che verifichi se c'è una sovrapposizione tra due intervalli (min1,max1) e
(min2,max2). Se sì, la funzione restituirà vero e il punto medio della loro sovrapposizione si
troverà in un argomento di output, altrimenti renderà falso.
*/
/*
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int min1, max1, min2, max2;

    return EXIT_SUCCESS;
}

int verificaSovrapposizione(int* min1, int* max1, int* min2, int* max2) {

    int puntoMedio;
    bool sovrapposizione = false;

    if (min1 < min2 && max1 > min2 || min2 < min1 && max2 > min2) {

    }

    return puntoMedio;
}
*/

/* Esercizio 12
Scrivere un programma in cui è dichiarato un vettore v, di dimensione N. Il vettore deve essere
popolato con numeri interi, positivi e negativi, generati casualmente. Scrivere poi una funzione
che riceve come parametro il vettore e inverte l' ordine degli elementi. Visualizzare dal main sia
il vettore originale che quello ottenuto dopo la chiamata della funzione.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MIN (-10)
#define MAX 10

void inizializzazioneArray(int min, int max, int dim, int vector[dim]);
void stampaArray(int dim, int vector[dim]);
void inversioneElementi(int dim, int vector[dim]);

int main() {

    srand(time(NULL));
    int v[N];

    inizializzazioneArray(MIN, MAX, N, v);
    stampaArray(N, v);
    inversioneElementi(N, v);
    printf("\nStampa vettore invertito.\n");
    stampaArray(N, v);

    return EXIT_SUCCESS;
}
void inizializzazioneArray(int min, int max, int dim, int vector[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        vector[i] = min + rand()% (max - min + 1);
    }
}
void stampaArray(int dim, int vector[dim]) {

    int i;
    for (i = 0; i < dim; i++) {
        printf("%5d ", vector[i]);
    }
}
void inversioneElementi(int dim, int vector[dim]) {

    int i, temp;

    //qunado vogliamo invertire alla cella i noi gli diamo la posizione della cella meno il contatore meno 1
    //ad esempio vogliamo invertire cella prima cella con ultima cella il programma cosa farà
    //vector[0] = vector[N(10) - i(0) - 1] quindi stiamo dicendo vettore in posizione 0 equivale alla
    //dimensione del vettore nel nostro caso 10 meno la posizione nella quale ci troviamo quindi 0 meno 1 che equivale
    //alla posizione 9 e cosi via ogni volta aumentando i di 1 alla fine del ciclo for
    for (i = 0; i < (N / 2); i++) {
        temp = vector[i];
        vector[i] = vector[N - i - 1];
        vector[N - i - 1] = temp;
    }

}
*/

/* Esercizio 13
Scrivere una funzione che restituisca true se la stringa passata come parametro è palindroma,
false altrimenti.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 32
#define N_INPUT "31"

void acquisizioneStringa(int dim, char *stringa);

int verificaPalindromo(int dim, char *stringa);

void stampaRisultato(int *verifica);

int main() {
    char stringa[N];
    int verifica;

    acquisizioneStringa(N, stringa);

    puts(stringa);

    verifica = verificaPalindromo(N, stringa);

    stampaRisultato(&verifica);


    return EXIT_SUCCESS;
}

void acquisizioneStringa(int dim, char *stringa) {
    printf("Inserisci la stringa:\n");
    scanf(" %" N_INPUT "[^\n]s", stringa);
}

int verificaPalindromo(int dim, char *stringa) {
    int i;
    int palindroma = 0;
    int lenght;
    lenght = strlen(stringa);
    for (i = 0; i < lenght; i++) {
        // utilizziamo la stessa funzione che abbiamo usato per invertire le variabili dentro un'array
        //per verificare quindi facciamo poniamo come condizione che se la prima e la sua cella opposta sono diverse
        //automaticamente queste non sono palindroma
        if (stringa[i] != stringa[lenght - i - 1]) {
            palindroma = 1;
        }
    }
    return palindroma;
}

void stampaRisultato(int *verifica) {
    if (*verifica == 1) {
        printf("La stringa non è palindroma.\n");
    } else {
        printf("La stringa è palindroma.\n");
    }
}
*/

/* Esercizio 14
Definire una struttura per la modellazione dei dati anagrafici di uno studente (nome,
cognome, data di nascita etc), quindi creare e popolare un array di studenti.
Aggiungere una seconda struttura per la modellazione dei risultati di una sessione
d’esame che contiene la data, il luogo, il nominativo del professore, e un elenco di voti
abbinati agli studenti (suggerimento: utilizzare gli indici degli studenti nel primo array
per recuperare le informazioni).
Realizzare:
• una funzione che permetta di acquisire i dati di interesse di uno studente;
• una procedura che, utilizzando la funzione precedente, popoli un array di studenti dichiarato
nel main;
• una procedura che permetta di acquisire i dati di un esame sostenuto dagli studenti;
• una funzione che verifica che lo stesso studente non compaia due volte nell’elenco;
• una funzione che conta quanti studenti hanno sostenuto l’esame con esito positivo;
• una funzione che visualizza i nomi e i voti degli studenti che hanno ottenuto voto maggiore o
uguale a 28.
Testare le varie funzioni e procedure dal main.
*/

#include <stdio.h>
#include <stdlib.h>
#define DIM_STRINGA 32 //macro compresa del valore di fine stringa quindi sarebbe 31 + 1
#define DIM_STRINGA_INPUT "31"
#define DIM_STUDENTI 10

typedef enum {
    GENNAIO = 1, FEBBRAIO, MARZO, APRILE, MAGGIO, GIUGNO, LUGLIO, AGOSTO, SETTEMBRE, OTTOBRE, NOVEMBRE, DICEMBRE
} Mese;

typedef struct {
    int giorno;
    Mese mese;
    int anno;
} Data;

typedef struct {
    char nome[DIM_STRINGA];
    char cognome[DIM_STRINGA];
    Data dataNascita;
} Studente;

typedef struct {
    Data dataEsame;
    char luogoEsame[DIM_STRINGA];
    char nominativoProfessore[DIM_STRINGA];
    float elencoVoti[DIM_STUDENTI];
} Risultati;

void acquisisciStudente(Studente student);
Studente popolazioneArrayStudenti(int dim, Studente arrayStudenti[dim]);

int main() {
    Studente arrayStudenti[DIM_STUDENTI];
    Studente studente;
    acquisisciStudente(studente);

    return EXIT_SUCCESS;
}

void acquisisciStudente(Studente student) {

    printf("Inserisci il nome:\n");
    scanf(" %" DIM_STRINGA_INPUT "[^\n]s", student.nome);

    printf("Inserisci il cognome:\n");
    scanf(" %" DIM_STRINGA_INPUT "[^\n]s", student.cognome);

    printf("Inserisci il giorno della data di nascita:\n");
    scanf("%d", &student.dataNascita.giorno);

    do {
        printf("Inserisci il mese della data di nascita:"
            "\n1) Gennaio"
            "\n2) Febbraio"
            "\n3) Marzo"
            "\n4) Aprile"
            "\n5) Maggio"
            "\n6) Giugno"
            "\n7) Luglio"
            "\n8) Agosto"
            "\n9) Settembre"
            "\n10) Ottobre"
            "\n11) Novembre"
            "\n12) Dicembre");
        scanf("%d", &student.dataNascita.mese);
    } while (student.dataNascita.mese < GENNAIO || student.dataNascita.mese > DICEMBRE);
}

