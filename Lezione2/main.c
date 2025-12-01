/* Esercizio 1
Scrivere un programma in linguaggio C che:
• legga da tastiera un numero intero che rappresenta un
intervallo di tempo espresso in secondi;
• calcoli quante ore, minuti e secondi corrispondono a tale
intervallo;
• stampi il risultato sullo schermo nel formato:
X ore, Y minuti e Z secondi
Nota: Tutti i valori visualizzati devono essere numeri interi.
Esempio:
• Input: 14792
• Output: 4 ore, 6 minuti e 32 secondi
*/

/*
#include <stdio.h>
#define ORE 3600
#define MINUTI 60


int main(void) { // entry point

    // dichiarazione variabile
    int numSec, ore, min, sec;

    // acquisizione input
    printf("Inserisci un valore che rappresenti un intervallo di tempo espresso in secondi: \n");
    scanf("%d", &numSec);

    // calcoli
    ore = numSec / ORE;

    min = (numSec % ORE) / MINUTI;

    sec = (numSec % ORE) % MINUTI;

    // stampa risultato
    printf("%d secondi equivalgono a: %d ore %d minuti e %d secondi \n", numSec, ore, min, sec);

    return 0; // exit point
}

*/

/* Esercizio 2
Scrivere un programma per calcolare i quadrati e i cubi dei
numeri da 0 a 10, utilizzando le tabulazioni ( \t )per
visualizzare la tabella in questo modo.
*/


#include <stdio.h>
#include <math.h>

int main() {

    int num, square, cube;




    return 0;
}


/* Esercizio 3
Scrivere un programma per eseguire il prodotto di tre interi.
• Dichiarare le variabili x, y, z e result di tipo int.
• Impostare 3 valori rispettivamente uno per x, uno per y e uno
per z.
• Calcolare il prodotto delle tre variabili e assegnare il risultato
alla variabile result.
• Infine, visualizzare: "Il prodotto è __.", dove __ dovrà essere
sostituito dal valore di result.
• Non devono essere presenti magic numbers e si deve
commentare opportunatamente tutto il codice.
*/

/*
#include <stdio.h>

int main() {

    int x, y, z, result;

    printf("Inserisci il valore di x: \n");
    scanf("%d", &x);

    printf("Inserisci il valore di y: \n");
    scanf("%d", &y);

    printf("Inserisci il valore di z: \n");
    scanf("%d", &z);

    result = x * y * z;

    printf("Il prodotte è %d. \n", result);

    return 0;
}
*/

/* Esercizio 4
Scrivere un programma C in cui verranno dichiarati due
interi.
• Assegnare un valore a entrambi gli interi.
• Stampare, quindi:
• La loro somma
• Il precedente e il successivo di entrambi
• La loro media
• Non devono essere presenti magic numbers e si deve
commentare opportunamente tutto il codice.
*/

/*
#include <stdio.h>
#define MEDIA 2

int main() { // entry point

    // dichiarazione variabili
    int a, b, somma, media;

    // acquisizione input
    printf("Inserisci il primo valore intero: \n");
    scanf("%d", &a);

    printf("Inserisci il secondo valore intero: \n");
    scanf("%d", &b);

    // calcoli
    somma = a + b;

    media = (a + b) / MEDIA;

    // stampa dei risultati
    printf("Il valore della somma: %d \n", somma);

    printf("Il valore precedente del primo intero è: %d \n", --a);

    printf("Il valore precedente del secondo valore è: %d \n", --b);

    return 0; // exit point
}
*/

/* Esercizio 5
Scrivere un programma in linguaggio C che legga da
tastiera il peso (in kg) e l’altezza (in cm) di una persona
(entrambi interi) e calcoli l’Indice di Massa Corporea
(BMI), definito come:
BMI =
peso
ቀaltezza in metri)
2
• Stampare a schermo il valore del BMI come numero
reale con due cifre decimali.
*/

/*
#include <stdio.h>
#include <math.h>
#define CENTIMETRI 100
#define POTENZA 2

int main() { //entry point

    // dichiarazione variabile
    int peso, altezzacm, a, b;
    float altezzam, bmi;

    a = 3;
    b = 2;
    // acquisizione variabili
    printf("Inserisci il peso in kg: \n");
    scanf("%d", &peso);

    printf("Inserisci l'altezza in cm: \n");
    scanf("%d", &altezzacm);

    // istruzioni calcoli
    altezzam = (float)altezzacm / CENTIMETRI;

    bmi = peso / (pow(altezzam, POTENZA));

    // stampa risultati
    printf("L'indice di massa corporeo è: %.2f \n", bmi);

    return 0; // exit point
}
*/

/* Esercizio 6
Cosa sarà visualizzato (se lo sarà), quando ognuna delle seguenti istruzioni
verrà eseguita?
Nel caso in cui non venga visualizzato niente, rispondere "niente". Assumete
che: int x = 2 e int y = 3.
a) printf("%d", x);
b) printf("%d", x+x);
c) printf("x=");
d) printf("x=%d", x);
e) printf("%d = %d", x+y, y+x);
f) z = x +y;
g) //printf("x + y = %d", x+y);
h) printf("\n");
*/

/*
#include <stdio.h>

int main() {

    int x, y;

    x = 2;
    y = 3;


     * a) 2
     * b) 4
     * c) x=
     * d) x=2
     * e) 5 = 5 ( una volta prendiamo 2 + 3 l'altra prendiamo 3 + 2)
     * f) niente
     * g) niente (è un commento)
     * h) niente

    return 0;
}

*/

/* Esercizio 7
Scrivere un programma che permetta di gestire la conversione mph –
kmh (miglia orarie in km orari) sapendo che il tasso di conversione mph
- kmh è pari a 1.61 (1 mph = 1,61 kmh). Associare tale tasso ad una
macro chiamata T_CONV_MPH_TO_KMH. Assegnare alla variabile
velocitaMph un valore a piacere e stampare il seguente messaggio in
output:
Velocita in mph: ___.__ mph.
Velocita in kmh: ___.__ kmh.
• Dove ___.__ dovrà essere sostituito dal valore corrispondente e dovrà
essere stampata solo una cifra decimale.
• Non devono essere presenti magic numbers e si deve commentare
opportunatamente tutto il codice.
*/

/*
#include <stdio.h>
#define T_CONV_MPH_TO_KMH 1.61

int main() { // entry point

    // dichiarazione variabili
    float velocitàMph, velocitàKmh;

    // acquisizione input
    printf("Inserisci la velocità in Mph: \n");
    scanf("%f", &velocitàMph);

    // calcoli
    velocitàKmh = velocitàMph * T_CONV_MPH_TO_KMH;

    // stampa risultati
    printf("Velocità in mph: %.1f mph \n", velocitàMph);

    printf("Velocità in kmh: %.1f kmh", velocitàKmh);

    return 0; // exit point
}
*/

/* Esercizio 8a®
Scrivere un programma in cui, dopo aver impostato due
numeri, si visualizzi la loro somma, prodotto, differenza,
quoziente e resto. Assumete che il secondo numero sia
diverso da zero.
*/

/*
#include <stdio.h>

int main() { // entry point

    // variabili
    int a, b, somma, prodotto, differenza, quoziente, resto;

    // acquisizione input
    printf("Inserisci il primo e il secondo valore: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    // calcoli
    somma = a + b;
    prodotto = a * b;
    differenza = a - b;
    quoziente = a / b;
    resto = a % b;

    // Stampa risultato
    printf("Somma: %d \n", somma);

    printf("Prodotto: %d \n", prodotto);

    printf("Differenza: %d \n", differenza);

    printf("Quoziente: %d \n", quoziente);

    printf("Resto: %d \n", resto);

    return 0; // exit point
}
*/

/* Esercizio 8b
• Scrivere un programma che visualizzi i numeri da 1 a 4
sulla stessa riga. Scrivere il programma utilizzando i
seguenti metodi:
• Usando un'istruzione printf senza segnaposto.
• Usando un'istruzione printf con 4 segnaposto.
• Usando 4 istruzioni printf.
*/

/*
#include <stdio.h>

int main() { // entry point

    // stampa senza segnaposto
    printf("Numeri da 1 a 4: 1, 2, 3, 4 \n");

    // stampa con segnaposto
    printf("Numeri da 1 a 4: %d, %d, %d, %d \n", 1, 2, 3, 4);

    return 0; // exit point
}
*/

/* Esercizio 9
Scrivere un programma che esegua la somma tra un intero
minore di 100 e un carattere a piacere.
Stampare il risultato usando i segnaposti %c e %d.
*/

/*
#include <stdio.h>

int main() {

    When a character appears in a computation, C simply uses its integer value.
    Consider the following examples, which assume the ASCII character set:
    char ch;
    int i;
    i = 'a'; // i is now 97
    ch = 65; // ch is now 'A'
    ch = ch + 1; // ch is now 'B'
    ch++; // ch is now 'C'

    return 0;
}
*/

/* Esercizio 10
Scrivere un programma che esegua le 4 operazioni di base tra
due variabili:
• intere e intere
• float e float
• intere e float.
• Stampare poi il risultato.
• In particolare: effettuare una divisione tra interi assegnando il
risultato
• a una variabile intera prima
• e float dopo
• Utilizzare opportunatamente il cast esplicito per risolvere
eventuali anomalie.
*/

/*
#include <stdio.h>

int main() {

    int a, b, somma, differenza, moltiplicazione, divisione;
    float c, d, somma1, differenza1, moltiplicazione1, divisione1, somma2, differenza2, moltiplicazione2, divisione2;

    printf("Inserisci la prima variabile intera a: \n");
    scanf("%d", &a);

    printf("Inserisci la seconda variabile intera b: \n");
    scanf("%d", &b);

    printf("Inserisci la prima variabile decimale c: \n");
    scanf("%f", &c);

    printf("Inserisci la seconda variabile decimale d: \n");
    scanf("%f", &d);

    somma = a + b; // somma fra interi

    somma1 = c + d; // somma fra float

    somma2 = a + d; // somma fra intero e float

    differenza = a - b; // diff fra interi

    differenza1 = c - d; // diff fra float

    differenza2 = a - d; // diff fra int e float

    moltiplicazione = a * b;

    moltiplicazione1 = c * d;

   moltiplicazione2 = a * d;

    divisione = a / b;

    divisione1 = c / d;

    divisione2 = a / d;

    printf("Somma 1: %d, somma 2: %.2f, somma 3: %.2f \n", somma, somma1, somma2);

    printf("Differenza 1: %d, differenza 2: %.2f, differenza 3: %.2f \n", differenza, differenza1, differenza2);

    printf("Moltiplicazione 1: %d, moltiplicazione 2: %.2f, moltiplicazione 3: %.2f \n", moltiplicazione, moltiplicazione1, moltiplicazione2);

    printf("Divisione 1: %d, divisione 2: %.2f, divisione 3: %.2f \n", divisione, divisione1, divisione2);

    return 0;
}
*/

/* Esercizio 11
Scrivere un programma che dato un numero intero
assegnato a una variabile numero di 4 cifre stampi il
numero di unità, decine, centinaia e migliaia.
*/

/*
#include <stdio.h>
#define MIGLIAIA 1000
#define CENTINAIA 100
#define DECINE 10



int main() {

    int a, unità, decine, centinaia, migliaia;

    printf("Inserisci un numero intero di 4 cifre: \n");
    scanf("%d", &a);

    migliaia = a / MIGLIAIA;

    centinaia = (a % MIGLIAIA) / CENTINAIA;

    decine = (a % CENTINAIA) / DECINE;

    unità = a % DECINE;

    printf("1234 abbiamo: %d migliaia , %d centinaia, %d decine, %d unità \n", migliaia, centinaia, decine, unità);

    return 0;
}
*/

/* Esercizio 12
Modificare il programma precedente permettendo la
stampa di decimi e centesimi di un numero float.
*/

/*
#include <stdio.h>
#define MILLE 1000
#define CENTO 100
#define DIECI 10

int main() {

    int decimi, centesimi;
    float a, decimale;

    printf("Inserisci un numero decimale di 4 cifre: \n");
    scanf("%f", &a);

    decimale = a - (int)a;

    decimi = decimale * DIECI;

    centesimi = (int)(decimale * CENTO) % DIECI;

    printf("Il valore dei decimi è %d, centesimi %d. \n", decimi, centesimi);

    return 0;
}
*/

/* Esercizio 13
Finora abbiamo visto il tipo di dato carattere: char. Ogni carattere è
rappresentato, in linguaggio C, mediante il codice ASCII. Quindi, è
ammessa una stampa del genere:
printf("%d", 'A'); // stampa il codice ASCII di 'A'
che restituisce il valore intero corrispondente alla rappresentazione
di A in codice ASCII.
Determinare, a questo punto, il codice intero corrispondente a: A B
C a b c 0 1 2 $ + / e del carattere spazio.

65 32 66 32 67 32 97 32 98 32 99 32 48 32 49 32 50 32 36 32 43 32 47

*/