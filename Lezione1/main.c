/* Esercizio 1
 *Scrivere un programma in cui vengono dichiarate tre variabili
intere a, b, c, a cui viene assegnato un valore a piacere.
Il programma deve visualizzare, poi, il risultato dei tre
seguenti calcoli:
• a–b+c
• a–b+c*a
• (a/b) % c
Non devono essere presenti magic numbers e si deve
commentare opportunamente tutto il codice.

#include <stdio.h>


int main(void) { //entry point

    //dichiarazione input output
    int a, b, c, x, y, z;

    // assegno valori variabili
    a = 7;
    b = 3;
    c = 12;

    // istruzioni e calcoli richiesti
    x = a - b + c;
    y = a - b + c * a;
    z = (a / b) % c;

    // stampa del risultato
    printf("il valore della prima operazione è %d, della seconda %d, della terza %d", x, y, z); //stampa risultati

    return 0; //exit point
}

*/

/* Esercizio 2
 * Scrivere un programma in cui si dichiarano due variabili A e B
e si assegnino a esse due valori a piacere dello studente.
Il programma deve ora scambiare il contenuto di A e di B.
• Esempio: se inizialmente A contiene 15 e B 7, dopo lo
scambio A contiene 7 e B 15.
Stampare i valori delle due variabili prima e dopo lo scambio.
Non devono essere presenti magic numbers e si deve
commentare opportunamente tutto il codice.

*/

/*
#include <stdio.h>

int main(void) { //entry point

    int a, b, c; //dichiarazione variabile

    a = 7;
    b = 42;

    // stampo risultato
    printf("il valore di a è %d e il valore di b è %d \n", a, b);

    // istruzioni per lo scambio
    c = b;
    b = a;
    a = c;

    // stampa del risultato
    printf("il valore di a è %d e il valore di b è %d \n", a, b);

    return 0; //exit point
}

*/

/* Esercizio 3
 * Versione 1: scrivere un programma in cui si dichiarano tre
variabili intere A, B, e C e si assegnino a esse tre valori a
piacere dello studente. Il programma deve calcolare la
media dei tre valori, memorizzarla in una variabile di tipo
float e visualizzarla con 2 decimali.
Versione 2: ripetere l'esercizio della versione 1 dichiarando
tre variabili di tipo float.
Non devono essere presenti magic numbers e si deve
commentare opportunamente tutto il codice.

*/

/*
#include <stdio.h>

int main(void) { //entry point
    float a, b, c; //dichiarazione variabile
    // inserimento input
    printf("inserisci il primo valore decimale: \n");
    scanf("%f", &a);

    printf("inserisci il seconda valore decimale: \n");
    scanf("%f", &b);

    printf("inserisci il terzo valore decimale: \n");
    scanf("%f", &c);
    // stampo risultato
    printf("il valore di a è %.2f, b è %.2f, c è %.2f \n", a, b, c);


    return 0; //exit point
}
*/

/* Esercizio 4
 * Scrivere un programma che, dato un numero complessivo di
gatti e il numero di questi per fila, fornisca in output:
• il numero di file risultanti
• il numero di gatti rimanenti nel caso in cui l’ultima fila
non sia completa.
Non devono essere presenti magic numbers e si deve
commentare opportunamente tutto il codice.
*/

/*
#include <stdio.h>

int main(void) { //entry point

    //dichiarazione variabili
    int numGatti, gattiFila, file, resto;

    // inserimenti input
    printf("inserisci il numero dei gatti: \n");
    scanf("%d", &numGatti);

    printf("inserisci il numero dei gatti per fila: \n");
    scanf("%d", &gattiFila);

    // formula quoziente
    file = numGatti / gattiFila;

    // formula resto
    resto = numGatti % gattiFila;

    // stampa del risultato
    printf("il numero di file è %d, il resto è %d \n", file, resto);

    return 0; //exitpoint
}
*/

/* Esercizio 5
 *Scrivere un programma che, ricevuto in input un numero di
gradi Celsius, lo trasformi in Fahrenheit secondo la formula
F=(C*1.8) + 32. Effettuare poi la conversione inversa
secondo la formula C=(F-32)/1.8 e controllare mediante
stampa a video la correttezza del risultato.
Non devono essere presenti magic numbers e si deve
commentare opportunamente tutto il codice.
*/

/*
#include <stdio.h>
#define COSTANTE 1.8
#define SOMMA 32 //num da aggiungere o sottrarre nella formula

int main(void) {

    // celsius to fah e fah to celsius
    float gradiCel, ctof, ftoc;

    // inserimento input
    printf("inserisci il valore in Celsius: \n");
    scanf("%f", &gradiCel);

    // calcoli e istruzioni
    ctof = (gradiCel * COSTANTE) + SOMMA;

    printf("il valore in Celsius è: %.2f \n", ctof);

    ftoc = (ctof - SOMMA) / COSTANTE;

    printf("il valore in Fahrenheit è: %.2f \n", ftoc);

    return 0;
}
*/

/* Esercizio 6
 * Scrivere un programma che permetta il calcolo del
polinomio 5x4 - 8x3 + 4x2 + 3x – 4. Assegnare alla variabile x
un valore a piacere e stampare il risultato a video.
*/

/*
#include <stdio.h>
#include <math.h>

int main(void) { //entry point

    // dichiarazione variabili
    int x, poly;

    // acquisizione input
    printf("inserisci il valore da assegnare alla variabile x: \n");
    scanf("%d", &x);

    // calcolo polinomio
    poly = (5 * x * 4) - (8 * x * 3) + (4 * 2 ) + (3 * x) - 4;

    // stampa del risultato
    printf("il risultato del polinomio è: %d \n", poly);

    return 0; //exit point
}
*/

/* Esercizio 7
 * Scrivere un programma che permetta di calcolare il costo finale di un certo
prodotto. Assegnare a piacere il prezzo del prodotto in una variabile float
prezzoProdotto e associare a una macro IVA una percentuale a piacere.
Stampare poi in output il seguente messaggio:
Importo iniziale: ___.__ EUR
IVA applicata (__%): __.__ EUR
Importo finale: __.__ EUR
Tutti gli importi e la percentuale dovranno essere sostituiti dal valore
corrispondente. Per gli importi dovranno essere stampate solo due cifre
decimali.
Non devono essere presenti magic numbers e si deve commentare
opportunamente tutto il codice.
*/

/*
#include <stdio.h>
#define IVA 22
#define PERCENTUALE 100

int main(void) { //entry point

    // dichiarazione variabile
    float prezzoProdotto, importoFinale, ivaApplicata;

    // acquisizione input
    printf("inserisci il prezzo: \n");
    scanf("%f", &prezzoProdotto);

    //formule e calcoli
    ivaApplicata = prezzoProdotto / PERCENTUALE * IVA;

    importoFinale = prezzoProdotto - (prezzoProdotto/PERCENTUALE * IVA);

    //stampa risultato
    printf("Importo iniziale: %.2f EUR \n", prezzoProdotto);
    printf("Iva applicata 22%%: %.2f EUR \n", ivaApplicata);
    printf("Importo finale: %.2f EUR", importoFinale);

    // exit point
    return 0;
}
*/

/* Esercizio 8
• Cosa visualizzerà il seguente codice?
printf("*\n**\n***\n****\n*****\n");
• Cosa visualizzerà il seguente codice?
printf("%%\n%%%%\t%%%%\n%%\t%%\n");
• Cosa visualizzerà il seguente codice?
printf("\\\n\\\"\n\\\"\\\n\\\n\"\n");
• Cosa visualizzerà il seguente codice?
printf("%%\n%%%%\n%%%%%%\n%%%%%%%%\n%%%%%%%%%%\n")
*/

/*
#include <stdio.h>

int main() { // entry point

    //varie stampe
    printf("*\n**\n***\n****\n*****\n");

    printf("%%\n%%%%\t%%%%\n%%\t%%\n");

    printf("\\\n\\\"\n\\\"\\\n\\\n\"\n");

    return 0; //exit point
}
*/

/* Esercizio 9
Scrivere un programma che visualizzi una scatola, un ovale,
una freccia e un diamante come i seguenti
*/

/*
#include <stdio.h>

int main() { // entry point

    // stampa delle forme
    printf("\n *********\t \t***\t \t\t  * \t\t  * ");

    printf("\n * \t \t * \t * \t  \t * \t\t *** \t\t * *");

    printf("\n * \t \t * \t * \t \t *\t\t***** \t\t* \t*");

    printf("\n * \t \t * \t * \t \t *\t\t  * \t   * \t *");

    printf("\n * \t \t * \t * \t \t *\t\t  * \t  * \t  *");

    printf("\n * \t \t * \t * \t \t *\t\t  * \t   * \t *");

    printf("\n * \t \t * \t * \t \t *\t\t  * \t\t* \t*");

    printf("\n * \t \t * \t * \t  \t * \t\t  * \t\t * *");

    printf("\n *********\t \t***\t \t\t  * \t\t  * ");

    return 0; // exit point
}
*/

/* Esercizio 10
Scrivete un programma che visualizzi il disegno di una
scacchiera utilizzando otto istruzioni printf() e quindi
stampate lo stesso disegno con il minor numero possibile
d'istruzioni printf().
*/

/*
#include <stdio.h>

int main() { //entry point

    // stampa scacchiera
    printf("\n \t * \t * \t * \t * \t * \t * \t * \t * \n");

    printf("\n * \t * \t * \t * \t * \t * \t * \t * \n");

    printf("\n \t * \t * \t * \t * \t * \t * \t * \t * \n");

    printf("\n * \t * \t * \t * \t * \t * \t * \t * \n");

    printf("\n \t * \t * \t * \t * \t * \t * \t * \t * \n");

    printf("\n * \t * \t * \t * \t * \t * \t * \t * \n");

    printf("\n \t * \t * \t * \t * \t * \t * \t * \t * \n");

    printf("\n * \t * \t * \t * \t * \t * \t * \t * \n");

    return 0; // exit point
}
*/