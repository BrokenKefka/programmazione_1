/**
 * NOME:        Giuseppe
 * COGNOME:     D'Alessandro
 * MATRICOLA:   00075
 */

/** === DESCRIZIONE ====================================================================================================
 * CONTESTO: Il prof. Loddo vi ha ingaggiato per gestire i clienti, le relative ordinazioni e gli scontrini del nuovo
 * sushi bar del Palazzo delle Scienze. Il sushi bar offre un menu' giornaliero con una vasta scelta di piatti,
 * suddivisi in diverse tipologie. Ogni cliente puo' ordinare uno o piu' piatti, e il suo conto viene calcolato in base
 * ai piatti ordinati. Al termine delle varie ordinazioni, vogliamo stampare le informazioni relative a ciascun cliente,
 * inclusi i piatti ordinati e il conto totale.
 *
 * OBIETTIVO: Implementare un programma in C per gestire le ordinazioni dei clienti del sushi bar.
 *
 * SVOLGIMENTO: Il compito consiste nella definizione di alcuni tipi di dato richiesti (ESERCIZIO 1),
 * nell'implementazione di alcune subroutine (ESERCIZI 2, 3, 4, 5), di cui sono fornite le invocazioni nel main,
 * e di ulteriori azioni richieste nel main (ESERCIZIO 6). LEGGERE ATTENTAMENTE IL TESTO DEGLI ESERCIZI.
 *
 * CONSIGLI: Risolvere gli esercizi in ordine di numerazione, ma non rimanere bloccati su un esercizio troppo a lungo.
 * L'ordine crescente degli esercizi non rappresenta una difficoltà crescente.
 *
 * VALUTAZIONE: Gli esercizi hanno un punteggio. Se svolti tutti correttamente si raggiunge il 25. I rimanenti
 * 5 punti valutano i seguenti aspetti: stile e organizzazione del codice, uso delle best practice, commenti.
 *
 * NOTA BENE: È severamente vietato modificare il codice fornito.
 * Rispettare, inoltre, i campi richiesti per le strutture e i valori possibili per l'enumerazione.
 * È consentito creare ulteriori subroutine se ritenuto necessario.
 */

/** Inclusioni librerie docente */
#include <stdio.h>
/** Fine inclusioni librerie docente */

/** Inclusioni librerie studente */
#include <stdlib.h>
#include <string.h>
/** Fine inclusioni librerie studente */

/** Macro docente */
#define N_PIATTI 12                 // Dimensione menu
/** Fine macro docente */

/** Macro studente */
#define DIM_STRINGA 32
#define DIM_STRINGA_INPUT "31"
/** Fine macro studente */

/** === ESERCIZIO 1 (Definizioni) [5pt] ================================================================================
 * a) definire un'enumerazione TipologiaSushi, che puo' assumere i seguenti valori: HOSOMAKI, FUTOMAKI, URAMAKI,
 * GUNKAN, TEMAKI, NIGIRI, SASHIMI.
 * b) definire una struttura Piatto, con campi tipologia (enumerazione TipologiaSushi),
 * nome (stringa con 31 caratteri utili), prezzo (float).
 * c) definire una struttura Cliente, con campi nome (stringa con 31 caratteri utili),
 * conto (float che rappresenta l'ammontare speso in base ai piatti che scegliera'),
 * piattiOrdinati (array dinamico di tipo Piatto, rappresentante i piatti ordinati), e
 * numeroPiattiOrdinati (intero che rappresenta il numero di piatti ordinati).
 * */

typedef enum { HOSOMAKI, FUTOMAKI, URAMAKI, GUNKAN, TEMAKI, NIGIRI, SASHIMI } TipologiaSushi;

typedef struct {
    TipologiaSushi tipologia;
    char nome[DIM_STRINGA];
    float prezzo;
} Piatto;

typedef struct {
    char nome[DIM_STRINGA];
    float conto;
    Piatto *piattiOrdinati;
    int numeroPiattiOrdinati;
} Cliente;

/** Prototipi subroutine studente */
Cliente *creaClienti(int numClienti);

void acquisisciCliente(Cliente *puntatoreCliente);

void effettuaOrdinazione(Cliente *cliente, int numPiattiMenu, Piatto menu[numPiattiMenu]);

void stampaMenu(int numPiatti, Piatto menu[numPiatti]);

void stampaCliente(Cliente cliente);

void checkPuntatore(void *puntatore);

/** Fine prototipi subroutine studente */

int main() {
    /* Il seguente array contiene il menu' del giorno offerto con i piatti ordinabili dai tavoli */
    Piatto menuDelGiorno[N_PIATTI] = {
        {HOSOMAKI, "Salmone e Philadelphia", 4.10},
        {HOSOMAKI, "Tonno e Avocado", 6.20},
        {FUTOMAKI, "Avocado e philadelphia", 8.10},
        {URAMAKI, "California", 7.30},
        {URAMAKI, "Dragon Roll", 9.50},
        {GUNKAN, "Tonno e salsa piccante", 4.45},
        {GUNKAN, "Wakame", 2.85},
        {TEMAKI, "Salmone e Cetriolo", 5.50},
        {NIGIRI, "Ebi", 2.80},
        {NIGIRI, "Salmone", 3.50},
        {NIGIRI, "Tonno", 3.80},
        {SASHIMI, "Misto Sashimi", 14.45},
    };

    Cliente *clienti = NULL; // Questo puntatore verra' usato per la gestione dei clienti
    int numClienti = 0, i = 0;

    // Acquisizione del numero di clienti
    printf("\nInserisci il numero di clienti: \n");
    do {
        scanf("%d", &numClienti);
    } while (numClienti <= 0);

    // Allocazione dell'array di clienti tramite subroutine dell'ESERCIZIO 2
    clienti = creaClienti(numClienti);

    // Gestione di clienti, ordinazioni e stampe (ESERCIZI 3, 4, 5)
    for (i = 0; i < numClienti; i++) {
        // Acquisizione dei dati del cliente
        acquisisciCliente(&clienti[i]);

        // Simulazione dell'ordinazione
        effettuaOrdinazione(&clienti[i], N_PIATTI, menuDelGiorno);

        // Informazioni cliente
        stampaCliente(clienti[i]);
    }

    /** === ESERCIZIO 6 (Liberazione della memoria) [3pt] ==============================================================
     * Liberare la memoria allocata dinamicamente. */

    free(clienti);
    return EXIT_SUCCESS;
}


/** === ESERCIZIO 2 (Creazione di array dinamici) [3pt] ================================================================
 * Scrivere una subroutine creaClienti che, ricevuto un valore intero n corrispondente al numero di clienti,
 * allochi dinamicamente un array di n elementi di tipo Cliente, e lo restituisca. */
//Effettuiamo la allocazione dinamica di un array tramite malloc o realloc nel caso di una seconda allocazione
//Ricordiamoci che è sempre un puntatore a ricevere l'allocazione di una memoria dinamica

Cliente *creaClienti(int numClienti) {
    // passiamo il numero dei clienti come parametro

    Cliente *clienti = NULL; //creiamo una variabile puntatore di tipo Cliente e la inizializziamo a NULL

    //allochiamo l'array dinamico tramite malloc di sizeof pari al numero di clienti, facendo numero di clienti
    //per la sizeof in bytes della struttura di tipo Cliente
    clienti = (Cliente *) malloc((numClienti) * sizeof(Cliente));

    checkPuntatore(clienti); //verifica corretta allocazione di memoria

    return clienti;
}

/** Fine codice studente */


/** === ESERCIZIO 3 (Acquisizione dati) [3pt] ==========================================================================
 * Scrivere una subroutine acquisisciCliente che, ricevuto un puntatore a Cliente, permetta di acquisire da tastiera
 * il campo nome del cliente, assegnandolo al campo appropriato e inizializzi in modo opportuno gli altri campi della struttura.
 * Effettuare i controlli ritenuti necessari. */

void acquisisciCliente(Cliente *puntatoreCliente) {
    printf("Inserisci il nome:\n"); //chiediamo di inserire il nome

    do {
        scanf(" %" DIM_STRINGA_INPUT "[^\n]s", puntatoreCliente->nome); //acquisiamo il nome tramite scanf
    } while (strlen(&puntatoreCliente->nome) == 0);
    //ripetiamo fino a quando non viene almeno inserito almeno un carattere

    //while (getchar() != '\n'); //consumiamo il buffer per eliminare eventuali caratteri ancora presenti all'interno

    puntatoreCliente->conto = 0.0; //inizializziamo a zero il conto
    puntatoreCliente->piattiOrdinati = NULL;
    //inizializziamo a NULL il numero di piatti ordinati perchè è un array dinamico
    puntatoreCliente->numeroPiattiOrdinati = 0; //inizializziamo a zero il numero di piatti ordinati
}

/** Fine codice studente */


/** ESERCIZIO 4 (Effettuazione di un'ordinazione) [7pt] ================================================================
 * Scrivere una subroutine effettuaOrdinazione che, ricevuto un puntatore a Cliente cliente, il numero di piatti presenti nel menu,
 * un array di Piatto rappresentante il menu del giorno, permetta al cliente di effettuare un'ordinazione.
 * La subroutine deve chiedere all'utente quanti piatti vuole ordinare, allocando dinamicamente lo spazio necessario
 * per memorizzare i piatti ordinati all'interno di cliente. Per ogni piatto da ordinare, deve mostrare il menu del giorno e chiedere
 * di selezionare un piatto (tramite il numero corrispondente).
 * La subroutine deve aggiornare il conto del cliente in base ai piatti ordinati.
 */
void effettuaOrdinazione(Cliente *cliente, int numPiattiMenu, Piatto menu[numPiattiMenu]) {
    int numeroPiattiDaOrdinare = 0; //numero dei piatti che il cliente vuole ordinare inizializzato a zero
    int i = 0; //indice per il for
    int scelta = -1;
    //scelta inizializzata a -1 per ricordarci che le scelte del menu partono da 1 e non da zero quindi dobbiamo sottrarre

    // chiediamo quanti piatti si vogliono ordinare e ripetiamo l'operazione fino a quando non viene inserito un numero di piatti valido
    do {
        printf("%s, quanti piatti vuoi ordinare?\n", cliente->nome);
        //stampiamo il nome del cliente e gli chiediamo il num di piatti che vuole ordinare
        scanf("%d", &numeroPiattiDaOrdinare); //assegniamo il valore dato alla variabile numeroPiattiDaOrdinare
        if (numeroPiattiDaOrdinare <= 0) {
            //nel caso in cui il numero di piatti inserito è inferiore a zero stampiamo che la scelta non è valida
            printf("Inserire un numero di piatti valido.\n");
        }
    } while (numeroPiattiDaOrdinare <= 0); //ripetiamo ciclo fino a quando non viene soddisfatta la condizione

    cliente->piattiOrdinati = (Piatto *) malloc((numeroPiattiDaOrdinare) * sizeof(Piatto));
    //allochiamo dinamicamente l'array piattiOrdinati

    checkPuntatore(cliente->piattiOrdinati); //verifichiamo che l'allocazione sia andata a buon fine

    cliente->numeroPiattiOrdinati = numeroPiattiDaOrdinare;
    //assegnameo alla variabile numeroPiattiOrdinati il valore aggiornato del numero dei piatti che sono stati ordinati

    for (i = 0; i < numeroPiattiDaOrdinare; i++) {
        //ripetiamo il ciclo fino in base al numero di piatti ordinati

        stampaMenu(numPiattiMenu, menu); // richiamiamo la funzione della stampa del menu
        //scegliamo quali piatti ordinare e acquisiamo la scelta
        do {
            printf("Effettua la scelta inserendo il numero relativo (1 - %d):\n", numPiattiMenu);
            scanf("%d", &scelta);
        } while (scelta < 1 || scelta > numPiattiMenu); //verifica della scelta se valida o meno

        cliente->piattiOrdinati[i] = menu[scelta]; //aggiorniamo i piatti ordinati con quelli inseriti nel for

        cliente->conto += menu[scelta].prezzo; //aggiorniamo il prezzo sommando il prezzo di ogni singolo piatto
    }
}


/* Fine codice studente */


/** === ESERCIZIO 5 (Stampa cliente) [4pt] ==============================================================
 * Scrivere una subroutine stampaCliente che, ricevuto come parametro un Cliente cliente,
 * stampi a video tutte le informazioni relative a cliente, comprensive dei piatti ordinati e del conto. */
void stampaCliente(Cliente cliente) {
    int i; //variabile indice

    printf("\n --- Ordinazione per %s ---\n", cliente.nome); //stampiamo per chi è l'ordinazione
    printf("Piatti ordinati: \n");
    for (i = 0; i < cliente.numeroPiattiOrdinati; i++) { //ciclo for che stampa il nome e il prezzo di ogni piatto ordinato
        printf("%-2d) %-30s %5.2f \n", i, cliente.piattiOrdinati[i].nome, cliente.piattiOrdinati[i].prezzo);
    }
    printf("Conto: %4.2f EUR\n", cliente.conto); //stampa del contro fuori dal foro affinchè non venga ripetuto per ogni piatto
}

/** Fine codice studente */

//funzione che verifica se l'allocazione sia andata a buon fine o meno prende come parametro un puntatore
void checkPuntatore(void *puntatore) {
    if (puntatore == NULL) {
        printf("Errore impossibile allocare la memoria.\n");
        exit(EXIT_FAILURE);
    }
}

//funzione che ci permette di stampare il menu con la tipologia il nome e il relativo prezzo
void stampaMenu(int numPiatti, Piatto menu[numPiatti]) {
    int i;
    for (i = 0; i < numPiatti; i++) {
        printf("%3d) %-30s prezzo %.2f\n", i, menu[i].nome, menu[i].prezzo);
    }
}
