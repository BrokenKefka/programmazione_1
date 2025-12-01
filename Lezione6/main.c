/* Lezione 6 */

/* Esercizi costrutto for */
/* Esercizio 1
Dopo aver acquisito un numero n da input utente, stampare tutti i numeri da 1 a n su un’unica
riga separati da uno spazio.
*/

/*
#include <stdio.h>

int main(void) {

    int n, i;

    printf("Inserisci un valore a tuo piacimento: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d \t", i);
    }

    return 0;
}
*/

/* Esercizio 1 bis
Dopo aver acquisito un numero n da input utente, stampare tutti i numeri da n a 1 su un’unica
riga separati da uno spazio.
*/

/*
#include <stdio.h>

int main(void) {

    int n, i;

    printf("Inserisci un valore a tuo piacimento: \n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printf("%d \t", i);
    }

    return 0;
}
*/

/* Esercizio 2
Scrivere un programma che stampi i primi n quadrati (elevamento del numero stesso alla
potenza di 2). Chiedere in input il valore di n.
Es.: inserendo 10, il programma deve stampare 1, 4, 9, 16, 25, 36, 49, 64, 81, 100.
*/

/*
#include <stdio.h>
#include <math.h>
#define ESPONENTE 2

int main() {

    int n, i, quad;

    printf("Inserisci un numero del quale vuoi calcolare la potenza: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        quad = pow(i, ESPONENTE);
        printf("%d,\t", quad);
    }

    return 0;
}
*/

/* Esercizio 3
Scrivere un programma che chieda all'utente un numero n e stampi tutti i quadrati dispari
compresi tra 1 e n, al contrario.
Es.: inserendo 10, il programma deve stampare la successione 81, 49, 25, 9, 1.
*/

/*
#include <stdio.h>
#include <math.h>
#define ESPONENTE 2

int main () {

    int n, i, quad;

    printf("Inserisci un valore di cui vuoi calcolare i quadrati dispari: \n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        quad = pow(i, ESPONENTE);
        if ((quad % ESPONENTE) != 0) {
            printf("%d,\t", quad);
        }
    }

    return 0;
}
*/

/* Esercizio 4
Generare un numero casuale compreso tra 2 e 100 e chiedere all’utente un numero nello
stesso intervallo. Se sono uguali stampare un messaggio «Numeri uguali»; in caso contrario
comunicare se il numero inserito è maggiore o minore di quello generato. Il programma deve
terminare quando l’utente indovina il numero generato (for, while o do while?).
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 2
#define MAX 100

int main() {
    int num, numGen, count;
    count = 0;

    srand(time(NULL));

    numGen = MIN + rand()%(MAX - MIN + 1);

    printf("Il numero è stato generato fra %d e %d buona fortuna nell'indovinarlo! \n", MIN, MAX);
    //printf("%d \n", numGen);

    do {
        do {
            printf("Inserisci un valore compreso fra %d e %d \n", MIN, MAX);
            scanf("%d", &num);

            if (num < MIN || num > MAX) {
                printf("Inserisci un valore compresso nell'intervallo ti scongiuro. \n");
            }
        } while (num < MIN || num > MAX);

        count++;

        if (num > numGen) {
            printf("Ci sei quasi, il numero inserito è maggiore di quello generato prova ad inserire un nuovo numero! \n");
            //scanf("%d", &num);
        } else if (num < numGen) {
            printf("Ci sei quasi, il numero inserito è minore di quello generato prova ad inserire un nuovo numero! \n");
            //scanf("%d", &num);
        }

    } while (num != numGen);

    if (count == 1) {
        printf("Ma sei fortissim* hai indovinato il numero al primo colpo!");
    } else {
        printf("Tu sei una bomba! Hai indovinato in solo %d tentativi", count);
    }

    return 0;
}
*/

/* Esercizio 5
Scrivere un programma che stampi il calendario di un mese. L'utente deve specificare il numero
di giorni nel mese e il giorno della settimana in cui questo comincia (0: lunedi', 6: domenica).
*/

/*
#include <stdio.h>
#define SETTIMANA 7

int main() {

    int giorniMese, giornoSett, i;
    i = 0;

    printf("Quanti giorni ha il mese? \n");
    scanf("%d", &giorniMese);

    printf("Con quale giorno della settimana inizia? (0: lunedi', 1: martedì, ... 6: domenica) \n");
    scanf("%d", &giornoSett);

    printf("Lunedi Martedi Mercoledì Giovedì Venerdì Sabato Domenica \n");


    for (i = 1; i < giornoSett; i++) {
        printf("\t\t");
    }

    for (i = 1; i <= giorniMese; i++) {
        printf("\t %d\t", i);

        if ((i + giornoSett - 1) % SETTIMANA == 0) {
            printf("\n");
        }
    }

    return 0;
}
*/

/* Esercizio 6
Scrivere un programma che stampi i primi n numeri primi.
*/


/* Esercizio 7
Scrivere un programma che permetta la stampa delle tabelline a seconda del numero inserito
dall’utente.
36 Es: se l’utente inserisce 10, devono essere stampate le tabelline dalla 1 alla 10.
*/

/*
#include <stdio.h>
#define TABELLINA 10

int main() {

    int num, i, tab;

    i = 0;

    printf("Inserisci un numero del quale vuoi stampare le tabellina. \n");
    scanf("%d", &num);

    for (i = 0; i <= TABELLINA; i++) {
        tab = num * i;
        printf("%d \n", tab);
    }

    return 0;
}
*/

/* Esercizio 8
Scrivere un programma che permetta di convertire numeri binari in decimale. Il programma
acquisisce prima il numero di cifre che formano il numero binario, dopodiché acquisisce
una per volta le cifre del numero binario.
*/

/*
#include <stdio.h>
#include <math.h>
#define BASE 2

int main() {

    // Dichiarazione variabili
    int numCifre, cifra, i, numDec, numBin;

    // Contatore somma numeri decimali inizializzato a 0
    numDec = 0;

    // Input cifre binario
    printf("Da quante cifre è composto il numero binario? \n");
    scanf("%d", &numCifre);

    // Ciclo for dove esponente = i e lo aumentiano mano a mano in base alla cifra che inseriamo
    for (i = 0; i < numCifre; i++) {
        // Input cifre binarie
        printf("Inserisci la cifra più a destra spostandoti poi alla cifra alla sua sinistra: \n");
        scanf("%d", &cifra);
        // Formula di conversione
        numBin = cifra * pow(BASE, i);
        // Printf di controllo
        //printf("numbin %d \n", numBin);
        // Sommatoria valori delle cifre bin
        numDec += numBin;
    }

    // Stampa risultato
    printf("Il numero in base decimale è: %d \n", numDec);

    return 0;
}
*/

/* Esercizio 9
Scrivere un programma che simula un gioco tra due utenti: viene chiesto prima quanti tiri
effettuare (n), dopodiché ogni utente tira n volte un dado. Vince chi ottiene la somma dei
numeri ottenuti maggiore.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX 6

int main() {
    srand(time(NULL));

    int n, i, lancio, somma1, somma2;
    i = 0;
    somma1 = 0;
    somma2 = 0;


    do {
        printf("Scegli quanti tiri vuoi effettuare? \n");
        scanf("%d", &n);


        for (i = 0; i < n; i++) {
            lancio = MIN + rand() % (MAX - MIN + 1);
            //printf("numo %d \n", lancio);
            somma1 += lancio;
        }
        printf("Somma valore lanci giocatore 1: %d \n", somma1);


        for (i = 0; i < n; i++) {
            lancio = MIN + rand() % (MAX - MIN + 1);
            //printf("numo %d \n", lancio);
            somma2 += lancio;
        }
        printf("Somma valore lanci giocatore 2: %d \n", somma2);
    } while (somma1 == somma2);

    if (somma1 > somma2) {
        printf("\nIl vincitore è il giocare 1! Complimenti! \n");
    } else {
        printf("\nIl vincitore è il giocare 2! Complimenti! \n");
    }

    return 0;
}
*/


/* Esercizio 10
Dato un numero n acquisito in input dall’utente, calcola la somma 1+2+…+n; e stampare il
risultato. Verificare la correttezza del calcolo confrontando il risultato con la formula:
(n(n+1) / 2).
*/

/*
#include <stdio.h>
#define COSTANTE_1 1
#define COSTANTE_2 2

int main() {

    int n, i, totale, formula;
    totale = 0;


    printf("Inserisci un numero di cui vuoi calcolare somma di tutti i valori che lo precedono: \n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        totale += i;
    }

    formula = (n * (n + COSTANTE_1) / COSTANTE_2);

    if (totale == formula) {
        printf("Il risultato %d è stato verificato ed è corretto. \n", totale);
    }

    return 0;
}
*/

/* Esercizio 11
Dati due numeri ricevuti in input a e b (requisiti: a compreso tra 0 e 100; b compreso tra 0 e
20), calcolare ab come moltiplicazioni ripetute (a*a*a …. b volte).
*/

/*
#include <stdio.h>
#define MIN_A 0
#define MAX_A 100
#define MIN_B 0
#define MAX_B 20

int main() {

    int a, b, i, tot;
    i = 0;
    tot = 1;

    do {
        printf("Inserisci il valore di a che deve essere compreso fra %d e %d: \n", MIN_A, MAX_A);
        scanf("%d", &a);
    } while (a < MIN_A || a > MAX_A);

    do {
        printf("Inserisci il valore di b che deve essere compreso fra %d e %d: \n", MIN_B, MAX_B);
        scanf("%d", &b);
    } while (b < MIN_B || b > MAX_B);

    for (i = 0; i < b; i++) {
        tot *= a;
    }

    printf("tot %d", tot);

    return 0;
}
*/

/* Esercizio 12
Il fattoriale di un numero naturale n (indicato con n!) è definito come il prodotto di tutti i
numeri naturali positivi minori o uguali a n. Esempio: 5! = 5*4*3*2*1 = 120. Per
convenzione, il fattoriale di 0 (0!) è definito come 1. Dato in input un numero naturale n (n <
12), calcolare il fattoriale di n
*/

/*
#include <stdio.h>
#define MAX 12

int main() {

    int n, i, tot;
    tot = 1;

    do {
        printf("Inserisci un valore intero di cui si vuole calcolare n!, dove n è minore di 12: \n");
        scanf("%d", &n);
    } while (n > MAX);

    for (i = 1; i <= n; i++) {
        tot *= i;
    }
    printf("n!: %d \n", tot);

    return 0;
}
*/

/* Esercizio 13
Scrivere un programma che conti tutti i divisori di un numero n ricevuto in input, scorrendo
da 1 a n. Se i divisori sono 2, deve stampare «numero primo», altrimenti «numero non
primo».
*/

/*
#include <stdio.h>

int main() {
    int n, div, i, count;
    count = 0;

    printf("Inserisci il numero n che vuoi verificare se primo o no: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        div = n % i;
        if (div == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("Il numero %d è primo. \n", n);
    } else {
        printf("Il numero %d non è primo. \n", n);
    }

    return 0;
}
*/

/* Esercizio 14
Scrivere un programma che, generato un numero casuale n compreso tra 3 e 1000, stampi tutti i
numeri da 1 a n, saltando la stampa dei multipli di 3
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 3
#define MAX 1000

int main() {

    srand(time(NULL));

    int n, i;

    n = MIN + rand() % (MAX - MIN + 1);

    for (i = 1; i <= n; i++) {
        if (i % MIN != 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}
*/

/* Esercizio 15
Scrivere un programma che, generato un numero casuale max compreso tra 2 e 999, sommi i
numeri da 1 a max finché la somma non raggiunge il valore di max. Stampare, infine, l’ultimo indice
raggiunto e la somma ottenuta.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MIN 2
#define MAX 999

int main() {
    srand(time(NULL));

    int i, somma, max;
    somma = 0;
    i = 1;

    max = MIN + rand() % (MAX - MIN + 1);
    printf("Numero random generato: %d \n", max);

    for (i = 1; somma <= max; i++) {
        somma += i;
        //printf("%d \n", i);
    }
    if (somma > max) {
        i--;
        somma -= i;
        i--;
    }

    printf("Ultima cifra dell'indice: %d \n", i);
    printf("Ultima somma minore generata prima di raggiungere max: %d \n", somma);

    return 0;
}
*/

/* Esercizio 16
Dato un numero naturale n positivo > 3, stampare un triangolo rettangolo di asterischi.
Esempio, con n = 4, l’output deve essere:
*
**
***
****
*/

/*
#include <stdio.h>

int main() {
    int rows, i, j;

    do {
        printf("Inserisci quante righe vuoi stampare: \n");
        scanf("%d", &rows);
    } while (rows <= 3);

    for (i = 0; i < rows; i++) {

        for (j = 0; j < i; j++) {
            printf("'*'");
        }
        printf("\n");
    }

    return 0;
}
*/

/* Esercizi array  =============================================================================== */

/* Esercizio 1
Scrivere un programma che generi una serie di N numeri casuali all'interno di un
array. Dopodiché stampare in output tutti gli elementi in ordine inverso.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 100
#define N 20

int main() {

    int numRand, i; // dichiarazione variabili
    int arr[N]; // dichiarazione array di dimensione N definita dalla macro

    srand(time(NULL)); // generazione seed

    i = 0; // inizializzo la variabile

    //ciclo for per generare numeri random fino a quando i numeri generati non occupino tutti le caselle disponibili dell'array
    for (i = 0; i < N; i++) {
        numRand = MIN + rand()%(MAX - MIN + 1);
        //printf("%d \n", numRand);
        arr[i] = numRand;
        printf("%d \n", arr[i]); // ripete il ciclo di stampa per ogni numero generato
    }

    printf("\n%d", arr[12]); //stampa il valore contenuto in quella casella dell'array

    return 0;
}
*/

/* Esercizio 2
Scrivere un programma in cui, dato un insieme di valori in un array, si calcoli la
media dei valori e vengano stampati in output tutti i valori minori della media, tutti i
valori maggiori della media e la media stessa.
Infine, stampare quanti sono i valori minori della media e quanti i valori maggiori.
*/

/*
#include <stdio.h>
#define N 5

int main() {
    int num, somma, i;
    int arr[N];
    float media;

    somma = 0;

    for (i = 0; i < N; i++) {
        printf("Inserisci un valore a piacimento: \n");
        scanf("%d", &num);
        arr[i] = num;
        somma += num;
    }

    media = (float) somma / N;
    printf("\nLa media dei %d numeri inseriti è: %.2f \n", N, media);

    //Stampa di tutto l'array

    //for (i = 0; i < N; i++) {
        //printf("Il valore nella cella %d è: %d \n", i, arr[i]);
    //}


    // Stampa dei valori dell'array inferiori alla media
    printf("\nStampa dei valori inferiori alla media. \n");
    for (i = 0; i < N; i++) {
        if (arr[i] < media) {
            printf("Il valore minore è: %d \n", arr[i]);
        }
    }

    // Stampa dei valori superiori alla media
    printf("\nStampa dei valori superiori alla media. \n");
    for (i = 0; i < N; i++) {
        if (arr[i] > media) {
            printf("Il valore maggiore è: %d \n", arr[i]);
        }
    }

    return 0;
}
*/

/* Esercizio 3
Scrivere un programma in cui si dichiarino due array, A e B. Inizializzare il primo
array a piacere e il secondo in modo che contenga gli stessi elementi di A in ordine
inverso. Stampare entrambi gli array come verifica della correttezza.
*/

/*
#include <stdio.h>
#define N 15

int main() {

    int array1[N], array2[N];
    int j, i;

    for (i = 1; i <= N; i++) {
        array1[i] = i;
        printf("%d \n", array1[i]);
    }

    printf("\n");

    for (j = N; j > 0; --j) {
        array2[j] = j;
        printf("%d \n", array2[j]);
    }

    return 0;
}
*/

/* Esercizio 4
Scrivere un programma in cui si dichiari e inizializzi a piacimento un array A, quindi
normalizzarlo. Stampare l'array prima e dopo la normalizzazione.
Hint: normalizzare un intervallo vuol dire portare tutti gli elementi dell’intervallo ad
avere valori compresi tra 0 e 1, secondo la formula x_norm = (x − min)/(max − min)
*/

/*
#include <stdio.h>
#define A 100

int main() {

    double arrayA[A];
    double iNorm, min, max;
    int i;
    i = 0;
    max = arrayA[0];
    min = arrayA[0];

    printf("Prima della normalizzazione.\n");
    for (i=0; i < A; i++) {
        arrayA[i] = i;
        printf("%d \n", i);
    }

    for (i = 0; i < A; i++) {
        arrayA[i] = i;
        if (arrayA[i] > max){
            max = arrayA[i];
        }
    }

    //printf("%d max \n", max);

    for (i = 0; i < A; i++) {
        arrayA[i] = i;
        //printf("%d \n", i);
        if (arrayA[i] < min){
            min = arrayA[i];
        }
    }

    //printf("%d min \n", min);

    printf("\nDopo la normalizzazione.\n");
    for (i = 0; i < A; i++) {
        iNorm = (i - min)/(max - min);
        arrayA[i] = iNorm;
        printf("%lf \n", arrayA[i]);
    }

    return 0;
}
*/

/* Esercizio 5
Scrivere un programma in cui si dichiara un vettore A e si inizializza in maniera
casuale. Trovare l’elemento, tra quelli presenti, più vicino a un numero inserito
dall'utente.
*/

/*
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define MIN 0
#define MAX 100

int main() {
    srand(time(NULL));

    int arrayA[N];
    int numCas, i, numPers, diffCorr, diff;
    int numVicino = arrayA[0];

    do {
        printf("Inserisci un numero %d e %d: \n", MIN, MAX);
        scanf("%d", &numPers);
    } while (numPers < MIN || numPers > MAX);


    for (i = 0; i < N; i++) {
        numCas = MIN + rand() % (MAX - MIN + 1);
        arrayA[i] = numCas;
        printf("\nNumero casuale generato: %d \n", arrayA[i]);
    }

    if (arrayA[0] - numPers < 0) {
        diff = -(arrayA[0] - numPers);
    } else {
        diff = arrayA[0] - numPers;
    }

    for (i = 0; i < N; i++) {
        if (arrayA[i] - numPers < 0) {
            diffCorr = -(arrayA[i] - numPers);
        } else {
            diffCorr = arrayA[i] - numPers;
        }
        if (diffCorr < diff) {
            diff = diffCorr;
            numVicino = arrayA[i];
        }
    }
    printf("\nIl numero piu vicino a %d è: %d \n", numPers, numVicino);

    return 0;
}
*/

/* Esercizio 6 e 7 insieme

 * Esercizio 6
Scrivere un programma che inizializzi un vettore, di dimensione N a piacere,
casualmente. Il programma deve chiedere un valore all'utente e deve stampare in
output se quel valore è contenuto nel vettore oppure no.


 * Esercizio 7
Scrivere un programma che inizializzi un vettore, di dimensione N a piacere,
casualmente. Il programma deve chiedere un valore all'utente e deve stampare in
output quante volte quel valore è contenuto nel vettore.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define MIN 0
#define MAX 50

int main() {
    srand(time(NULL));

    int A[N];
    int num, i, numRand, count, cella;
    count = 0;
    cella = 0;

    printf("Inserisci un valore a piacere tra %d e %d: \n", MIN, MAX);
    scanf("%d", &num);

    for (i = 0; i < N; i++) {
        numRand = MIN + rand() % (MAX - MIN + 1);
        A[i] = numRand;
        printf("Array cella %d: %d \n", i, A[i]);
        if (A[i] == num) {
            count++;
            cella = i;
        }
    }

    if (count > 0 && count < 2) {
        printf("Il numero è contenuto %d volte nell'array nella cella %d.\n", count, cella);
    } else if (count > 2) {
        printf("Il numero %d è contenuto %d volte nell'array. \n", num, count);
    } else {
        printf("Il numero non è contenuto all'interno dell'array. \n");
    }

    return 0;
}
*/

/* Esercizio 8
Scrivere un programma in cui si dichiara e inizializza un array A, quindi stamparlo.
Senza utilizzare altri array d'appoggio, invertire l'ordine degli elementi di A e
ristampare il vettore così modificato.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
#define MIN 0
#define MAX 25

int main() {

    srand(time(NULL));

    int array[N];
    int i, temp, numRandom;
    temp = 0;

    for (i = 0; i < N; i++) {
        numRandom = MIN + rand() % (MAX - MIN + 1);
        array[i] = numRandom;
        printf("cella %d: %d \n", i, array[i]);
    }
    for (i = 0; i < (N / 2); i++) {
        temp = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = temp;
    }

    for (i = 0; i < N; i++) {
        printf("Array inverso cella %d: %d\n", i, array[i]);
    }
    return 0;
}


/* Esercizio 9 !!!!!!!!!!!!!!================!!!!!!!!!!!!!!!!!!!!!SBAGLIATO
Scrivere un programma in cui si dichiara un vettore di 5 elementi. Assegnare
casualmente 5 valori da 1 a 90 senza ripetizioni.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 12
#define MIN 0
#define MAX 15
int main(){
    srand(time(NULL));

    int arr[N];
    int i,j;

    for(i=0;i<N;i++) {
        arr[i]=MIN + rand()%(MAX - MIN + 1);
    }

    for(i=0;i<N;i++) {

        for(j=i +1;j<N;j++) {

            if(arr[i]==arr[j]) {
                do {
                    arr[i]=MIN + rand()%(MAX - MIN + 1);
                }
                while(arr[i]==arr[j]);
            }
        }
        printf(">>%d = %d \n",i, arr[i]);
    }
    return 0;
}
*/

/* Esercizio 10 !!!!!!!!=======!!!!!!!!!!!======!!!!!!
Aggiungere all’esercizio precedente un’interfaccia utente che permetta all’utente
di effettuare una giocata del tipo: estratto, ambo, terno, quaterna, cinquina. In
caso di vittoria dovrà essere comunicata all’utente la vincita, altrimenti dovrà
essere concesso un nuovo tentativo senza una nuova estrazione.
*/

/* Esercizio 11
Scrivere un programma che permetta di convertire numeri binari in decimale. Il programma
acquisisce prima il numero di cifre che formano il numero binario, dopodiché acquisisce una per
volta le cifre del numero binario. Il numero binario deve essere memorizzato in un array. Supporre
che il numero binario possa avere al massimo 20 cifre.
*/

/*
#include <math.h>
#include <stdio.h>
#define N 20
#define BASE 2

int main() {

    int numCif, cifra, cifraDec, numDec, i;
    int A[N];
    i = 0;
    numDec = 0;

    do {
        printf("Da quante cifre è composto il numero?\n");
        scanf("%d", &numCif);
    } while (numCif < 0 || numCif > 20);

    for (i = 0; i < numCif; i++) {
        printf("Inserisci la prima cifra del numero binario a partire da destra: \n");
        scanf("%d", &cifra);
        A[i] = cifra;
        cifraDec = cifra * pow(BASE, i);
        numDec += cifraDec;
    }

    for (i = 0; i < numCif; i++) {
        printf("Cifra binaria a partire da destra %d = %d \n", i, A[i]);
    }

    printf("\nNumero decimale = %d \n", numDec);

    return 0;
}
*/

/* Esercizio 12
Scrivere un programma che inizializzi, a piacere, un vettore di dimensione N. Il programma deve
stampare il secondo elemento maggiore all'interno del vettore.
*/

/*
#include <stdio.h>
#define N 5

int main() {
    int A[N];
    int num, i, max1, max2, secondo;

    for (i = 0; i < N; i++) {
        printf("Inserisci un numero a piacere:\n");
        scanf("%d", &num);
        A[i] = num;
    }

    if (A[0] > A[1]) {
        max1 = A[0];
        max2 = A[1];
    } else {
        max1 = A[1];
        max2 = A[0];
    }

    for (i = 0; i < N; i++) {
        if (A[i] > max1) {
            A[i] = max1;
            max2 = max1;
        } else if (A[i] > max2 && A[i] < max1) {
            max2 = A[i];
        }
    }

    printf("Numero maggiore = %d \n", max1);
    printf("Numero minore = %d \n", max2);
    return 0;
}
*/

/* Esercizio 13
Scrivere un programma in cui venga generato casualmente un array A di dimensione N. Il
programma deve costruire un secondo array P, della stessa dimensione di A, con il seguente
criterio: P[i] = A[0] + … + A[i]. Stampare sia A che P.
Esempio: l’array A = {1, 2, 3, 4} produce un array P = {1, 3, 7, 10
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10

int main() {
    return 0;
}
*/

/* Esercizio 14
Scrivere un programma in cui venga generato casualmente un array A di dimensione N. Il
programma deve costruire un secondo array B, della stessa dimensione di A, in cui gli elementi
sono gli stessi elementi di A ma ruotati a destra di k posizioni, con k inserito in input dall’utente.
NB: k può essere maggiore di N.
Esempio: l’array A = {1, 2, 3, 4} con k = 2 produce l’array B = {3, 4, 1, 2}.
*/

    /*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define MIN 0
#define MAX 100

int main() {

    srand(time(NULL));

    int ar1[N], ar2[N];
    int rnd, i, k;
    i = 0;

    do {
        printf("Inserisci di quanto numeri (k) vuoi ruotare i valori a destra del secondo array: \n");
        scanf("%d", &k);
    }while (k < 0);

    if (k > N) {
        k %= N;
        printf("k = %d\n", k);
    }

    for (i=0; i < N; i++) {
        rnd = MIN + rand()%(MAX - MIN + 1);
        ar1[i] = rnd;

    }
}
*/