/* Lezione 8 */

/* Esercizio 1
Scrivere un programma che date due stringhe in ingresso stampi la più lunga. Se sono di uguale lunghezza, stamperà
solo la prima acquisita.
*/

/*
#include <stdio.h>
#include <string.h>
#define A 101
#define B 121

int main(void) {

    char stringa1[A], stringa2[B];
    int len1, len2;

    printf("Scegli cosa scriver nella prima stringa: \n");
    scanf(" %100[^\n]s", stringa1);

    printf("Scegli cosa scrivere nella seconda stringa: \n");
    scanf(" %120[^\n]s", stringa2);

    len1 = strlen(stringa1);
    len2 = strlen(stringa2);

    printf("È più lunga.\n");

    if (len1 > len2) {
        puts(stringa1);
    } else {
        puts(stringa2);
    }

    return 0;
}
*/

/* Esercizio 2
Scrivere un programma che chieda in ingresso una stringa e calcoli da quanti caratteri è composta, senza usare strlen
*/

/*
#include <stdio.h>

#define A 151
#define B 151

int main() {

    char stringa[A];
    int count = 0;

    printf("Inserisci la prima stringa: \n");
    scanf(" %150[^\n]s", stringa);

    while (stringa[count] != '\0' && count < A) {
        count++;
    }

    printf("La mia stringa %s è lunga: %d",stringa, count);

    return 0;
}
*/

/* Esercizio 3
Scrivere un programma in cui si dichiarano due stringhe di dimensione N, definita mediante direttiva #define, e si
acquisiscono entrambe in input. Il programma deve copiare la seconda stringa all'interno della prima, senza usare la
strcpy. Stampare le stringhe prima e dopo l'operazione di copia.
*/

/*
#include <stdio.h>
#include <string.h>
#define N 151

int main() {
    char stringa1[N], stringa2[N];
    int len1, len2, i = 0;

    printf("Inserisci la prima stringa: \n");
    scanf(" %150[^\n]s", stringa1);

    printf("Inserisci la seconda stringa: \n");
    scanf(" %150[^\n]s", stringa2);

    len1 = strlen(stringa1);
    len2 = strlen(stringa2);

    for (i = 0; i < len2; i++) {
        stringa2[i] = stringa1[i];
    }

    printf("La prima stringa %s di lunghezza = %d, copiata nella seconda di lunghezza %d è: %s", stringa1, len1, len2,
           stringa2);

    return 0;
}
*/

/* Esercizio 4
Scrivere un programma che date due stringhe in input stampi la maggiore alfabeticamente, sia con funzioni di libreria
che senza.
*/

/*
#include <stdio.h>
#include <string.h>

#define N 151

int main() {
    char stringa1[N], stringa2[N];
    int i;

    printf("Inserisci la prima stringa: \n");
    scanf(" %150[^\n]s", stringa1);

    printf("Inserisci la seconda stringa: \n");
    scanf(" %150[^\n]s", stringa2);

    i = strcmp(stringa1, stringa2);


    if(i > 0) {
        printf("%s viene prima alfabeticamente.\n", stringa2);
    } else if(i < 0) {
        printf(" %s viene prima alfabeticamente.\n", stringa1);
    } else {
        printf("Le stringhe sono uguali.\n");
    }


    return 0;
}
*/


/* Esercizio 5
Scrivere un programma che acquisisca una stringa e la modifichi trasformando tutti i caratteri minuscoli in maiuscoli
e viceversa. Tutti gli altri caratteri vanno lasciati inalterati.
*/

/*
#include <stdio.h>
#include <string.h>
#define N 151
#define DIFF 32

int main() {

    char stringa[N];
    int len1, i;

    printf("Inserisci la stringa.\n");
    scanf(" %150[^\n]s", stringa);

    len1 = strlen(stringa);

    for (i = 0; i < len1; i++) {
        if (stringa[i] >= 'a' && stringa[i] <= 'z') {
            stringa[i] -= DIFF;
        } else if (stringa[i] >= 'A' && stringa[i] <= 'Z') {
            stringa[i] += DIFF;
        }
    }

    puts(stringa);

    return 0;
}
*/

/* Esercizio 6
Scrivere un programma che acquisisca una stringa e conti il numero di caratteri spazio inseriti dall'utente, in due
versioni diverse:
1. utilizzando la strlen (utilizzando un FOR),
2. con un ciclo che si ferma quando incontra il carattere di escape ‘\0' (utilizzando un WHILE).
Quale soluzione sarebbe preferibile? Perché?
*/

/*
#include <stdio.h>
#include <string.h>
#define N 151

int main() {

    char stringa[N];
    int len, i = 0, count = 0;

    printf("Inserisci la stringa: \n");
    scanf(" %150[^\n]s", stringa);

    len = strlen(stringa);


    for (i = 0; i < len; i++) {
        if (stringa[i] == 32) {
            count++;
        }
    }


    printf("%d", count);


    while (stringa[i] != '\0' && i < len) {
        i++;
        if (stringa[i] == 32) {
            count++;
        }
    }


    printf("%d", count);

    return 0;
}
*/

/* Esercizio 7
Scrivere un programma che cerchi la "maggiore" e la "minore" tra una serie di parole inserite dall'utente.
*/

/*
#include <stdio.h>
#include <string.h>
#define N 151

int main() {

    char stringa[N], min, max;
    int i, len;

    printf("Inserisci la stringa: \n");
    scanf(" %150[^\n]s", stringa);

    len = strlen(stringa);

    min = stringa[0];
    max = stringa[0];

    for (i = 0; i < len; i++) {
        if (stringa[i] > max) {
            max = stringa[i];
        } else if (stringa[i] < min) {
            min = stringa[i];
        }
    }

    printf("Il minimo è %c e il valore associato nella tabella ascii è: %d \n", min, min);
    printf("Il massimo è %c e il valore associato nella tabella ascii è: %d \n", max, max);

    return 0;
}
*/

/* Esercizio 8
Scrivere un filtro B1FF, che legga una stringa inserita dall'utente e la modifichi secondo le seguenti regole:
• tutte le lettere diventano maiuscole;
• le seguenti lettere vengono trasformate nei seguenti numeri: A->4, B->8, E->3, I->1, O->0, S->5;
• il messaggio finisce sempre con la sequenza: "..!!1!1".
*/

/*
#include <stdio.h>
#include <string.h>

#define N 151
#define DIFF 32
#define A 65
#define B 66
#define E 69
#define I 73
#define O 79
#define S 83
#define VALA 52
#define VALB 56
#define VALE 51
#define VALI 49
#define VALO 48
#define VALS 53
#define ESCL 33
#define UNO 49

int main() {
    char stringa1[N], stringa2[N] = {ESCL, ESCL, UNO, ESCL, UNO};
    int i, len;

    printf("Inserisci la stringa:\n");
    scanf(" %150[^\n]s", stringa1);

    len = strlen(stringa1);

    for (i = 0; i < len; i++) {

        if (stringa1[i] >= 'a' && stringa1[i] <= 'z') {
            stringa1[i] -= DIFF;
        }

        switch (stringa1[i]) {
            case A:
                stringa1[i] = VALA;
                break;

            case B:
                stringa1[i] = VALB;
                break;

            case E:
                stringa1[i] = VALE;
                break;

            case I:
                stringa1[i] = VALI;
                break;

            case O:
                stringa1[i] = VALO;
                break;

            case S:
                stringa1[i] = VALS;
                break;
        }
    }

    strcat(stringa1, stringa2);

    puts(stringa1);

    return 0;
}
*/

/* Esercizio 9
Scrivere un programma che prenda in ingresso due stringhe, s1 ed s2, e stampi se la stringa s2 è completamente
contenuta in s1 o meno. Per "completamente contenuta" si intende che i caratteri di s2 devono essere presenti in
s1 nella stessa sequenza in cui compaiono in s2. Ad esempio, la stringa "zio" è contenuta in "funzione".
*/

/*
#include <stdio.h>
#include <string.h>
#define N 151

int main() {
    char stringa1[N], stringa2[N];
    int len1, len2;

    printf("Inserisci la prima stringa: \n");
    scanf(" %150[^\n]s", stringa1);

    printf("Inserisci la seconda stringa: \n");
    scanf(" %150[^\n]s", stringa2);

    len1 = strlen(stringa1);
    len2 = strlen(stringa2);

    if (len1 == len2) {
        printf("Le stringhe sono uguali.\n");
    } else if(len1 > len2) {
        printf("la prima stringa è maggiore della seconda.\n");
    } else {
        printf("La seconda stringa è maggiore della prima.\n");
    }

    return 0;
}
*/

/* Esercizio 10
Scrivere un programma che prenda in ingresso una stringa e stampi in output se la stringa è palindroma. Una
stringa è palindroma se può essere letta nello stesso modo da sinistra verso destra e da destra verso sinistra.
Esempi: "anna", "kayak", "elle", "otto" sono palindrome.
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define N 151

int main() {
    char stringa[N];
    int len, i;
    bool pal = false;

    printf("Verifica se la stringa è palindroma.\n");
    printf("Inserisci una stringa a piacere: \n");
    scanf(" %150[^\n]s", stringa);

    len = strlen(stringa);

    for (i = 0; i < len; i++) {
        if (stringa[i] == stringa[len - 1 - i]) {
            pal = true;
        } else {
            pal = false;
        }
    }

    if(pal == true) {
    printf("La stringa è palindroma.\n");
    } else {
        printf("La stringa non è palindroma.\n");
    }

    return 0;
}
*/

/* Esercizio 11
Scrivere un programma che prenda in ingresso una stringa e conti quante e quali lettere si ripetono. Stampare in
output il conteggio.
*/


#include <stdio.h>
#include <string.h>

#define N 151

int main() {
    char stringa[N], cella, lettereRip[N], lettsingole[N];
    int i = 0, j = 0, count = 0, len = 0, conteggio = 0, volteRip[N];

    printf("Inserisci una stringa:\n");
    scanf(" %150[^\n]s", stringa);

    len = strlen(stringa);

    for (i = 0; i < len; i++) {
        count = 0;
        conteggio = 0;

        for (j = 0; j < len; j++) {
            if (stringa[i] == stringa[j]) {
                count++;
                conteggio = count;
                cella = stringa[i];
            }
        }
        if (conteggio > 1) {
            lettereRip[i] = cella;
            volteRip[i] = conteggio;

        }
    }


    for (i = 0; i < len; i++) {
        if (volteRip[i] > 1) {
            printf("Il carattere %c si ripete %d\n", lettereRip[i], volteRip[i]);

        }

    }



    return 0;
}




/* Esercizio 12
Scrivere un programma che richieda in input una stringa e conti di quante lettere maiuscole, lettere minuscole,
cifre e altri caratteri è composta.
Esempio“Buongiorno2023! 6Qui?” deve fornire in output: maiuscole:2, minuscole: 11, cifre: 5, altri: 3.
*/

/*
#include <stdio.h>
#include <string.h>

#define N 151
#define MINMAIUSCOLE 65
#define MAXMAIUSCOLE 90
#define MINMINUSCOLE 97
#define MAXMINUSCOLE 122
#define MINCIFRE 48
#define MAXCIFRE 57

int main() {
    char stringa[N];
    int i, len, countMax = 0, countMin = 0, countCifre = 0, countAltri = 0, conteggioMaiuscole = 0, conteggioMinuscole = 0, conteggioCifre = 0, conteggioAltri = 0;

    printf("Inserisca una stringa a suo piacere:\n");
    scanf(" %150[^\n]s", stringa);

    len = strlen(stringa);

    for (i = 0; i < len; i++) {
        if ('A' <= stringa[i] && stringa[i] <= 'Z') {
            countMax++;
        } else if ('a' <= stringa[i] && stringa[i] <= 'z') {
            countMin++;
        } else if ('0' <= stringa[i] && stringa[i] <= '9') {
            countCifre++;
        } else {
            countAltri++;
        }
        conteggioMaiuscole = countMax;
        conteggioMinuscole = countMin;
        conteggioCifre = countCifre;
        conteggioAltri = countAltri;
    }

    printf("Data la stringa %s abbiamo:\nmaiuscole: %d\nminuscole: %d\ncifre: %d\naltri: %d\n", stringa, conteggioMaiuscole, conteggioMinuscole, conteggioCifre, conteggioAltri);


    return 0;
}
*/

/* Esercizio 13
Scrivere un programma che chieda all'utente di inserire 3 frasi, e le salvi in un array di stringhe. Chiedere poi
all'utente quale delle 3 frasi stampare, quindi stampare la frase desiderata.
*/

/*
#include <stdio.h>

#define FRASE1 1
#define FRASE2 2
#define FRASE3 3
#define TERMINA 0

#define N 151
#define ROWS 4


int main() {

    char stringArray[ROWS][N];
    int i = 0, scelta;


    for (i = 1; i < ROWS; i++) {
        printf("Inserisci la frase %d: \n", i);
        scanf(" %150[^\n]s", stringArray[i]);
    }

    do {
        printf("Scegli quale frase stampare 1, 2, 3 o 0 per terminare: \n");
        scanf("%d", &scelta);

        switch (scelta) {
            case FRASE1:
                printf("%s\n", stringArray[FRASE1]);
                break;

            case FRASE2:
                printf("%s\n", stringArray[FRASE2]);
                break;

            case FRASE3:
                printf("%s\n", stringArray[FRASE3]);
                break;

            case TERMINA:
                printf("Termine del programma.\n");
                break;

            default:
                printf("Something isn't working.\n");
        }
    } while (scelta != 0);

    return 0;
}
*/