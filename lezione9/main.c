/* Esercizi lezione 9 */

/* Esercizio 1
Scrivere la funzione randRange che riceva in ingresso due numeri interi (min e max), acquisiti nel
main, e restituisca un valore generato casualmente all’interno del range i cui gli estremi sono i
due valori passati in ingresso (estremi inclusi). Invocare tale funzione nel main passando i valori
necessari, poi stampare il valore restituito dalla funzione.
NB: l'inizializzazione del seed va fatta nel main.
VARIANTE: scrivere una funzione randRangeFloat per generare numeri con la virgola. La funzione
riceverà un ulteriore parametro che rappresenta il numero di cifre decimali richiesto.
*/

/*
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BASE 10
#define DEC 2

int radRange(int min, int max);
float radRangeFloat(int min, int max, int dec);

int main(void) {
    srand(time(NULL));

    int min, max, randInt;
    float randFloat;

    printf("Inserisci il minimo:\n");
    scanf("%d", &min);

    printf("Inserisci il massimo:\n");
    scanf("%d", &max);

    randInt = radRange(min, max);

    randFloat = radRangeFloat(min, max, 5);


    printf("Il numero intero casuale è: %d\n", randInt);

    printf("Il numero decimale casuale è: %f\n", randFloat);

    return 0;
}

int radRange(int min, int max) {
    int numCas;

    numCas = min + rand() % (max - min + 1);

    return numCas;
}

float radRangeFloat(int min, int max, int dec) {

    int minFloat, maxFloat;
    float numCasFloat;

    minFloat = min * pow(BASE, dec);
    maxFloat = max * pow(BASE, dec);

    numCasFloat = (minFloat + rand() % (maxFloat - minFloat + 1)) / (float)pow(BASE, dec);

    return numCasFloat;
}
*/

/* Esercizio 2
Scrivere un programma che acquisisca un numero e stampi un conto alla rovescia a partire dal
numero acquisito. Realizzare una procedura che si occupi di stampare il conto alla rovescia.
*/

/*
#include <stdio.h>

int contoRovescia(int numero);

int main() {

    int numero;

    printf("Inserisci un numero:\n");
    scanf("%d", &numero);

    contoRovescia(numero);

    return 0;
}

int contoRovescia(int numero) {

    int num, i;

    for (i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    return num;
}
*/

/* Esercizio 3
Scrivere una funzione che esegua l'acquisizione da input di un numero e il controllo che il numero
si trovi all'interno di un determinato intervallo (min, max), mediante l'acquisizione ripetuta del
numero. La funzione deve restituire sempre un valore compreso tra min e max. Stampare tale
numero nel main.
*/

/*
#include <stdio.h>
#include <stdbool.h>
#define MIN 0
#define MAX 10

int controllo(int min, int max);

int main() {

    controllo(MIN, MAX);

    return 0;
}

int controllo(int min, int max) {

    int num;
    bool check = false;


    do {
        printf("Inserisci un numero:\n");
        scanf("%d", &num);

        if (min <= num && num <= max) {
            check = true;
            printf("Il numero inserito %d è all'interno dell'intervallo.\n", num);
        } else {
            printf("Il numero inserito non è compreso nell'intervallo.\n");
            check = false;
        }

    }while (check == false);

    return num;
}
*/

/* Esercizio 4
Scrivere una funzione calcolaGiorno(giorno, mese, anno) che restituisca il giorno dell'anno (un
numero compreso tra 1 e 366) specificato dai tre argomenti. La funzione deve verificare se l'anno
è bisestile o meno, ed effettuare il calcolo di conseguenza. Nel main, impostare una data e
stampare in output il giorno dell'anno.
• NB: un anno è bisestile se è divisibile per 400; altrimenti se è divisibile per 4 ma non per 100.
• Modificare, poi, l'esercizio per rendere il calcolo dell'anno bisestile una funzione.
*/

/*
#include <stdio.h>

#define DATA 367

int main() {

    char data[DATA];

    printf("Inserisci una data:\n");
    scanf(" %366[^\n]s", data);


    return 0;
}
*/

/* Esercizio 5
Scrivere una funzione che faccia il clamp tra 50 e 100 di un numero passato come parametro.
ES: x: 7 -> f: 50; x: 75 -> f: 75; x: 135 -> f: 100
*/

/*
#include <stdio.h>
#define CLAMPMIN 50
#define CLAMPMAX 100

int clamp(int numero, int min, int max);

int main() {
    int num;

    clamp(num, CLAMPMIN, CLAMPMAX);

    return 0;
}

int clamp(int numero, int min, int max) {

    int num;

    printf("Inserisci il numero:\n");
    scanf("%d", &num);

    if (num <= min) {
        printf("x: %d -> f: %d\n", num, min);
        return min;
    }
    if (num >= max) {
        printf("x: %d -> f: %d\n", num, max);
        return max;
    }
    if (num > min && num < max) {
        printf("x: %d -> f: %d\n", num, num);
        return num;
    }

}
*/

/* Esercizio 6
Scrivere una funzione che prenda come parametro un carattere e:
• se è una lettera minuscola, restituisce una lettera maiuscola;
• se è una lettera maiuscola, restituisce una lettera minuscola;
• lascia invariati tutti gli altri caratteri.
• Modificare successivamente una stringa dichiarata nel main modificando ogni carattere
utilizzando la funzione appena descritta
*/

/*
#include <stdio.h>

#define N 151
#define COEFF 32

void inversioneChar(int dim, char stringa[dim]);

int main() {

    char stringa[N];

    printf("Inserisci la stringa:\n");
    scanf(" %150[^\n]s", stringa);

    inversioneChar(N, stringa);

    return 0;
}

void inversioneChar(int dim, char stringa[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        if ('a' <= stringa[i] && stringa[i] <= 'z') {
            stringa[i] -= COEFF;
        } else if ('A' <= stringa[i] && stringa[i] <= 'Z') {
            stringa[i] += COEFF;
        }
    }
    puts(stringa);
}
*/

/* Esercizio 7
Scrivere due procedure che andranno richiamate nel main:
• stampaArray che prenda come parametro un array di interi e ne stampi il suo contenuto.
• generaArray che prenda come parametro un array di interi e ne popoli il suo contenuto mediante
randRange dell’esercizio 1.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MIN 0
#define MAX 15

void generaArray(int min, int max, int dim, int arrInteri[dim]);
void stampaArray(int dim, int array[dim]);

int main() {

    srand(time(NULL));

    int arrInteri[N];

    generaArray(MIN, MAX, N, arrInteri);

    stampaArray(N, arrInteri);

    return 0;
}

void generaArray(int min, int max, int dim, int arrInteri[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        arrInteri[i] = min + rand()%(max - min + 1);
    }

    //return arrInteri[dim];

}

void stampaArray(int dim, int array[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        printf("%4d", array[i]);
    }
}
*/

/* Esercizio 8
Scrivere due procedure che andranno richiamate nel main:
• popolaMatrice che riceva come parametro una matrice di float e generi casualmente i suoi elementi in
un range definito dall’utente, sfruttando randRangeFloat dell’esercizio 1;
• stampaMatrice che prenda come parametro una matrice di float e ne stampi il suo contenuto.
*/

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define COEFF 100
#define ROWS 4
#define COLS 5

// Chiamata funzione che genera la matrice float con richiesta di massimo e minimo
float generazioneMatriceFloat(int coeff, int rows, int cols, float matrice[rows][cols]);
// Chiamata funzione stampa della matrice che prende come parametri num di colonne righe e la matrice stessa
void stampaMatrice(int rows, int cols, float matrice[rows][cols]);

int main() {

    srand(time(NULL)); //inizializzazione del seed
    float matriceNumFloat[ROWS][COLS];

    generazioneMatriceFloat(COEFF, ROWS, COLS, matriceNumFloat); //funzione genera matrice
    stampaMatrice(ROWS, COLS, matriceNumFloat); //funzione stampa matrice

    return 0;
}

float generazioneMatriceFloat(int coeff, int rows, int cols, float matrice[rows][cols]) {

    int minFloat, maxFloat;
    int i = 0, j = 0;

    // richiesta valori range min e max
    printf("Inserisci il minimo:\n");
    scanf("%d", &minFloat);
    printf("Inserisci il massimo:\n");
    scanf("%d", &maxFloat);

    // generazione matrice numeri float
    for (i = 0; i < rows; i++) { //scorro righe
        for (j = 0; j < cols; j++) { //scorro colonne
            matrice[i][j] = ((minFloat * coeff) + rand()%((maxFloat * coeff) - (minFloat * coeff) +1)) / (float)coeff;
        }
    }

    return matrice[i][j];
}

void stampaMatrice(int rows, int cols, float matrice[rows][cols]) {

    int i = 0, j = 0;
    //stampa matrice
    for (i = 0; i < rows; i++) { //scorro righe
        for (j = 0; j < cols; j++){ //scorro colonne
            printf(" %.2f ", matrice[i][j]);
        }
        printf("\n"); // andata a capo a fine riga
    }
}
*/

/* Esercizio 9
Scrivere un programma che permetta ciclicamente all’utente di svolgere operazioni su due numeri double
acquisiti mediante scanf: somma, sottrazione, moltiplicazione, divisione ed elevamento a potenza. Le 5
operazioni devono essere implementate con opportune subroutine e richiamate dall’utente a seconda della
scelta effettuata. Il main deve contenere il menù di scelta, l’acquisizione dei due numeri e della scelta
dell’utente, con le opportune invocazioni. Il programma termina quando l’utente inserisce 0.
*/

/*
#include <math.h>
#include <stdio.h>

// enumerazione voci menu
typedef enum { SOMMA = 1, SOTTRAZIONE, MOLTIPLICAZIONE, DIVISIONE, POTENZA, TERMINE = 0 } VociMenu;

// chiamata variabili
double calcoloSomma(double valore1, double valore2);

double calcoloSottrazione(double valore1, double valore2);

double calcoloMoltiplicazione(double valore1, double valore2);

double calcoloDivisione(double valore1, double valore2);

double calcoloPotenza(double valore1, double valore2);

int main() {
    //dichiarazione variabili
    double num1, num2;
    int scelta;

    // acquisizione variabili
    printf("Inserisci il primo operando:\n");
    scanf("%lf", &num1);

    printf("Inserisci il secondo operando:\n");
    scanf("%lf", &num2);

    do {
        // menu scelta
        printf("\nScegli quale operazione effettuare fra le seguenti:\n"
            "1) SOMMA\n"
            "2) SOTTRAZIONE\n"
            "3) MOLTIPLICAZIONE\n"
            "4) DIVISIONE\n"
            "5) ELEVAMENTO A POTENZA\n"
            "0) TERMINE DEL PROGRAMMA\n");
        scanf("%d", &scelta);

        // gestione casi menu
        switch (scelta) {
            case SOMMA:
                calcoloSomma(num1, num2);
                break;
            case SOTTRAZIONE:
                calcoloSottrazione(num1, num2);
                break;
            case MOLTIPLICAZIONE:
                calcoloMoltiplicazione(num1, num2);
                break;
            case DIVISIONE:
                calcoloDivisione(num1, num2);
                break;
            case POTENZA:
                calcoloPotenza(num1, num2);
                break;
            case TERMINE:
                printf("Fine del programma.\n");
                break;
            default:
                printf("Scelta inserita non valida.\n");
        }

    } while (scelta != 0);

    return 0;
}
// funzione calcolo somma
double calcoloSomma(double valore1, double valore2) {
    double somma;

    somma = valore1 + valore2;

    printf("La somma di %.2lf e %.2lf è: %.2lf\n", valore1, valore2, somma);

    return somma;
}
// funzione calcolo sottrazione
double calcoloSottrazione(double valore1, double valore2) {
    double sottrazione;

    sottrazione = valore1 - valore2;

    printf("La sottrazione di %.2lf e %.2lf è: %.2lf\n", valore1, valore2, sottrazione);

    return sottrazione;
}
// funzione calcolo moltiplicazione
double calcoloMoltiplicazione(double valore1, double valore2) {
    double moltiplicazione;

    moltiplicazione = valore1 * valore2;

    printf("La moltiplicazione di %.2lf e %.2lf è: %.2lf\n", valore1, valore2, moltiplicazione);

    return moltiplicazione;
}
// funzione calcolo divisione
double calcoloDivisione(double valore1, double valore2) {
    double divisione;

    divisione = valore1 / valore2;

    printf("La divisione di %.2lf e %.2lf è: %.2lf\n", valore1, valore2, divisione);

    return divisione;
}
// funzione calcolo potenza
double calcoloPotenza(double valore1, double valore2) {
    double potenza;

    potenza = pow(valore1, valore2);

    printf("La potenza di %.2lf e %.2lf è: %.2lf\n", valore1, valore2, potenza);

    return potenza;
}
*/

/* Esercizio 10
Scrivere una funzione che riceva un array di interi e la sua lunghezza, ne calcoli la media aritmetica e la
restituisca. Invocare la funzione nel main, stampare l’array attraverso un’altra subroutine apposita e la
media
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15 // lunghezza array
#define MIN 0 // range minimo
#define MAX 500 // range massimo

int valoriArryInteri(int min, int max, int dim, int arrayInt[dim]); // funzione inizializzazione array

float mediaArray(int dim, int arrayInt[dim]); // funzione calcolo media

void stampaMedia(float mediaArray); // funzione stampa media

void stampaArray(int dim, int array[dim]); //funzione stampa array

int main() {
    srand(time(NULL)); //inizializzazione del seed

    int arrayInteri[N];

    // chiamata varie funzioni
    valoriArryInteri(MIN, MAX, N, arrayInteri);
    stampaArray(N, arrayInteri);
    mediaArray(N, arrayInteri);
    stampaMedia(mediaArray(N, arrayInteri));

    return 0;
}

int valoriArryInteri(int min, int max, int dim, int arrayInt[dim]) {
    int i;

    for (i = 0; i < dim; i++) {
        arrayInt[i] = min + rand() % (max - min + 1); // inizializzo array con valori casuali
    }

    return arrayInt[i];
}

float mediaArray(int dim, int arrayInt[dim]) {
    int i, somma = 0;
    float media;

    for (i = 0; i < dim; i++) {
        somma += arrayInt[i]; // sommo valori array
        media = somma / (i + 1); // calcolo media
    }

    return media;
}

void stampaMedia(float mediaArray) {
    printf("\nLa media è: %.2f\n", mediaArray); //stampa media
}

void stampaArray(int dim, int array[dim]) {
    int i;

    for (i = 0; i < dim; i++) {
        printf(" %3d ", array[i]); //stampa array
    }
}
*/

/* Esercizio 11
Scrivere una funzione che prenda come parametri due numeri interi e restituisca il massimo tra i due.
Acquisire i valori nel main e testarla opportunamente.
*/

/*
#include <stdio.h>
#include <stdlib.h>

int calcoloMassimo(int valore1, int valore2); //dichiarazione funzione calcolo del massimo
void stampaMassimo(int max); //dichiarazione funzione stampa del massimo

int main() {

    int a, b; //dichiarazioni variabili

    printf("Inserisci il primo parametro a: "); //richiesta input primo paramtro
    scanf("%d", &a);

    printf("Inserisci il primo parametro b: "); //richiesta input secondo parametro
    scanf("%d", &b);

    calcoloMassimo(a, b); //funzione calcolo del massimo che prende come parametri le due variabili

    //funzione stampa che prende il risultato della funzione calcolo massimo e la stampa
    stampaMassimo(calcoloMassimo(a, b));

    return EXIT_SUCCESS; //exit point
}

int calcoloMassimo(int valore1, int valore2) { //funzione calcolo massimo

    int max; //variabile contenitore per il massimo

    //struttura if per il calcolo del massimo
    if (valore1 > valore2) {
        max = valore1;
    } else {
        max = valore2;
    }

    return max; //ritorno il valore massimo
}

void stampaMassimo(int max) { //funzione stampa

    printf("Il massimo è: %d", max);
}
*/

/* Esercizio 12
Scrivere una funzione che prenda come parametri tre numeri interi e restituisca il massimo tra i tre.
Acquisire i valori nel main e testarla opportunamente.
*/
/*
#include <stdio.h>
#include <stdlib.h>

int calcoloMassimo(int parametro1, int parametro2, int parametro3); //dichiarazione funzione calcolo massimo
void stampaMassimo(int max); //dichiarazione funzione stampa del massimo

int main() {

    int a, b, c; //dichiarazione variabili

    printf("Inserisci il primo parametro a: "); //acquisizione prima variabile
    scanf("%d", &a);

    printf("Inserisci il primo parametro b: ");  //acquisizione seconda variabile
    scanf("%d", &b);

    printf("Inserisci il primo parametro c: "); //acquisizione terza variabile
    scanf("%d", &c);

    calcoloMassimo(a, b, c); // funzione calcolo del massimo con 3 parametri in input

    stampaMassimo(calcoloMassimo(a,b,c)); //funzione stampa del massimo


    return EXIT_SUCCESS;
}

int calcoloMassimo(int parametro1, int parametro2, int parametro3) {

    int max;
    //funzione calcolo del massimo fra i 3 parametri
    if (parametro1 > parametro2 && parametro2 > parametro3) {
        max = parametro1;
    } else if (parametro2 > parametro1 && parametro1 > parametro3) {
        max = parametro2;
    } else {
        max = parametro3;
    }

    return max;
}

void stampaMassimo(int max) { //funzione stampa

    printf("Il massimo è: %d", max);

}
*/

/* Esercizio 13
Scrivere una funzione che modifichi un array passato come parametro moltiplicando ogni elemento per 2.
Scrivere poi una subroutine per acquisire l’array e una per stamparlo. Nel main, richiamare opportunamente
le subroutine e stampare l’array prima e dopo la modifica.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#define N 10 //dimensione array
#define MOLTI 2
void acquisizioneArray(int dim, int array[dim]);
void stampaArray(int dim, int array[dim]);
void calcoloArrayModificato(int dim, int array[dim]);
void stampaArrayModificato(int dim, int arrayMoltiplicato[dim]);

int main() {

    int arrayNumeri[N]; //array float di dimensione N dichiarato con macro

    acquisizioneArray(N, arrayNumeri);

    stampaArray(N, arrayNumeri);

    calcoloArrayModificato(N, arrayNumeri);
    printf("\n");
    stampaArray(N, arrayNumeri);

    return EXIT_SUCCESS;
}

void acquisizioneArray(int dim, int array[dim]) {

    int i = 0;

    for (i =0; i < dim; i++) {
        array[i] = i;
    }
}

void calcoloArrayModificato(int dim, int array[dim]) {

    int i = 0;

    for (i = 0; i < dim; i++) {
        array[i] *= MOLTI;
    }
}

void stampaArray(int dim, int array[dim]) {

    int i = 0;

    for (i = 0; i < dim; i++) {
        printf("%d\n", array[i]);
    }
}

void stampaArrayModificato(int dim, int arrayMoltiplicato[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        printf("%2.d\n", arrayMoltiplicato[i]);
    }
}
*/

/* Esercizio 14
Definire una funzione che riceva una stringa, la sua dimensione, e la modifichi rendendo maiuscole le lettere
minuscole, e viceversa. Scrivere poi una subroutine per l’acquisizione della stringa, e una per la stampa. Nel
main, acquisire la stringa e stamparla prima e dopo la modifica.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 151
#define COEFF 32

void acquisizioneStringa(int dim, char stringaLettere[dim]);

void stringaInvertita(int dim, char stringalettere[dim]);

void stampaStringa(int dim, char stringa[dim]);

int main() {
    char stringa[N];

    acquisizioneStringa(N, stringa);

    //stampaStringa(N, stringa);
    puts(stringa);
    printf("\n");

    stringaInvertita(N, stringa);

    //stampaStringa(N, stringa);
    puts(stringa);

    return EXIT_SUCCESS;
}

void acquisizioneStringa(int dim, char stringaLettere[dim]) {

    printf("Inserisci la stringa: ");
    scanf(" %150[^\n]s", stringaLettere);
}

void stringaInvertita(int dim, char stringa[dim]) {
    int i;

    for (i = 0; i < dim; i++) {
        if ('a' <= stringa[i] && stringa[i] <= 'z') {
            stringa[i] -= COEFF;
        } else if ('A' <= stringa[i] && stringa[i] <= 'Z') {
            stringa[i] += COEFF;
        }
    }
}

void stampaStringa(int dim, char stringa[dim]) {
    int i, lenght;

    lenght = strlen(stringa);

    for (i = 0; i < lenght; i++) {
        printf("%c", stringa[i]);
    }
}
*/

/* Esercizio 15
Realizza una funzione che riceve una stringa e un carattere, e restituisce il numero di occorrenze di quel
carattere nella stringa. Scrivere poi una subroutine per l’acquisizione della stringa, e una per la stampa. Nel
main, acquisire la string, stamparla e stampare il numero di occorrenze di quel carattere nella stringa.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 151
#define TOTALCHAR 256

void acquisizioneStringa(int dim, char stringa[dim]);

void conteggioFrequenzaCaratteri(int dim, char stringa[dim]);

void stampaStringaFrequenza(int dim, char stringaDiControllo[dim]);

int main() {
    char stringaFrequenza[N];
    char stringaDiControllo[TOTALCHAR] = {0};

    acquisizioneStringa(N, stringaFrequenza);

    conteggioFrequenzaCaratteri(N, stringaFrequenza);

    return EXIT_SUCCESS;
}

void acquisizioneStringa(int dim, char stringa[dim]) {
    printf("Inserisci la stringa ricordandoti del fatto che può contenere al massimo 150 caratteri: \n");
    scanf(" %150[^\n]s", stringa);
}

void conteggioFrequenzaCaratteri(int dim, char stringa[dim]) {
    int i, lenght;
    char frequenza[TOTALCHAR] = {0};

    lenght = strlen(stringa);

    for (i = 0; i < lenght; i++) {
        frequenza[stringa[i]]++;
    }

    for (i = 0; i < dim; i++) {
        if (frequenza[i] != 0) {
            printf("Il carattere %c si presenta %d nella stringa\n", i, frequenza[i]);
        }
    }
}


//void stampaStringaFrequenza(int dim, char stringaDiControllo[dim]) {
  //  int i;

    //for (i = 0; i < dim; i++) {
      //  if (stringaDiControllo != 0) {
        //    printf("Il carattere %c si presenta %d nella stringa\n", i, stringaDiControllo[i]);
        //}
    //}
//}
*/

/* Esercizio 16
Crea una funzione che riceve un array di interi e la sua dimensione, e restituisce l'indice del valore
massimo nell'array. Richiamarla opportunamente nel main.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 100
#define N 10

void acquisizioneArray(int min, int max, int dim, int array[dim]);
void stampaArray(int dim, int array[dim]);
int valoreMassimo(int dim, int array[dim]);
void stampaMassimo(int max);

int main() {

    srand(time(NULL));

    int array[N];
    int max;

    acquisizioneArray(MIN, MAX, N, array);
    stampaArray(N, array);
    max = valoreMassimo(N, array);
    printf("\n");
    stampaMassimo(max);

    return EXIT_SUCCESS;
}

void acquisizioneArray(int min, int max, int dim, int array[dim]) {

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

int valoreMassimo(int dim, int array[dim]) {

    int i;
    int max = 0;

    for (i = 0; i < dim; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void stampaMassimo(int max) {

    printf("Il valore massimo trovato nell'array è: %d", max);
}
*/

/* Esercizio 17
Implementa una funzione che, dato un numero intero, restituisca 1 se è un numero primo, 0 altrimenti.
Testarla opportunamente dal main.
*/

/*
#include <stdio.h>
#include <stdlib.h>
int acquisizioneIntero();
int controllo(int a);
void stampa(int primo);

int main() {

    int num, varContr;

    num = acquisizioneIntero();

    varContr = controllo(num);

    stampa(varContr);


    return EXIT_SUCCESS;
}

int acquisizioneIntero() {

    int a;

    printf("Inserisci un numero intero: ");
    scanf("%d", &a);

    return a;
}

int controllo(int a) {

    int i;
    int primo = 1;

    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            primo = 0;
        }
    }

    return primo;
}

void stampa(int primo) {

    if (primo == 0) {
        printf("0");
    } else {
        printf("1");
    }
}
*/

/* Esercizio 18
Scrivere una funzione che prenda due stringhe come parametri e verifichi se sono anagrammi tra loro
(stesse lettere, stesso numero) restituendo 1 se vero, 0 se falso. Testarla opportunamente dal main.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM_STRINGA 31 //dimensione stringa input
#define TOT_CHAR 256 //dimensione array di controllo che utilizzeremo conteggio

// chiamata funzione di controllo dei parametri
int controlloParametri(int dim, char const stringa1[dim], char const stringa2[dim], int dim_controllo, char conteggio1[dim_controllo], char conteggio2[dim_controllo]);

void stampa(int risultato);

int main() {

    char parametro1[DIM_STRINGA], parametro2[DIM_STRINGA]; // contenitore variabili prima e seconda stringa
    char arrayDiControllo[TOT_CHAR] = {0}, arrayDiControllo2[TOT_CHAR] = {0}; // contenitore variabile di controllo della prima e della seconda stringa

    int risultato; // variabile che prende il risultato della funzione controllo dei parametri


    printf("Acquisisci la prima stringa:\n"); //acquisisco prima stringa
    scanf(" %30[^\n]s", parametro1);

    printf("Acquisisci la seconda stringa:\n"); //acquisisco seconda stringa
    scanf(" %30[^\n]s", parametro2);
    // risultato prende il valore dato in output della funzione controllo parametri
    risultato = controlloParametri(DIM_STRINGA, parametro1, parametro2, TOT_CHAR, arrayDiControllo, arrayDiControllo2);

    stampa(risultato); //stampo la variabile risultato

    return EXIT_SUCCESS;
}

int controlloParametri(int dim, char const stringa1[dim], char const stringa2[dim], int dim_controllo, char conteggio1[dim_controllo], char conteggio2[dim_controllo]) {

    int i;
    int risultato = 1, len1, len2;

    len1 = strlen(stringa1); //verifico la lunghezza della prima stringa
    len2 = strlen(stringa2); //verifico la lunghezza della seconda stringa

    if (len1 != len2) { // caso in cui le due lunghezze sono diverse automaticamente non sono un'anagramma
        return 0;
    }

    for (i = 0; i < len1; i++) { //scorro ogni carattere della prima stringa
        conteggio1[stringa1[i]]++; // ogni volta che incontro lo stesso carattere all'interno della stringa di controllo incremento
    }

    for (i = 0; i < len2; i++) { //scorro ogni carattere della seconda stringa
        conteggio2[stringa2[i]]++; // ogni volta che incontro lo stesso carattere all'interno della stringa di controllo incremento
    }


    //scorro entrambi gli array di controllo fino alla dimensione dell'array di controllo
    //o fino a quando il risultato da positivo non diventa negativo
    //nel momento in cui le variabile all'interno della cella dell'array differiscono
    //ritorno 0 e di conseguenza esco anche dal ciclo for

    for (i = 0; i < dim_controllo && risultato; i++) {
        if (conteggio1[i] != conteggio2[i]) {
            risultato = 0;
        }
    }

    return risultato; //restituisco risultato
}

//stampo la variabile risultato
void stampa(int risultato) {

    if (risultato == 1) { //caso in cui la varianile risultato vale 1
        printf("Le due stringhe sono un'anagramma.");
    } else { // caso in cui la variabile è diversa da 1
        printf("Le due stringhe non contengono gli stessi caratteri e numeri.");
    }
}
*/

/* Esercizio 19
Definire una subroutine che riceva due vettori di interi e la loro dimensione, e restituisca un nuovo
vettore contenente la somma elemento per elemento dei due vettori ricevuti. Testarla opportunamente
dal main.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MIN 0
#define MAX 250
#define COEFF 10.0

void sommaVettori(int min, int max, int dim, int vettoreA[dim], int vettoreB[dim], int vettoreSomma[dim]);
void stampaVettoreSomma(int dim, int vettoreSomma[dim]);

int main() {
    srand(time(NULL));

    int vettoreA[N], vettoreB[N], sumVettori[N];

    sommaVettori(MIN, MAX,N, vettoreA, vettoreB, sumVettori);

    stampaVettoreSomma(N, sumVettori);

    return EXIT_SUCCESS;
}

void sommaVettori(int min, int max, int dim, int vettoreA[dim], int vettoreB[dim], int vettoreSomma[dim]) {
    int i;

    for (i = 0; i < dim; i++) {
        vettoreA[i] = (min + rand()%(max - min + 1)) / COEFF;
        vettoreB[i] = (min + rand()%(max - min + 1)) / COEFF;
    }

    for (i = 0; i < dim; i++) {
        vettoreSomma[i] = vettoreA[i] + vettoreB[i];
        //printf("%5d ", vettoreSomma[i]);
    }
}

void stampaVettoreSomma(int dim, int vettoreSomma[dim]) {

    int i;

    for (i = 0; i < dim; i++) {
        printf("%5d ", vettoreSomma[i]);
    }
}
*/

/* Esercizio 20
Crea una funzione che, data una stringa, conti il numero di vocali presenti (a, e, i, o, u, maiuscole e
minuscole). Testarla opportunamente dal main.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 51

void acquisizioneStringa(int dim, char stringa[dim]);
void conteggio(int dim, char stringa[dim]);

int main() {

    char string[N];


    acquisizioneStringa(N, string);
    conteggio(N, string);

    return EXIT_SUCCESS;
}

void acquisizioneStringa(int dim, char stringa[dim]) {

    printf("Inserisci la stringa: \n");
    scanf(" %50[^\n]s", stringa);
}

void conteggio(int dim, char stringa[dim]) {

    int i;
    int vocal = 0, minusc = 0, maiusc = 0;
    int len;

    len = strlen(stringa);

    for (i = 0; i < len; i++) {
        if (stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || stringa[i] == 'o' || stringa[i] == 'u') {
            vocal++;
        } else if (stringa[i] >= 'A' && stringa[i] <= 'Z') {
            maiusc++;
        } else if (stringa[i] >= 'a' && stringa[i] <= 'z') {
            minusc++;
        }
    }
    printf("Le maiuscole sono %d\nLe minuscole sono %d\nLe vocali sono %d", maiusc, minusc, vocal);
}
*/

/* Esercizio 21
crivere due subroutine: toUpper e toLower. Entrambe ricevono come parametro una stringa. La prima
subroutine restituisce la stringa con tutti i caratteri minuscoli; la seconda con tutti i caratteri maiuscoli.
Testarla opportunamente dal main.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM_STRINGA 31 //dimensione massima stringa contando carattere di fine stringa
#define COEFF_CONVERS 32 //coefficiente di conversione fra maiuscolo e minuscolo

void acquisizioneStringa(int dim, char stringa[dim]); //chiamata funzione acquisizione stringa
void toUpper(int coeffConver, int dim, char stringa[dim]); //chiamata funzione che trasforma in maiuscolo
void toLower(int coeffConver, int dim, char stringa[dim]); //chiamata funzione che trasforma in minuscolo

int main() {

    char string[DIM_STRINGA]; //dichiarazione variabile di tipo char stringa

    acquisizioneStringa(DIM_STRINGA, string);

    printf("Stringa inserita: ");
    puts(string); //stampa stringa originale

    toUpper(COEFF_CONVERS, DIM_STRINGA, string);

    printf("\nStringa trasformata in maiuscolo: ");
    puts(string); //stampa stringa trasformata in maiuscolo

    toLower(COEFF_CONVERS, DIM_STRINGA, string);

    printf("\nStringa trasformata in minuscolo: ");
    puts(string); //stampa trasformata in minuscolo

    return EXIT_SUCCESS;
}

void acquisizioneStringa(int dim, char stringa[dim]) { //dichiarazione variabile per acquisizione stringa

    printf("Inserisci la stringa:\n");
    scanf(" %30[^\n]s", stringa); //scanf che permette di acquisire spazi e limitare il numero di char inseribili
}

void toUpper(int coeffConver, int dim, char stringa[dim]) { //dichiarazione variabile che cambia i char min in maius

    int i, len;

    len = strlen(stringa); //determino lunghezza stringa

    for (i = 0; i < len; i++) { //scorro ogni cella contenente un char della stringa
        if (stringa[i] >= 'a' && stringa[i] <= 'z') { //verifica se minuscolo
            stringa[i] -= coeffConver; //converte in maiuscolo
        }
    }
}

void toLower(int coeffConver, int dim, char stringa[dim]) { //dichiarazione variabile che cambia tutti i char maius in min

    int i, len;

    len = strlen(stringa); //determino lunghezza stringa

    for (i = 0; i < len; i++) { //scorro ogni cella contenente un char della stringa
        if (stringa[i] >= 'A' && stringa[i] <= 'Z') { //verifica se maiuscolo
            stringa[i] += coeffConver; // converto in minuscolo
        }
    }
}
*/