/**
 * NOME:        Giuseppe
 * COGNOME:     D'Alessandro
 * MATRICOLA:   00075
 */

/** === DESCRIZIONE ====================================================================================================
 * CONTESTO: Il Prof. Loddo ama la Sardegna e il caldo. Vuole decidere dove trascorrere le quattro stagioni dell'anno
 * in base alle temperature medie registrate in cinque città della Sardegna: Cagliari, Sassari, Oristano, Nuoro e Olbia.
 *
 * OBIETTIVO: Scrivere un'applicazione in C che registri le temperature medie stagionali per ciascuna città e poi
 * calcoli le temperature medie annuali e identifichi la città con la temperatura media più alta.
 *
 * SVOLGIMENTO: Il lavoro è diviso in quattro esercizi:
 * ESERCIZIO 1. Creare un menu per far scegliere all'utente cosa fare.
 * ESERCIZIO 2. Generare una matrice delle temperature medie stagionali per ciascuna città.
 * ESERCIZIO 3. Calcolare le temperature medie annuali per ciascuna città e identificare la città con la temperatura media più alta.
 * ESERCIZIO 4. Stampare a schermo la matrice delle temperature e le temperature medie annuali, indicando la città con la temperatura media più alta.
 *
 * CONSIGLI: Risolvere gli esercizi in ordine di numerazione, ma non rimanere bloccati su un esercizio troppo a lungo.
 * L'ordine crescente degli esercizi non rappresenta una difficoltà crescente.
 *
 * VALUTAZIONE: Gli esercizi hanno un punteggio. Se svolti tutti correttamente si raggiunge il 25. I rimanenti
 * 5 punti valutano i seguenti aspetti: stile e organizzazione del codice, uso delle best practice, commenti.
 *
 * NOTA BENE: È severamente vietato modificare il codice di base fornito.
 */

/** Inclusioni librerie docente */
#include <stdio.h>
/** Fine inclusioni librerie docente */

/** Inclusioni librerie studente */
#include <stdlib.h>
#include <time.h>
/** Fine inclusioni librerie studente */

/** Macro studente */
#define SCELTA1 1 //scelta opzione GENERARE
#define SCELTA2 2 //scelta opzione CALCOLARE
#define SCELTA3 3 //scelta opzione STAMPARE
#define SCELTA0 0 //scelta opzione TERMINA
#define CITTA 5 //numero di righe della matrice
#define STAGIONI 4 //numero di colonne
#define TEMP_MIN 500 //temperatura minima aumentata per facilitare generazione di un valore double
#define TEMP_MAX 3500 //temperatura massima aumentata per facilitare generazione di un valore double
#define TEMP_MININV (-500) //temperatura minima inverno aumentata per facilitare generazione di un valore double
#define TEMP_MAXINV 1000 //temperatura massima inverno aumentata per facilitare generazione di un valore double
#define COEFF 100.00 //coefficiente in forma float per avere cast implicito
#define ID_PRI 0 //identifica stagione della prima colonna
#define ID_EST 1 //identifica stagione della seconda colonna
#define ID_AUT 2 //identifica stagione della terza colonna
#define ID_INV 3 //identifica stagione della quarta colonna

#define ID_CAG 0 //identifica citta prima riga
#define ID_SASS 1 //identifica citta seconda riga
#define ID_ORIS 2 //identifica citta terza riga
#define ID_NUORO 3 //identifica citta quarta riga
#define ID_OLBIA 4 //identifica citta quinta riga

/** Fine macro studente */

int main(void) {
    srand(time(NULL)); //inizializzazione del seed

    /** Variabili studente */
    double temperatura[CITTA][STAGIONI]; //matrice della temperatura
    double media_citta[CITTA]; //array con medie di ogni citta
    double somma_citta = 0; //somma delle temperature di ogni citta
    int scelta; // gestisce i casi
    int citta_max_media = 0;
    int indice_citta = 0;
    int i, j;
    i = 0;
    j = 0;
    /** Fine variabili studente */

    /** === ESERCIZIO 1 (MENU) ================================================================================
     * Realizzare un menu che, ciclicamente, permetta di scegliere tra le seguenti opzioni:
     * TASTO 1) GENERARE (ESERCIZIO 2);
     * TASTO 2) CALCOLARE (ESERCIZIO 3);
     * TASTO 3) STAMPARE (ESERCIZIO 4);
     * TASTO 0) TERMINARE.
     */
    do {
        //menu' scelta
        printf("\n");
        printf("\nDate le seguenti opzioni:\n");
        printf("1) GENERARE\n2) CALCOLARE\n3) STAMPARE\n0) TERMINARE\n");
        printf("Scegli quale effettuare:\n");
        scanf("%d", &scelta);

        switch (scelta) {
            /* === ESERCIZIO 2 (GENERAZIONE) ================================================================================
             * Una matrice double 5x4 rappresenta le temperature medie registrate in quattro citta' (Cagliari, Sassari, Oristano,
             * Nuoro, Olbia), durante le quattro stagioni (Primavera, Estate, Autunno, Inverno).
             * Generare la matrice considerando che le temperature devono essere generate casualmente come numeri double con una
             * precisione di una cifra decimale e devono essere compresi tra 5 e 35 gradi Celsius, a eccezione dell'inverno,
             * per il quale le temperature devono essere comprese tra -5 e 10 gradi Celsius.
             *
             * ESEMPIO DI MATRICE GENERATA:
             * (Ogni riga rappresenta una citta', ogni colonna una stagione)
             *			  PRI   EST   AUT    INV
             * Cagliari   15.5  28.4  22.1   8.3
             * Sassari    14.2  27.5  21.3   7.9
             * Oristano   16.0  29.1  23.0   6.5
             * Nuoro      13.8  26.7  20.4   5.2
             * Olbia      15.1  28.0  22.5   7.0

             */
            case SCELTA1: //inizio esercizio 2

                printf("Generazione della matrice...\n");
                // Generazione matrice
                for (i = 0; i < CITTA; i++) {
                    //scorro le righe che rappresentano le citta'
                    for (j = 0; j < STAGIONI; j++) {
                        //scorro le colonne che rappresentano le stagioni
                        if (j == ID_INV) {
                            //temperatura caso in cui la stagione è l'inverno
                            temperatura[i][j] = (TEMP_MININV + rand() % (TEMP_MAXINV - TEMP_MININV + 1)) / COEFF;
                        } else {
                            //temperatura nelle altre stagioni
                            temperatura[i][j] = (TEMP_MIN + rand() % (TEMP_MAX - TEMP_MIN + 1)) / COEFF;
                        }
                    }
                }
                break; //fine esercizio 2

                /*=== ESERCIZIO 3 (STATISTICHE) ================================================================================
                 * Un array double di 5 elementi rappresenta la temperatura media di ogni città durante l'anno.
                 * Una variabile int rappresenta l'indice della città con la temperatura media più alta nell'anno.
                 * Calcolare l'array e la variabile richiesti, sfruttando la matrice delle temperature generata nell'esercizio 2.
                 * Se due o più città hanno le stesse temperature medie più alte, considerare la prima incontrata.
                 *
                 * ESEMPIO DI ARRAY CALCOLATO:
                 * (Ogni elemento rappresenta la temperatura media di una citta')
                 * 18.6 17.7 18.7 16.5 18.2
                 */
            case SCELTA2: //inizio esercizio 3

                printf("Effettuando calcoli sulla matrice...\n");

                /* Per trovare la media di ogni citta, il for esterno scorre le righe che identificano le citta,
                 * quello interno le stagioni. Nel ciclo interno faccio la somma delle temperature e ne calcolo la media
                 * Una volta calcolata la media prima di finire il ciclo for lo salvo nell'array double.
                 */

                for (i = 0; i < CITTA; i++) { //scorro le righe
                    somma_citta = 0;//ogni volta che finisce il ciclo interno resetto la variabile somma a 0
                    media_citta[i] = 0;
                    for (j = 0; j < STAGIONI; j++) { //effettuo la somma delle stagioni scorrendo le colonne
                        somma_citta += temperatura[i][j]; //calcolo la media
                    }
                    media_citta[i] = somma_citta / STAGIONI; //salvo media nell'array
                }

                /* Per trovare la città con la media piu alta pongo la variabile citta_max_media e la confronto con quelle
                 * presente nell'array. Ogni volta che la media nell'array e superiore aggiorno il max e a fine ciclo pongo
                 * indice_citta uguale ad i che rappresenta la citta con la media piu alta.
                 */

                for (i = 0; i < CITTA; i++) { //scorro righe
                    if ( media_citta[i] > citta_max_media) { //pongo la condizione per verificare quale sia maggiore
                        citta_max_media = media_citta[i]; //aggiorno il maggiore
                        indice_citta = i; //pongo indice pari ad i che identifica il la citta con la media massima
                    }
                }
                break; //fine esercizio 3


                /* === ESERCIZIO 4 (STAMPA) ================================================================================
                 * Stampare la matrice delle temperature e l'array delle temperature medie annuali per ogni città,
                 * indicando anche il nome della città con la temperatura media più alta.
                 *
                 * ESEMPIO DI OUTPUT:
                 * Stampa della matrice delle temperature:
                 * 15.5  28.4  22.1   8.3
                 * 14.2  27.5  21.3   7.9
                 * 16.0  29.1  23.0   6.5
                 * 13.8  26.7  20.4   5.2
                 * 15.1  28.0  22.5   7.0
                 *
                 * Stampa delle temperature medie annuali:
                 * 18.6  17.7  18.7  16.5  18.2
                 *
                 * Città con la temperatura media più alta: Oristano
                 */
            case SCELTA3: //inizio esercizio 4

                //stampa matrice temperatura
                printf("Stampa della matrice della temperatura.\n");
                for (i = 0; i < CITTA; i++) { //scorro righe
                    for (j = 0; j < STAGIONI; j++) { //scorro colonne
                        printf(" %5.1lf ", temperatura[i][j]); //stampo valore in corrisponde della riga e della colonna
                    }
                    printf("\n"); // fine di ogni riga vado a capo
                }

                printf("\n"); //separo le stampe

                //stampa medie citta
                printf("Stampa delle temperature medie annuali.\n");
                for (i = 0; i < CITTA; i++) { //scorro il vettore
                    printf(" %5.1lf ", media_citta[i]); //stampo il valore corrispondente alla cella
                }

                printf("\n");
                printf("\n");

                printf("La citta con la media piu alta e': ");

                switch (indice_citta) { //utilizzo dello switch per identificare a quale citta corrisponde il valore di i

                    case ID_CAG:
                        printf("Cagliari.\n");
                        break;

                    case ID_SASS:
                        printf("Sassari.\n");
                        break;

                    case ID_ORIS:
                        printf("Oristano.\n");
                        break;

                    case ID_NUORO:
                        printf("Nuoro.\n");
                        break;

                    case ID_OLBIA:
                        printf("Olbia.\n");

                    default:
                        printf("Non e stato possibile trovare la citta con la media più alta.\n");

                }

                break; //fine esercizio 4

            case SCELTA0:
                printf("Termine del programma.\n");

                break;

            default:
                printf("Scelta inserita non valida.\n");

        }

    } while (scelta != 0); //fine esercizio 1

    return 0;
}