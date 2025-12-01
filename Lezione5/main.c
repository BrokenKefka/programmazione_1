/* Esercizi Lezione 5 */

/* Esercizi 1
Scrivere 3 espressioni aritmetiche che utilizzino un operatore prefisso o postfisso;
stampare, quindi, il valore di tutte le variabili implicate nell’operazione prima e dopo il
calcolo dell’espressione. Commentare opportunatamente tutto il codice.
*/

/*
#include <stdio.h>

int main(void) {

    int a, b, sum, sot, mult;

    printf("Inserisci il valore di a: \n");
    scanf("%d", &a);

    printf("Inserisci il valore di b: \n");
    scanf("%d", &b);


    printf("il valore di a e b è: %d, %d \n", a, b);

    sum = ++a + ++b;
    sot = a - b--;
    mult = a++ * --b;

    printf("Stampa i valori dei risultati: %d %d %d \n", sum, sot, mult);

    return 0;
}
*/

/* Esercizio 2
Scrivere un programma che esegua la divisione tra due numeri, chiedendo di inserire
nuovamente il divisore finché questo non è diverso (non è diverso == uguale) da 0.
*/

/*
#include <stdio.h>

int main() {

    float a, b, div;

    printf("Inserisci il valore di a: \n");
    scanf("%f", &a);

    printf("Inserisci il valore di b: \n");
    scanf("%f", &b);

    div = a / b;

    while (b == 0) {
        printf("Inserisci un nuovo valore per b che sia diverso da 0: \n");
        scanf("%d", &b);
    }

    printf("Il risultato di a / b = %.2f \n", div);
    return 0;
}
*/

/* Esercizio 3
Calcolare il numero di cifre che compongono un numero intero inserito dall'utente.
*/

/*
#include <stdio.h>

int main() {

    int num, cifre;
    cifre = 0;
        printf("Inserisci un valore numerico casuale intero: \n");
        scanf("%d", &num);

        while (num != 0) {
            num /= 10;
            cifre++;
        }

    printf("%d", cifre);

    return 0;
}
*/

/* Esercizio 4
Scrivere un programma che chieda un numero num all'utente, e generi
continuamente numeri casuali compresi tra 0 e MAX finché il numero generato non è
maggiore di num. Stampare infine il numero di valori generati casualmente e il valore
maggiore di num.
Opzionalmente, verificare che l'utente inserisca un valore consono.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 1000

int main() {

    float num;
    int numRandom, numGen, max;

    numGen = 0;

    srand(time(NULL));

    printf("Inserisci un numero intero o decimale: \n");
    scanf("%f", &num);

    while (num > MAX || MIN > num) {
        printf("Il numero deve essere compreso fra MIN: %d e MAX: %d \n", MIN, MAX);
        scanf("%f", &num);
    }

    if (numRandom > num) {
        max = numRandom;
    }

    while (num > numRandom) {
        numRandom = MIN + rand()%(MAX - MIN + 1);
        printf("%d \n", numRandom);
        numGen++;
        max = numRandom;
    }

    if (numGen == 1) {
        printf("Il numero generato casuale è stato solo uno. \n");
    } else {
        printf("I numeri generati casualmente sono stati: %d \n", numGen);
    }

    printf("Il numero generato superiore è: %d \n", max);

    return 0;
}
*/

/* Esercizio 5
Scrivere un programma che, dati due numeri a e b generati casualmente, calcoli a^b
senza utilizzare funzioni di libreria. Verificare poi la correttezza del risultato utilizzando
la funzione pow( ) definita nella libreria math.h
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MIN 0
#define MAX 10

int main() {

    int a, b, pot;

    pot = 1;

    srand(time(NULL));

    //a = 3;
    //b = 0;

    a = MIN + rand()%(MAX - MIN + 1);
    printf("base %d \n", a);

    b = MIN + rand()%(MAX - MIN + 1);
    printf("esponente %d \n", b);


    if (a == 0) {
        printf("Non è necessario effettuare la potenza perchè qualsiasi numero elevato a zero da zero. \n");
    } else if (a == 1) {
        printf("Il valore di a rimane è lo stesso %d \n", a);
    } else if (b == 1) {
        printf("Il valore della base rimane lo stesso %d \n", a);
    } else if (b == 0) {
        printf("Qualsiasi potenza elevata a zero vale sempre 1. \n");
    } while (b != 0 && a != 0 && a != 1 ) {
        pot = a * pot;
        b--;
        printf("%d \n", pot);
    }

    if (a != 0) {
        printf("La potenza di a elevato a b è: %d \n", pot);
    }

    return 0;
}
*/

/* Esercizio 6
Scrivere un programma che acquisisca numeri float in successione. Per ogni
numero inserito dovrà essere la calcolata la media e stampato il minore ed il
maggiore inseriti fino a quel momento. Il programma deve terminare nel
momento in cui si inserisce 0 o un numero qualsiasi negativo.
*/

/*
#include <stdio.h>

int main() {

    float num, min, max, somma, media;
    int count;

    somma = 0;
    count = 0;

    printf("Inserisci dei numeri interi o decimali a piacimento. \n");
    scanf("%f", &num);
    printf("Inserisci un valore minore o uguale di zero per terminare \n");

    while (num != 0 || num > 0) {

        somma += num;
        count++;
        media = somma / count;

        if (count == 1) {
            max = num;
            min = num;
        } else if (num > max) {
            max = num;
        } else if (num < min) {
            min = num;
        }

        printf("La media è: %.2f \n", media);
        printf("Il minimo è: %.2f \n", min);
        printf("Il massimo è: %.2f \n", max);

        printf("Inserisci dei numeri interi o decimali a piacimento. \n");
        printf("Inserisci un valore minore o uguale di zero per terminare \n");
        scanf("%f", &num);

    }

    printf("Hai deciso di terminare il programma. \n");
    printf("I numeri inseriti sono stati: %d \n", count);
    printf("Il minimo è: %.2f \n", min);
    printf("Il massimo è: %.2f \n", max);
    printf("La media è: %.2f \n", media);

    return 0;
}
*/

/* Esercizio 7
Scrivere un programma che calcoli la media di tutti i valori introdotti dalla tastiera
finché non ne viene introdotto uno non compreso tra 18 e 30. La visualizzazione
della media deve avvenire solo alla fine, e non ogni volta che un valore viene
introdotto.
*/

/*
#include <stdio.h>

int main() {

    int num, somma, count;
    float media;
    somma = 0;
    count = 0;


    printf("Inserisci dei valori diversi fino a quando non ne inserisci uno maggiore di 30 o minore di 18: \n");
    scanf("%d", &num);

    while (num > 18 && num < 30){
        //printf("Inserisci dei valori diversi fino a quando non ne inserisci uno maggiore di 30 o minore di 18: \n");
        //scanf("%d", &num);
        somma += num;
        count++;
        printf("Inserisci dei valori diversi fino a quando non ne inserisci uno maggiore di 30 o minore di 18: \n");
        scanf("%d", &num);
    }

    media = somma / count;
    printf("somma %d \n", somma);
    printf("count %d \n", count);
    printf("media %.2f \n", media);

    return 0;
}
*/

/* Esercizio 8
Scrivere un programma che richieda N numeri da tastiera e ne calcoli il valore
massimo.
*/

/*
#include <stdio.h>

int main() {

    float num, max;
    max = 0;

   do {
       printf("Inserisci un numero e -1 per terminare: \n");
       scanf("%f", &num);
       if (num > max) {
           max = num;
       }
   } while (num != -1);
    printf("Il numero più alto: %.2f \n", max);

    return 0;
}
*/

/* Esercizio 9
Scrivere un programma in cui viene generato casualmente un numero intero
compreso tra 0 e 99 e chiedere all’utente di indovinare quel numero. Ad ogni
input dell’utente il programma risponde con “troppo alto” o “troppo basso”,
finché non viene trovato il valore corretto.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MIN 0
#define MAX 99

int main() {

    int num, numGen;

    srand(time(NULL));

    numGen = MIN + rand()%(MAX - MIN + 1);


    printf("Prova ad indovinare il numero: \n");
    scanf("%d", &num);

    //printf("rand %d \n", numGen);

    while (num != numGen) {

        if (num > numGen) {
            printf("il numero inserito è troppo alto. \n");
            printf("Inserisci un nuovo numero più basso del precedente: \n");
            scanf("%d", &num);
        } else if (num < numGen) {
            printf("il numero inserito è troppo basso. \n");
            printf("Inserisci un nuovo numero più alto del precedente: \n");
            scanf("%d", &num);
        }
    }

    printf("Il numero inserito è giusto %d = %d \n", num, numGen);

    return 0;
}
*/