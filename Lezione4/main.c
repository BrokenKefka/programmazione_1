/* Lezione 4 */

/* Generazione casuale */

/* Esercizio 1
Scrivere un programma che chieda all'utente due valori
interi min e max di un intervallo. Il programma deve
generare, poi, 3 numeri casuali in quell'intervallo.
Stampare, infine, i numeri generati.

b) Modificare l’esercizio per fare in modo che vengano
generati tre numeri float casuali nello stesso intervallo
definito in precedenza e vengano stampati con 3 cifre
decimali utili.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define BASE 10
#define ESPONENTE 3

int main(void) {

    int min, max;
    float a, b, c;

    srand(time(NULL));

    printf("inserisci il valore minimo: \n");
    scanf("%d", &min);

    printf("inserisci il valore del massimo: \n");
    scanf("%d", &max);

    min *= pow(BASE, ESPONENTE);
    max *= pow(BASE, ESPONENTE);

    a = min + rand()%(max - min + 1);

    b = min + rand()%(max - min + 1);

    c = min + rand()%(max - min + 1);


    a /= pow(BASE, ESPONENTE);

    b /= pow(BASE, ESPONENTE);

    c /= pow(BASE, ESPONENTE);


    printf("i tre valori casuali generati sono: %.2f, %.2f, %.2f \n", a, b, c);
    return 0;
}
*/

/* Esercizio 2-3-4
2) Scrivere un programma che generi il peso di una persona
da 3.00 a 120.00 kg (con due cifre decimali).

3) Scrivere un programma che, acquisito il peso in kg e
l’altezza in metri, calcoli e stampi l’indice di massa corporea
(BMI) secondo la formula BMI = peso / altezza2.

4) Modificare il programma 3 sfruttando la generazione
casuale utilizzata nel programma 2 e aggiungendo la
generazione casuale dell’altezza usando come minimo
0.30m e come massimo 2.50m.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define BASE 10
#define ESPONENTE 3

int main() {

    float pesomin, pesomax, peso, altezzamin, altezzamax, altezza, bmi;

    srand(time(NULL));

    printf("Inserisci il valore del peso minimo in kg: \n");
    scanf("%f", &pesomin);

    printf("Inserisci il valore del peso massimo in kg: \n");
    scanf("%f", &pesomax);

    pesomin *= pow(BASE, ESPONENTE);
    pesomax *= pow(BASE, ESPONENTE);

    peso = (int)pesomin + rand()%(int)(pesomax - pesomin + 1);

    peso /= pow(BASE, ESPONENTE);

    printf("Il peso è: %.2f \n", peso);

    printf("Inserisci il valore dell'altezza minima in metri: \n");
    scanf("%f", &altezzamin);

    printf("Inserisci il valore dell'altezza massima in metri: \n");
    scanf("%f", &altezzamax);

    altezzamin *= pow(BASE, ESPONENTE);
    altezzamax *= pow(BASE, ESPONENTE);

    altezza = (int)altezzamin + rand()%(int)(altezzamax - altezzamin + 1);

    altezza /= pow(BASE, ESPONENTE);

    printf("L'altezza generata è: %.2f \n", altezza);

    bmi = peso / (altezza * 2);

    printf("L'indice di massa corporeo è %.2f \n", bmi);


    return 0;
}
*/

/* Esercizio 5
Scrivere un programma che:
• Chieda all'utente di inserire due valori reali, che
rappresentano il minimo e il massimo di un certo intervallo.
• Generi casualmente un certo valore casuale.
• Stampi a video se il valore generato è all'interno
dell'intervallo oppure no.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MIN 1
#define MAX 1000

int main() {

    int min, max, numCas;

    srand(time(NULL));

    printf("Inserisci il valore minimo dell'intervallo: \n");
    scanf("%d", &min);

    printf("Inserisci il valore massimo dell'intervallo: \n");
    scanf("%d", &max);

    numCas = MIN + rand()%(MAX - MIN + 1);

    //numCas = rand();

    if (min >= numCas || numCas <= max) {
        printf("Il valore generato %d è all'interno dell'intervallo \n", numCas);
    } else {
        printf("Il valore generato %d non è all'interno dell'intervallo \n", numCas);
    }

    return 0;
}
*/

/* Esercizi switch - case */

/* Esercizio 0
Scrivere un programma che acquisisca in input un valore
booleano, lo memorizzi in un'apposita variabile booleana e
stampi a video se il suo valore è true o false.
Risolvere l'esercizio in 3 versioni distinte, usando:
• If – else
• Switch – case
• Operatore ternario
*/

/*
#include <stdio.h>
#include <stdbool.h>

int main() {

    int n;
    bool x;

    printf("Inserisci un valore booleano: \n");
    scanf("%d", &n);

    x = n;


    if (x == 0) {
        printf("Il valore è false \n");
    } else {
        printf("Il valore è true \n");
    }



    switch (x) {
        case 0:
            printf("False \n");
            break;
        default:
            printf("True \n");
            break;
    }


    x ? false : true;

    printf("%d", x);

    return 0;
}
*/

/* Esercizio 1
Scrivere un programma che, utilizzando lo switch-case,
legga in input un voto rappresentato da un numero tra 2 e 10
e ne stampi il significato in questo modo:
• 10 → 'Ottimo'
• 9 → 'Distinto'
• 8 → 'Buono'
• 7 → 'Discreto'
• 6 → 'Sufficiente'
• 5 → 'Lievemente insufficiente'
• 4 → 'Gravemente insufficiente'
• 3 → 'Gravemente insufficiente'
• 2 → 'Gravemente insufficiente'
*/

/*
#include <stdio.h>
#define OTTIMO 10
#define DISTINTO 9
#define BUONO 8
#define DISCRETO 7
#define SUFFICIENTE 6
#define LIEVEMENTE_INSUFFICIENTE 5
#define GRAVEMENTE_INSUFFICIENTE_1 4
#define GRAVEMENTE_INSUFFICIENTE_2 3
#define GRAVEMENTE_INSUFFICIENTE_3 2

int main() {

    int voto;

    printf("Inserisci il voto: \n");
    scanf("%d", &voto);

    switch (voto) {
        case OTTIMO:
            printf("Ottimo");
            break;
        case DISTINTO:
            printf("Discreto");
            break;
        case BUONO:
            printf("Buono");
            break;
        case DISCRETO:
            printf("Discreto");
            break;
        case SUFFICIENTE:
            printf("Sufficiente");
            break;
        case LIEVEMENTE_INSUFFICIENTE:
            printf("Lievemente insufficiente");
            break;
        case GRAVEMENTE_INSUFFICIENTE_1:
        case GRAVEMENTE_INSUFFICIENTE_2:
        case GRAVEMENTE_INSUFFICIENTE_3:
            printf("Gravemente insufficiente");
            break;
        default:
            printf("Il valore inserito non è valido");
    }

    return 0;
}
*/

/* Esercizio 2
Scrivere un programma che generi un numero casuale
tra 0 e 10 e chieda poi all’utente di inserire un valore tra
0 e 10.
• Se il numero inserito è maggiore di 10 o minore di 0 il
programma deve stampare un messaggio di errore.
• Altrimenti, deve stampare "Numero uguale" se il valore
inserito dall’utente è lo stesso generato casualmente o,
in caso contrario, deve stampare la differenza in valore
assoluto tra i due numeri.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 10

int main() {

    int n, numCas, diff;

    srand(time(NULL));

    numCas = MIN + rand()%(MAX - MIN + 1);

    printf("%d \n", numCas);

    printf("Inserisci un valore compreso tra 0 e 10: \n");
    scanf("%d", &n);


    while (MIN < n && n > MAX) {
        printf("Il valore inserito non è valido, inserisci un numero compreso fra 0 è 10. \n");
        scanf("%d", &n);
    }
    if (n == numCas){
        printf("Il numero inserito è uguale. \n");
    } else {
        diff = numCas - n;
        printf("La differenza è %d \n", diff);
    }


    return 0;
}
*/

/* Esercizio 3
Scrivere un programma che, inserito un valore numerico
intero compreso tra 1 e 7 in input, stampi il
corrispondente nome del giorno della settimana.
• Per esempio:
• 1 → "Lunedi"
• 6 → "Sabato"
• Realizzare, inoltre, un controllo sull'input utente e, se il
valore non è tra quelli ammissibili, stampare un
messaggio d'errore.
*/

/*
#include <stdio.h>
#define CASO1 1
#define CASO2 2
#define CASO3 3
#define CASO4 4
#define CASO5 5
#define CASO6 6
#define CASO7 7

int main() {

    int n;

    printf("Inserisci un valore numerico fra 1 e 7. \n");
    scanf("%d", &n);

    switch (n) {
        case CASO1:
            printf("Lunedì");
            break;
        case CASO2:
            printf("Martedì");
            break;
        case CASO3:
            printf("Mercoledi");
            break;
        case CASO4:
            printf("Giovedì");
            break;
        case CASO5:
            printf("Venerdì");
            break;
        case CASO6:
            printf("Sabato");
            break;
        case CASO7:
            printf("Domenica");
            break;
        default:
            printf("Inserimento non valido");
    }

    return 0;
}
*/

/* Esercizio 4
Scrivere un programma per calcolare se un anno è bisestile
oppure no. In particolare, il programma deve:
• Richiedere all'utente l'anno
• Verificare che l'anno sia maggiore di zero
• Nel caso in cui non lo sia, stampare un messaggio d'errore
• Diversamente, effettuare la verifica secondo il seguente
schema: un anno è bisestile se è divisibile per 400, oppure
se è divisibile per 4 ma non per 100 (Dettagli qui)
• In output, dire se l'anno è bisestile oppure no.
*/

/*
#include <stdio.h>
#define DIVISORE_1 400
#define DIVISORE_2 100
#define DIVISORE_3 4

int main () {

    int anno;

    printf("Inserisci l'anno: \n");
    scanf("%d", &anno);

    while (anno <= 0) {
        printf("L'anno inserito non è valido inserire un anno maggiore di zero. \n");
        scanf("%d", &anno);
    }
    if (anno % DIVISORE_1 == 0) {
        printf("L'anno è bisestile");
    } else if (anno % DIVISORE_3 == 0 && anno % DIVISORE_2 != 0) {
        printf("L'anno è bisestile metodo 2");
    } else {
        printf("L'anno non è bisestile");
    }

    return 0;
}
*/

/* Esercizio 5
Scrivere un programma per la gestione dei biglietti del CTM.
• Si supponga che, rispetto alla tariffa piena, i pensionati
usufruiscano di uno sconto del 10%, gli studenti del 15% e
infine i disoccupati del 25%.
• Codificare lo stato dell'utente con una variabile char:
• pensionati con una 'P',
• gli studenti con una 'S' e
• i disoccupati con una 'D'.
• Scrivere un programma che, richiesto il costo di un biglietto e
l’eventuale condizione dell’utente, visualizzi l’importo da
pagare.
• Suggerimento: potrebbe non servire l'if.
*/

/*
#include <stdio.h>
#define SCONTO_PEN 0.1
#define SCONTO_STUD 0.15
#define SCONTO_DISS 0.25

int main() {

    float prezzo, costoPen, costoStud, costoDiss;
    char ch;


    printf("Inserisca il costo del biglietto o della tariffa che vuole acquistare: \n");
    scanf("%f", &prezzo);

    printf("Inserisca la sua condizione: \n");
    scanf(" %c", &ch);

    switch (ch) {
        case 'P':
            costoPen = prezzo - (prezzo * SCONTO_PEN);

            printf("Il costo del biglietto è: %.2f euro \n", costoPen);
            break;
        case 'S':
            costoStud = prezzo - (prezzo * SCONTO_STUD);

            printf("Il costo del biblietto è %.2f euro \n", costoStud);
            break;
        case 'D':
            costoDiss = prezzo - (prezzo * SCONTO_DISS);
            printf("Il costo del biglietto è %.2f euro \n", costoDiss);
            break;
        default:
            printf("La condizione inserita non è valida. \n");
    }

    return 0;
}
*/

/* Esercizio 6
Scrivere un programma che chieda all'utente
l'ammontare della spesa fatta in un negozio.
• In particolare, il negoziante effettua uno sconto del 5%
per ogni spesa superiore a 120€ e del 10% per ogni
spesa superiore a 350€.
• Visualizzare in output l'importo effettivo da pagare.
• Risolvere l'esercizio in due versioni:
• con if-else
• con soli switch-case
*/

/*
#include <stdio.h>
#include <stdbool.h>
#define RANGE_1 120
#define RANGE_2 350
#define SCONTO_1 0.05
#define SCONTO_2 0.10

int main() {

    float costoSpesa, costoSconto;


    printf("Inserisci il costo della spesa totale: \n");
    scanf("%f", &costoSpesa);

    if (costoSpesa >= RANGE_1 && costoSpesa <= RANGE_2) {
        costoSconto = costoSpesa - (costoSpesa * SCONTO_1);
        printf("La spesa scontata viene %.2f \n", costoSconto);
    } else if (costoSpesa >= RANGE_2) {
        costoSconto = costoSpesa - (costoSpesa * SCONTO_2);
        printf("La spesa scontata viene %.2f \n", costoSconto);
    } else {
        printf("Non ha diritto ad alcun sconto. \n");
    }




    return 0;
}
*/


/* Esercizio 7
Scrivere un programma che riceva in input un valore
compreso tra 1 e 12, rappresentanti i mesi dell'anno, e
stampi quanti giorni ha quel mese.
NB: Nel caso in cui il mese inserito sia febbraio, chiedere se
l'anno è bisestile e gestire l'eventuale casistica in cui lo sia.
NB2: in caso di inserimento di un valore non ammissibile,
comunicare all'utente un messaggio d'errore.
*/

/*
#include <stdio.h>
#define CASO1 1
#define CASO2 2
#define CASO3 3
#define CASO4 4
#define CASO5 5
#define CASO6 6
#define CASO7 7
#define CASO8 8
#define CASO9 9
#define CASO10 10
#define CASO11 11
#define CASO12 12



int main() {

    int input;
    char ch;

    printf("Inserisci un valore compreso fra 1 e 12. \n");
    scanf("%d", &input);

    switch (input) {
        case CASO1:
            printf("Il mese è Gennaio \n");
            printf("Il mese ha 31 giorni \n");
            break;
        case CASO2:
            printf("Il mese è bisestile? Y/N \n");
            scanf(" %c", &ch);
            if (ch == 'Y') {
                printf("Il mese è bisestile quindi contiene 29 giorni \n");
            } else if (ch == 'N'){
                printf("Il mese non è bisestile \n");
            } else {
                printf("il carattere inserito non è valido \n");
                printf("Inserisci la lettera 'Y' o 'N' \n");
                scanf(" %c", &ch);
                if (ch == 'Y') {
                    printf("Il mese è bisestile quindi contiene 29 giorni \n");
                } else {
                    printf("Il mese non è bisestile quindi contiene 28 giorni \n");
                }
            }
            break;
        case CASO3:
            printf("Il mese è Marzo \n");
            printf("Il mese ha 31 giorni \n");
            break;
        case CASO4:
            printf("Il mese è Aprile \n");
            printf("Il mese ha 30 giorni \n");
            break;
        case CASO5:
            printf("Il mese è Maggio \n");
            printf("Il mese ha 31 giorni \n");
            break;
        case CASO6:
            printf("Il mese è Giugno \n");
            printf("Il mese ha 30 giorni \n");
            break;
        case CASO7:
            printf("Il mese è Luglio \n");
            printf("Il mese ha 31 giorni \n");
            break;
        case CASO8:
            printf("Il mese è Agosto \n");
            printf("Il mese ha 31 giorni \n");
            break;
        case CASO9:
            printf("Il mese è Settembre \n");
            printf("Il mese ha 30 giorni \n");
            break;
        case CASO10:
            printf("Il mese è Ottobre \n");
            printf("Il mese ha 31 giorni \n");
            break;
        case CASO11:
            printf("Il mese è Novembre \n");
            printf("Il mese ha 30 giorni \n");
            break;
        case CASO12:
            printf("Il mese è Dicembre \n");
            printf("Il mese ha 31 giorni \n");
            default:
            printf("Il valore o carattere inserito non è valido \n");
    }

    return 0;
}
*/

/* Esercizio 8
Scrivere un programma che riceva in input un carattere e
verifichi se il carattere inserito è una vocale oppure una
consonante.
NB: gestire sia la casistica minuscola che maiuscola.
NB2: fornire il messaggio "carattere non consentito" nel caso
in cui il carattere non sia una vocale.
*/

/*
#include <stdio.h>
#define CASO_1 'a'
#define CASO_2 'A'
#define CASO_3 'e'
#define CASO_4 'E'
#define CASO_5 'i'
#define CASO_6 'I'
#define CASO_7 'o'
#define CASO_8 'O'
#define CASO_9 'u'
#define CASO_10 'U'


int main() {

    char ch;

    printf("Inserisci un carattere: \n");
    scanf(" %c", &ch);


    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("Il carattere inserito è una vocale");
    } else {
        printf("Il carattere non è consentito");
    }


    switch (ch) {
        case CASO_1:
            printf("Il carattere inserito è la vocale 'a' minuscola \n");
            break;
        case CASO_2:
            printf("Il carattere inserito è la vocale 'a' maiuscola \n");
            break;
        case CASO_3:
            printf("Il carattere inserito è la vocale 'e' minuscola \n");
            break;
        case CASO_4:
            printf("Il carattere inserito è la vocale 'E' maiuscola \n");
            break;
        case CASO_5:
            printf("Il carattere inserito è la vocale 'i' minuscola \n");
            break;
        case CASO_6:
            printf("Il carattere inserito è la vocale 'I' maiuscola \n");
            break;
        case CASO_7:
            printf("Il carattere inserito è la vocale 'o' minuscola \n");
            break;
        case CASO_8:
            printf("Il carattere inserito è la vocale 'O' maiuscola \n");
            break;
        case CASO_9:
            printf("Il carattere inserito è la vocale 'u' minuscola \n");
            break;
        case CASO_10:
            printf("Il carattere inserito è la vocale 'U' maiuscola \n");
            break;
            default:
            printf("Il carattere inserito non è valido. \n");
    }

    return 0;
}
*/

/* Esercizio 9
Scrivere un programma che funzioni come calcolatrice,
chiedendo all'utente l'operazione da svolgere ( +, -, *, /, ^ ) e
due operandi.
Per ^ (elevazione a potenza) utilizzare la libreria math.h.
Il programma deve svolgere l'operazione richiesta dall'utente
e scrivere il risultato in output.
Usare lo switch-case.
*/

/*
#include <stdio.h>
#include <math.h>

#define SOMMA '+'
#define SOTTR '-'
#define MULTI '*'
#define DIV '/'
#define POT '^'

int main() {

    int op1, op2, somma, sottr, multi, div, pot;
    char ch;

    printf("Inserisci il primo operando: \n");
    scanf("%d", &op1);

    printf("Scegli l'operazione da effettuare: \n");
    scanf(" %c", &ch);

    printf("Inserisci il secondo operando: \n");
    scanf("%d", &op2);

    switch (ch) {
        case SOMMA:
            somma = op1 + op2;
            printf("Il risultato della somma dei due operatori è: %d \n", somma);
            break;
        case SOTTR:
            sottr = op1 - op2;
            printf("Il risultato della differenza dei due operatori è: %d \n", sottr);
            break;
        case MULTI:
            multi = op1 * op2;
            printf("Il risultato della moltiplicazione è: %d \n", multi);
            break;
        case DIV:
            while (op2 == 0) {
                printf("Il secondo operatore è uguale a 0, inserisci un nuovo operatore \n");
                scanf("%d", &op2);
            }
            div = op1 / op2;
            printf("Il risultato della divisione è: %d \n", div);
            break;
        case POT:
            pot = pow(op1, op2);
            printf("Il risultato della potenza è: %d \n", pot);
            break;
            default:
            printf("Operando o operatore da effettuare errato \n");
    }
    return 0;
}
*/

/* Esercizio 10
Scrivere un programma che, acquisiti tre numeri,
permetta di decidere all'utente se determinare il
maggiore, determinare il minore, calcolare la somma o
la media.
• Tale scelta dovrà avvenire inserendo uno tra i seguenti
caratteri:
• ‘M’ per il maggiore
• ‘m’ per il minore
• ’s’ per la somma,
• ‘a’ per la media.
*/

/*
#include<stdio.h>
#define OPERATORI 3

int main() {
    int num1, num2, num3, sum, med;
    char ch;

    printf("Inserisci il primo valore: \n");
    scanf("%d", &num1);

    printf("Inserisci il secondo valore: \n");
    scanf("%d", &num2);

    printf("Inserisci il terzo valore: \n");
    scanf("%d", &num3);

    printf("Inserisci l'operazione che vuoi effettuare: \n");
    scanf(" %c", &ch);

    switch (ch) {
        case 'M':
            if (num1 > num2 && num1 > num3) {
                printf("Il maggiore è: %d \n", num1);
            } else if (num2 > num1 && num2 > num3) {
                printf("Il maggiore è: %d \n", num2);
            }else {
                printf("Il maggiore è: %d \n", num3);
            }
            break;
        case 'm':
            if (num1 < num3 && num1 < num2) {
                printf("Il minore è: %d \n", num1);
            } else if (num2 < num1 && num2 < num3) {
                printf("Il minore è: %d \n", num2);
            }else {
                printf("Il minore è: %d \n", num1);
            }
            break;
        case 's':
            sum = num1 + num2 + num3;
            printf("Il valore della somma è: %d \n", sum);
            break;
        case 'a':
            med = (num1 + num2 + num3) / OPERATORI;
            printf("Il valore della media è: %d \n", med);
            break;
        default:
            printf("Carattere o simbolo inserito non valido \n");
    }
    return 0;
}
*/

/* Esercizio 11
Scrivere un programma in cui l’utente acquisisca una
variabile char precedentemente dichiarata. Il
programma deve stampare se la variabile acquisita è
una vocale oppure no.
• Risolvere l’esercizio sia con IF-ELSE che con SWITCHCASE.
*/

/*
#include <stdio.h>

#define CASO_1 'a'
#define CASO_2 'A'
#define CASO_3 'e'
#define CASO_4 'E'
#define CASO_5 'i'
#define CASO_6 'I'
#define CASO_7 'o'
#define CASO_8 'O'
#define CASO_9 'u'
#define CASO_10 'U'


int main() {

    char ch;

    printf("Inserisci una delle lettere dell'alfabeto: \n");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("Il carattere inserito è una vocale");
    } else {
        printf("Il carattere non è consentito");
    }


    switch (ch) {
        case CASO_1:
            printf("Il carattere inserito è la vocale 'a' minuscola \n");
            break;
        case CASO_2:
            printf("Il carattere inserito è la vocale 'a' maiuscola \n");
            break;
        case CASO_3:
            printf("Il carattere inserito è la vocale 'e' minuscola \n");
            break;
        case CASO_4:
            printf("Il carattere inserito è la vocale 'E' maiuscola \n");
            break;
        case CASO_5:
            printf("Il carattere inserito è la vocale 'i' minuscola \n");
            break;
        case CASO_6:
            printf("Il carattere inserito è la vocale 'I' maiuscola \n");
            break;
        case CASO_7:
            printf("Il carattere inserito è la vocale 'o' minuscola \n");
            break;
        case CASO_8:
            printf("Il carattere inserito è la vocale 'O' maiuscola \n");
            break;
        case CASO_9:
            printf("Il carattere inserito è la vocale 'u' minuscola \n");
            break;
        case CASO_10:
            printf("Il carattere inserito è la vocale 'U' maiuscola \n");
            break;
        default:
            printf("Il carattere inserito non è valido. \n");
    }



    return 0;
}
*/