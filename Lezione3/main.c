/* Libreria math */

/* Esercizio 1
Scrivere un programma che, conoscendo i valori dei cateti di
un triangolo rettangolo, ne calcoli l'ipotenusa.
*/

/*
#include <stdio.h>
#include <math.h>
#define QUADRATO 2

int main(void) { // entry point

    // dichiarazione variabili
    int cat1, cat2, ipotenusa;

    // acquisizione input
    printf("Inserisci il valore del primo cateto: \n");
    scanf("%d", &cat1);

    printf("Inserisci il valore del secondo cateto: \n");
    scanf("%d", &cat2);

    // calcoli
    ipotenusa = sqrt(pow(cat1, QUADRATO) + pow(cat2, QUADRATO));

    // stampa risultati
    printf("L'ipotenusa vale: %d \n", ipotenusa);

    return 0; // exit point
}
*/

/* Esercizio 2
Scrivere un programma che, nota l'ipotenusa di un triangolo
rettangolo e un altro cateto, calcoli il secondo cateto.
*/

/*
#include <stdio.h>
#include <math.h>
#define QUADRATO 2

int main() { // entry point

    // dichiarazione variabili
    int cat1, cat2, ipo;

    // acquisizione input
    printf("Inserisci il valore dell'ipotenusa: \n");
    scanf("%d", &ipo);

    printf("Inserisci il valore del secondo cateto: \n");
    scanf("%d", &cat2);

    // calcoli
    cat1 = sqrt(pow(ipo, QUADRATO) - pow(cat2, QUADRATO));

    // stampa risultato
    printf("Il valore del prima cateto è: %d \n", cat1);

    return 0; // exit point
}
*/

/* Esercizio 3
Scrivere un programma che data la misura del raggio di un
cerchio, ne calcoli area e circonferenza.
*/

/*
#include <stdio.h>
#include <math.h>
#define QUADRATO 2

int main() { // entry point

    // dichiarazione variabile
    int r;
    float area, circonfernza;

    // input variabili
    printf("Inserisci il valore del raggio: \n");
    scanf("%d", &r);

    // formule
    area = M_PI * pow(r, QUADRATO);

    circonfernza = r * M_PI * QUADRATO;

    // stampa valori risultati
    printf("Il valore dell'area: %.2f \n", area);

    printf("Il valore della circonferenza: %.2f \n", circonfernza);

    return 0; // exit point
}
*/

/* Esercizio 4
Scrivere un programma che permetta il calcolo dell’area e del
perimetro di un triangolo rettangolo dichiarando e
inizializzando due variabili chiamate cateto1 e cateto2.
Stampare poi tutti i valori noti e tutti quelli calcolati
*/

/*
#include <stdio.h>
#include <math.h>
#define QUADRATO 2

int main() { // entry point

    float cateto1, cateto2, ipotenusa;

    printf("Inserisci il valore del primo cateto: \n");
    scanf("%f", &cateto1);

    printf("Inserisci il valore del secondo cateto: \n");
    scanf("%f", &cateto2);

    // calcolo ipotenusa
    ipotenusa = sqrt(pow(cateto1, QUADRATO) + pow(cateto2, QUADRATO));

    printf("Il valore del primo cateto è: %.2f \t Il valore del secondo cateto è: %.2f \t Il valore dell'ipotenusa è: %.2f \n", cateto1, cateto2, ipotenusa);

    return 0; // exit point
}
*/

/* Esercizio 5
Scrivere un programma che, dato il lato, calcoli perimetro e
area di un quadrato.
*/

/*
#include <stdio.h>
#include <math.h>
#define NUMLATI 4
#define QUADRATO 2

int main() { // entry point

    int lato, perimetro, area;

    printf("Inserisci la misura del lato: \n");
    scanf("%d", &lato);

    // formule
    perimetro = lato * NUMLATI;

    area = pow(lato, QUADRATO);

    printf("Il valore del perimetro è: %d \t Il valore dell'area: %d \n", perimetro, area);

    return 0; // exit point
}
*/

/* Esercizio costrutto selezione if - else */

/* Esercizio 1
Scrivere un programma che acquisisca due valori interi in
input ed esegua la divisione tra essi.
Nel caso in cui il secondo valore sia 0, il programma deve
restituire un messaggio di errore.
*/

/*

#include <stdio.h>

int main() { // entry point

    int dividendo, divisore, risultato;

    printf("Inserisci il valore del dividendo: \n");
    scanf("%d", &dividendo);

    printf("Inserisci il valore del divisore: \n");
    scanf("%d", &divisore);

    risultato = dividendo / divisore;

    if (divisore == 0) {
        printf("Il valore del divisore deve essere diverso da zero. \n ");

    } else {
        printf("il valore della divisione è %d", risultato);
    }

    return 0;
}
*/

/* Esercizio 2
Scrivere un programma che chieda all'utente di inserire:
• a quanti anni si può prendere la patente nello stato in cui
vive (Esempio: Italia 18 anni, UK: 17, ecc.)
• l'età dell’utente.
Il programma deve comunicare in output se l’utente può
prendere la patente.
*/

/*
#include <stdio.h>

int main() {

    int annoPat, età, anni;

    printf("Inserisci a quanti anni età è possibile prendere la patente: \n");
    scanf("%d", &annoPat);

    printf("Inserisci la tua età: \n");
    scanf("%d", &età);

    anni = annoPat - età;

    if (età > annoPat) {

        printf("Complimenti! Puoi prendere la patente! \n");

    } else {

        printf("Oh no! Devi aspettare ancora %d anni \n", anni);
    }

    return 0;
}
*/

/* Esercizio 4
Scrivere un programma in cui vengono acquisiti due
numeri dall'utente.
• Il programma deve dire se il primo è multiplo del
secondo, oppure stampare un messaggio per
comunicare che il primo non è multiplo del secondo
*/

/*
#include <stdio.h>

int main() { //entry point

    int a, b;

    printf("Inserisci il primo numero: \n");
    scanf("%d", &a);

    printf("Inserisci il valore del secondo numero: \n");
    scanf("%d", &b);

    if (a % b == 0) {
        printf("IL primo numero è un multiplo del secondo \n");

    } else {
        printf("Il primo numero non è un multiplo del secondo \n");
    }
    return 0; // exit point
}
*/

/* Esercizio 5
Scrivere un programma che acquisisca un valore intero n.
Il programma deve poi:
• Stampare il numero inserito in minuscolo se 1 ≤ n ≤ 9
• Stampare "Maggiore di 9" se n > 9
• Stampare "Errore" in tutti gli altri casi.
Esempio:
• n = 8 -> "otto"
• n = 11 -> "Maggiore di 9"
• n = -5 -> "Errore"
*/

/*
#include <stdio.h>
#define MIN 1
#define MAX 9
#define UNO 1
#define DUE 2
#define TRE 3
#define QUATTRO 4
#define CINQUE 5
#define SEI 6
#define SETTE 7
#define OTTO 8
#define NOVE 9

int main() { // entry point

    int n;

    // acquisizione variabile
    printf("Inserisci un numero intero: \n");
    scanf("%d", &n);

    // se valore min > n stampa "Errore"
    if (MIN > n) {
        printf("Errore");
    } else {
        if (n > MAX) { // se n maggiore di max stampa maggiora di max
            printf("Maggiore di %d \n", MAX);
        // altrimenti stampa il suo valore scritto in lettere
        } else if (n == UNO){
            printf("uno \n");
        } else if (n == DUE) {
            printf("due \n");
        } else if (n == TRE) {
            printf("tre \n");
        } else if (n == QUATTRO) {
            printf("quattro \n");
        } else if (n == CINQUE) {
            printf("cinque \n");
        } else if (n == SEI) {
            printf("sei \n");
        } else if (n == SETTE) {
            printf("sette \n");
        } else if (n == OTTO) {
            printf("otto \n");
        } else if (n == NOVE) {
            printf("nove");
        }
    }

    return 0; // exit point
}
*/

/* Esercizio 6
Scrivere un programma che chieda tre numeri da
tastiera e li visualizzi in ordine decrescente.
• Modificare l’esercizio per far sì che li visualizzi anche in
ordine crescente.
*/

/*
#include <stdio.h>

int main() {

    int a, b, c;

    printf("Inserisci il primo numero: \n");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: \n");
    scanf("%d", &b);

    printf("Inserisci il terzo numero: \n");
    scanf("%d", &c);

    // ordine decrescente

    if (a > b && b > c) { // a > b > c
        printf("I numeri in ordine decrescente sono %d, %d, %d \n", a, b, c);
    } else if (b > a && a > c) { // b > a > c
        printf("I numeri in ordine decrescente sono %d, %d, %d \n", b, a, c);
    } else if (c > b && b > a) { // c > b > a
        printf("I numeri in ordine decrescente sono %d, %d, %d \n", c, b, a);
    } else if (a > c && c > b) { // a > c > b
        printf("I numeri in ordine decrescente sono %d, %d, %d \n", a, c, b);
    } else if (b > c && c > a) { // a > c > b
        printf("I numeri in ordine decrescente sono %d, %d, %d \n", b, c, a);
    } else if (c > a && a > b) { // c > a b
        printf("I numeri in ordine decrescente sono %d, %d, %d \n", c, a, b);
    }

     // ordine crescente

    if (a < b && b < c) { // a > b > c
        printf("I numeri in ordine crescente sono %d, %d, %d \n", a, b, c);
    } else if (b < a && a < c) { // b > a > c
        printf("I numeri in ordine crescente sono %d, %d, %d \n", b, a, c);
    } else if (c < b && b < a) { // c > b > a
        printf("I numeri in ordine crescente sono %d, %d, %d \n", c, b, a);
    } else if (a < c && c < b) { // a > c > b
        printf("I numeri in ordine crescente sono %d, %d, %d \n", a, c, b);
    } else if (b < c && c < a) { // a > c > b
        printf("I numeri in ordine crescente sono %d, %d, %d \n", b, c, a);
    } else if (c < a && a < b) { // c > a b
        printf("I numeri in ordine crescente sono %d, %d, %d \n", c, a, b);
    }

    return 0;
}
*/

/* Esercizio 7
Scrivere un programma che permetta l’inserimento delle
età di tre persone.
• Successivamente stampare a video l’età relativa a ogni
persona e indicare l'età del più anziano.
• Modificare l'esercizio per far sì che stampi anche l'età
del più giovane.
*/

/*
#include <stdio.h>

int main() {

    int età1, età2, età3;

    printf("Inserisci la prima età: \n");
    scanf("%d", &età1);

    printf("Inserisci la seconda età: \n");
    scanf("%d", &età2);

    printf("Inserisci la terza età: \n");
    scanf("%d", &età3);

    // età più aniano
    if (età1 > età2 && età1 > età3) {
        printf("L'età della prima persona è %d, della second è %d, della terza è %d. \n Il più anziano è %d \n", età1,
            età2, età3, età1);
    } else if (età2 > età1 && età2 > età3) {
        printf("L'età della prima persona è %d, della second è %d, della terza è %d. \n Il più anziano è %d \n", età1,
            età2, età3, età2);
    } else {
        printf("L'età della prima persona è %d, della second è %d, della terza è %d. \n Il più anziano è %d \n", età1,
            età2, età3, età3);
    }

    // età più giovane
    if (età1 < età2 && età1 < età3) {
        printf("L'età della prima persona è %d, della second è %d, della terza è %d. \n Il più giovane è %d \n", età1,
            età2, età3, età1);
    } else if (età2 < età1 && età2 < età3) {
        printf("L'età della prima persona è %d, della second è %d, della terza è %d. \n Il più giovane è %d \n", età1,
            età2, età3, età2);
    } else {
        printf("L'età della prima persona è %d, della second è %d, della terza è %d. \n Il più giovane è %d \n", età1,
            età2, età3, età3);
    }

    return 0;
}
*/

/* Esercizio 9
Scrivere un programma per dividere gli allievi di un corso
in tre squadre denominate ROSSA, VERDE e BLU
secondo il loro numero di matricola.
• L’assegnazione avviene con il seguente criterio: l’allievo
con matricola 1 va nella squadra ROSSA, quello con
matricola 2 nella VERDE, quello con matricola 3 nella
BLU, quello con matricola 4 nella ROSSA, quello con 5
nella VERDE, ecc.
• Il programma deve chiedere il numero di matricola
dell’allievo e indicare a quale squadra è assegnato.
*/

/*
#include <stdio.h>
#define SQUADRE 3
#define ROSSA 1
#define VERDE 2
#define BLUE 0

int main() {

    int a;

    printf("Inserisci il numero di matricola: \n");
    scanf("%d", &a);

    // utilizzato operatore modulo per calcolare il resto
    if (a % SQUADRE == ROSSA) {
        printf("Sei stato assegnato alla squadra Rossa \n");
    } else if (a % SQUADRE == VERDE) {
        printf("Sei stato assegnato alla squadra Verde \n");
    } else {
        printf("Sei stato assegnato alla squadra Blu \n");
    }

    return 0;
}
*/

/* Esercizio 10
Scrivere un programma che prenda in ingresso tre valori
(a, b, c) corrispondenti ai tre coefficienti di una
equazione di secondo grado, e calcoli le soluzioni
dell’equazione.
• Il programma dovrà effettuare una stampa in caso di
delta negativo, una in caso di radici coincidenti e una
terza nel caso di due radici distinte.
*/

/*
#include <stdio.h>

int main() {



    return 0;
}
*/

/* Esercizio 11
Scrivere un programma che, acquisiti tre numeri,
permetta di decidere all'utente se determinare il
maggiore, determinare il minore, calcolare la somma o
la media.
• Tale scelta dovrà avvenire inserendo un carattere in
input (‘m’, ‘M’, ’s’, ‘a’).
*/

/*
#include <stdio.h>

int main() {

    int num1, num2, num3, s, a;
    char ch;

    printf("Inserisci il primo numero: \n");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: \n");
    scanf("%d", &num2);

    printf("Inserisci il terzo numero: \n");
    scanf("%d", &num3);

    printf("Scegli l'operazione da effettuare: \n");
    scanf(" %c", &ch);

    s = num1 + num2 + num3;

    a = (num1 + num2 + num3) / 3;


    if (ch == 's') {
        printf("La somma è: %d \n", s);
    } else if (ch == 'a') {
        printf("La media è: %d \n", a);
    } else if (ch == 'M') {
        if (num1> num2 && num1 > num3) {
            printf("Il valore maggiore è %d \n", num1);
        } else if (num2 > num1 && num2 > num3) {
            printf("Il valore maggiore è: %d \n", num2);
        }else {
            printf("Il valore maggiore è: %d \n", num3);
        }
    } else if (ch == 'm') {
        if (num1 < num2 && num1 < num3) {
            printf("Il valore minore è %d \n", num1);
        } else if (num2 < num1 && num2 < num3) {
            printf("Il valore minore è: %d \n", num2);
        }else {
            printf("Il valore minore è: %d \n", num3);
        }
    }

    return 0;
}
*/

/* Esercizio 12
Scrivere un programma che, acquisiti sette valori reali,
relativi alle temperature della settimana, stabilisca la
giornata più calda e quella più fredda.
*/

/*
#include <stdio.h>

int main() {

    float temp1, temp2, temp3, temp4, temp5, temp6, temp7;

    printf("Inserisci il valore di lunedì: \n");
    scanf("%f", &temp1);

    printf("Inserisci il valore di martedì: \n");
    scanf("%f", &temp2);

    printf("Inserisci il valore di mercoledì: \n");
    scanf("%f", &temp3);

    printf("Inserisci il valore di giovedì: \n");
    scanf("%f", &temp4);

    printf("Inserisci il valore di venerdì: \n");
    scanf("%f", &temp5);

    printf("Inserisci il valore di sabato: \n");
    scanf("%f", &temp6);

    printf("Inserisci il valore di domenica: \n");
    scanf("%f", &temp7);

    // Va usata iterazione for o devo fare tutte le possibili combinazioni per trovare il maggiore e minore?

    return 0;
}
*/

/* Esercizio 12 BIS
Scrivere un programma che, acquisiti sette valori reali,
relativi alle temperature della settimana, stabilisca la
giornata più calda e quella più fredda.
*/

/*
#include <stdio.h>

int main() {

    float temp, min, max, count, somma, media;

    min = 0;
    max = 0;
    count = 0;
    somma = 0;
    media = 0;

    printf("Inserisci i valori della temperatura della settimana: \n");
    scanf("%f", &temp);

    while (count < 6) {
        printf("Inserisci i valori della temperatura della settimana: \n");
        scanf("%f", &temp);
        if (count == 1) {
            min = temp;
            max = temp;
        } else if (temp > max) {
            max = temp;
        } else if (temp < min) {
            min = temp;
        }
        somma += temp;
        media = somma / count;
        count++;
    }

    printf("La giornata più calda è stata: %.2f \n", max);
    printf("La giornata più fredda è stata: %.2f \n", min);
    printf("La media delle temperature settimanali è: %.2f \n", media);

    return 0;
}
*/