/* Lezione 10 */

/* Esercizio 1
Scrivere, in linguaggio C, la definizione di tipi di dato appropriati per:
• i possibili gruppi sanguigni, distinguendo tra gruppo vero e proprio e Rh;
• la sequenza dei vostri esami all'università, tenendo conto che ogni esame ha un nome, un
docente, un voto e una data di svolgimento;
• l’insieme delle taglie di un negozio di vestiti, dalla small alla tripla extra-large.
*/

/*
#include <stdio.h>
#define DIM_S 151

//1)
typedef enum {ZERO, A, B, AB} Tipologia;
typedef enum {POSITIVO, NEGATIVO} Rh;

typedef struct {

    Tipologia gruppo;
    Rh rh;

} GruppoSanguigno;

//2)
typedef struct {

    int gg; //giorni
    int mm; //mesi
    int aaaa; //anno

} Data;

typedef struct {

    char nome[DIM_S];
    char docente[DIM_S];
    int voto;
    Data data;

} Esame;

//3)
typedef  enum {XS, S, M, L, XXL, XXXL} Taglia;

int main(void) {


    return 0;
}
*/

/* Esercizio 2
Scrivere un programma che definisca una struttura studente comprensiva delle
seguenti informazioni: nome, cognome, matricola, corso di laurea, anno di
immatricolazione e tipo di corso (triennale o magistrale).
Il programma deve svolgere le seguenti operazioni:
• Acquisire le informazioni relative a cinque studenti e memorizzarle in un array mediante
opportuna subroutine che acquisisce i dati di un singolo studente (funzione o procedura?)
• Richiedere all’utente di inserire il numero di matricola di uno studente di cui cercare le
informazioni nell’array mediante opportuna subroutine (funzione o procedura?).
• Cercare lo studente e stampare in output tutti i suoi dati se la ricerca ha prodotto risultati,
oppure indicare che non è stato trovato uno studente con tale matricola (realizzare due
subroutine, una per cercare lo studente e una per, eventualmente, stampare uno studente
fornito come parametro).
*/

/*
#include <stdio.h>
#define DIM_S 151
#define STUDENTI 2

typedef enum { TRIENNALE, MAGISTRALE } TipoCorso;

typedef struct {
    char nome[DIM_S];
    char cognome[DIM_S];
    int matricola;
    char corso[DIM_S];
    int anno;
    TipoCorso tipo;
} Studente;

Studente informazioniStudenti();

void stampaStudente(Studente studente);

void ricercaStudente(int dim, Studente studente[dim]);

int main() {
    Studente studenti[STUDENTI];
    int i;

    for (i = 0; i < STUDENTI; i++) {
        printf("Studente n. %d\n", i + 1);
        studenti[i] = informazioniStudenti();
    }

    //stampaStudente(studenti[0]);

    ricercaStudente(STUDENTI, studenti);


    return 0;
}

Studente informazioniStudenti() {
    Studente studente;

    printf("Inserisci il nome: \n");
    scanf(" %s", studente.nome);
    printf("Inserisci il cognome: \n");
    scanf(" %s", studente.cognome);
    printf("Inserisci la matricola: \n");
    scanf("%d", &studente.matricola);
    printf("Inserisci il corso: \n");
    scanf(" %s", studente.corso);
    printf("Inserisci l'anno: \n");
    scanf("%d", &studente.anno);
    printf("Inserisci il tipo di corso:\n"
        "0 - Triennale\n"
        "1- Magistrale\n");
    scanf("%d", &studente.tipo);

    return studente;
}

void stampaStudente(Studente studente) {
    printf("Nome: %s\n", studente.nome);
    printf("Cognome: %s\n", studente.cognome);
    printf("Matricola: %d\n", studente.matricola);
    printf("Corso di laurea: %s\n", studente.corso);
    printf("Anno di immatricolazione: %d\n", studente.anno);

    switch (studente.tipo) {
        case TRIENNALE:
            printf("Triennale");
            break;

        case MAGISTRALE:
            printf("Magistrale");
            break;

        default:
            printf("Numero inserito non valido");
    }
}

void ricercaStudente(int dim, Studente studente[dim]) {
    int i, trovato = 0;
    int matricola;


    printf("Inserisci la matricola:\n");
    scanf(" %d", &matricola);

    for (i = 0; i <= dim; i++) {
        if (studente[i].matricola == matricola) {
            stampaStudente(studente[i]);
            trovato = 1;
        } else {
            trovato = 0;
        }
    }

    if (trovato == 0) {
        printf("Studente non trovato.\n");
    }

}
*/

/* Esercizio 3
Scrivere un programma in cui viene definita una struttura NumeroComplesso, atta a contenere due variabili
reali:
• parte reale;
• parte immaginaria.
• Il programma deve dichiarare una variabile di tipo NumeroComplesso, acquisire in input dall'utente le due parti
del numero, effettuare il calcolo del modulo del numero e stampare le due parti del numero e il modulo calcolato.
NB: dato un numero complesso z, la sua parte reale x e immaginaria y, il modulo si calcola come: |z| = √ (x^2 + y^2)
*/

/*
#include <math.h>
#include <stdio.h>

typedef struct {
    float numReale;
    float numImmaginario;
} NumeroComplesso;

float calcoloModulo();

int main() {

    calcoloModulo();

    return 0;
}
float calcoloModulo() {

    float a, b, z;
    NumeroComplesso c;

    printf("Inserisci la parte reale:\n");
    scanf("%f", &a);

    c.numReale = a;

    printf("Inserisci la parte immaginaria:\n");
    scanf("%f", &b);

    c.numImmaginario = b;

    z = sqrt(pow(c.numReale,2) + pow(c.numImmaginario,2));

    printf("Parte reale: %f\nParte Immaginaria: %f\nModulo: %f\n", c.numReale, c.numImmaginario, z);

    return z;
}
*/

/* Esercizio 4
Definire una enumerazione che rappresenti il gruppo sanguigno GS (A, B, ZERO, AB).
Definire poi una struttura che contenga i dati di una Persona (età, peso in kg, altezza in cm) e
successivamente una struttura Donatore che contenga un campo Persona, un campo enumerazione GS, un
intero, rappresentante il numero di giorni trascorsi dall'ultima donazione, e un intero rappresentante il codice
identificativo del donatore di sangue. Realizzare un programma in cui viene dichiarato un array di donatori di
lunghezza a piacere e, dopo aver inserito i dati di ogni donatore, il programma deve stabilire se ognuno di essi
può donare il sangue. In particolare:
• Se il peso è inferiore a 50 kg, non è possibile
• Se l'ultima donazione è stata fatta prima di 90 giorni, non è possibile.
• Se l'età è inferiore a 18 anni o maggiore di 65, non è possibile.
• È possibile in tutti gli altri casi.
• Stampare, come output, tutti i dati dei pazienti che possono donare il sangue, precisando il perché è possibile
*/
/*
// spazio librerie
#include <stdio.h>
#include <stdlib.h>

//spazio per macro
#define NUM_MAX_DON 2 //numero massimo donatori inseribili
#define PESOMIN 50.00 // peso minimo necessario per donare
#define GIORNIMIN 90 // minimo di giorni che devono passare prima di poter effettuare una donazione
#define ETAMIN 18 // minima eta per effettuare una donazione
#define ETAMAX 65 // massima eta per effettuare una donazione


typedef enum { A = 1, B, ZERO, AB } GruppoSanguigno; //enumerazione per gruppo sanguigno
typedef enum { REGISTRA = 1, VERIFICA, STAMPA, TERMINA = 0 } sceltaMenu; //enumerazione per menu scelta

//definizione struttura Persona per memorizzare informazioni relative a una persona
typedef struct {
    int eta;
    float peso;
    int altezza;
} Persona;

//definizione struttura Donatore per memorizzare informazioni relative a un donatore
typedef struct {
    Persona person;
    GruppoSanguigno gruppoSanguigno;
    int giorniUltimaDonazione;
    int codiceID;
} Donatore;

//spazio dedicato alla chiamata di funzione
void stampaMenu();

int acquisizioneScelta();

int acquisizioneDati(int indiceDonatoriInseriti, int dim, Donatore donator[dim]); //acquisisce i dati del donatore
int ricerca(int indiceDonatoriInseriti, int dim, Donatore donatore[dim]);

void verifica(int trovato, int indiceDonatore, int dim, Donatore donator[dim], float pesoMin, int giornoMin, int etaMin,
              int etaMax); //verifica se tutti i campi per la donazione sono soddisfatti
void stampaRegistro(int indiceDonatoriInseriti, int dim, Donatore donatore[dim]);

int main() {
    Donatore arrayDonatori[NUM_MAX_DON];

    int sceltaUtente;
    int indiceDonatoriInseriti = 0;
    int trovato;

    do {
        stampaMenu();
        sceltaUtente = acquisizioneScelta();

        switch (sceltaUtente) {
            case REGISTRA:
                if (indiceDonatoriInseriti < NUM_MAX_DON) {
                    indiceDonatoriInseriti = acquisizioneDati(indiceDonatoriInseriti, NUM_MAX_DON, arrayDonatori);
                } else {
                    printf("Raggiunto limite massimo donatori possibili.\n");
                }
                break;
            case VERIFICA:
                trovato = ricerca(indiceDonatoriInseriti, NUM_MAX_DON, arrayDonatori);
                verifica(trovato, indiceDonatoriInseriti, NUM_MAX_DON, arrayDonatori, PESOMIN, GIORNIMIN, ETAMIN,
                         ETAMAX);
                break;
            case STAMPA:
                stampaRegistro(indiceDonatoriInseriti, NUM_MAX_DON, arrayDonatori);
                break;
            case TERMINA:
                printf("Termine del programma.");
                break;
            default:
                printf("Scelta inserita non valida.\n");
        }
    } while (sceltaUtente != TERMINA);


    return EXIT_SUCCESS;
}

void stampaMenu() {
    printf("\nMenu"
        "\n1) Registra un nuovo donatore"
        "\n2) Verifica compatibilità donatore"
        "\n3) Stampa dati donatore"
        "\n0) Termina il programma");
}

int acquisizioneScelta() {
    int scelta;

    printf("\nInserisci la scelta che vuoi effettuare:\n");
    scanf("%d", &scelta);

    return scelta;
}

int acquisizioneDati(int indiceDonatoriInseriti, int dim, Donatore donator[dim]) {
    printf("Inserisci l'età della persona: \n");
    scanf("%d", &donator[indiceDonatoriInseriti].person.eta);

    printf("Inserisci il peso della persona: \n");
    scanf("%f", &donator[indiceDonatoriInseriti].person.peso);

    printf("Inserisci l'altezza della persona: \n");
    scanf("%d", &donator[indiceDonatoriInseriti].person.altezza);

    do {
        printf("Inserisci il tuo gruppo sanguigno:"
            "\n1) A"
            "\n2) B"
            "\n3) ZERO"
            "\n4) AB\n");
        scanf("%d", &donator[indiceDonatoriInseriti].gruppoSanguigno);
    } while (donator[indiceDonatoriInseriti].gruppoSanguigno < 1 || donator[indiceDonatoriInseriti].gruppoSanguigno > 4)
    ;

    printf("Inserisci i giorni passati dall'ultima donazione: \n");
    scanf("%d", &donator[indiceDonatoriInseriti].giorniUltimaDonazione);

    printf("Inserisci il codiceID:");
    scanf("%d", &donator[indiceDonatoriInseriti].codiceID);

    indiceDonatoriInseriti++;

    return indiceDonatoriInseriti;
}

int ricerca(int indiceDonatoriInseriti, int dim, Donatore donatore[dim]) {
    int i;
    int trovato = 0, codiceVerifica;

    printf("Inserisci il codiceID del donatore:");
    scanf("%d", &codiceVerifica);

    for (i = 0; i < indiceDonatoriInseriti && !trovato; i++) {
        if (donatore[i].codiceID == codiceVerifica) {
            trovato = 1;
        }
    }

    return trovato;
}

void verifica(int trovato, int indiceDonatore, int dim, Donatore donator[dim], float pesoMin, int giornoMin, int etaMin,
              int etaMax) {

    if (trovato == 1) {

        if (donator[indiceDonatore].person.peso < pesoMin || donator[indiceDonatore].giorniUltimaDonazione < giornoMin ||
            donator[indiceDonatore].person.eta < etaMin || donator[indiceDonatore].person.eta > etaMax) {
            printf("Il donatore non può effettuare la donazione: \n");
            if (donator[indiceDonatore].person.peso < pesoMin) {
                printf("peso inferiore a 50kg\n");
            }
            if (donator[indiceDonatore].giorniUltimaDonazione < giornoMin) {
                printf("sono passati meno di 90 giorni dall'ultima donazione\n");
            }
            if (donator[indiceDonatore].person.eta < etaMin) {
                printf("l'età del donatore %d è inferiore all'età minima consentita\n", donator[indiceDonatore].person.eta);
            }
            if (donator[indiceDonatore].person.eta > etaMax) {
                printf("l'età del donatore inserita è maggiore dell'età consentita\n");
            }
            }

        if (donator[indiceDonatore].person.peso > pesoMin && donator[indiceDonatore].giorniUltimaDonazione > giornoMin &&
            donator[indiceDonatore].person.eta > etaMin && donator[indiceDonatore].person.eta < etaMax) {
            printf("Il donatore può effettuare la donazione poiché tutti i parametri soddisfano le richieste:"
                   "\nIl peso del donatore (codiceID: %d) %.2f è maggiore rispetto ai %.2f richiesti"
                   "\nSon passati %d giorni più dei %d richiesti"
                   "\nIl donatore ha %d più dell'età %d minima richiesta e meno di quella massima %d",
                   donator[indiceDonatore].codiceID, donator[indiceDonatore].person.peso, pesoMin,
                   donator[indiceDonatore].giorniUltimaDonazione,
                   giornoMin, donator[indiceDonatore].person.eta, etaMin, etaMax);
            }
    } else {
        printf("CodiceID non in archivio.\n");
    }
}

void stampaRegistro(int indiceDonatoriInseriti, int dim, Donatore donatore[dim]) {
    int i;

    for (i = 0; i < indiceDonatoriInseriti; i++) {
        printf("Donatore num. %d\n", indiceDonatoriInseriti);
        printf("Età: %d\n", donatore[i].person.eta);
        printf("Peso: %.2f\n", donatore[i].person.peso);
        printf("Altezza: %d\n", donatore[i].person.altezza);
        printf("Gruppo sanguigno: %d\n", donatore[i].gruppoSanguigno);
        printf("Giorni passati da ultima donazione: %d\n", donatore[i].giorniUltimaDonazione);
        printf("CodiceID: %d", donatore[i].codiceID);
    }
}
*/

/* Esercizio 5
Risolvere il seguente esercizio, composto dai seguenti sotto esercizi:
1. Scrivere un'enumerazione GiornoSettimana che rappresenti i 7 giorni della settimana
(da LUN a DOM) e un'enumerazione Mese che rappresenti i 12 mesi dell'anno (da GEN
a DIC)

2. Scrivere un tipo di dato struttura Data composto dai seguenti quattro campi: giorno,
giornoSettimana, mese e anno. Giorno è di tipo intero, giornoSettimana è di tipo
enumerazione GiornoSettimana, mese è di tipo enumerazione Mese, mentre anno è un
intero.

3. Scrivere un tipo di dato struttura Persona, costituito dai campi nome, cognome, luogo di
nascita, data di nascita. I primi tre campi sono stringhe, mentre l'ultimo è di tipo Data.

4. Scrivere una funzione acquisisciPersona, che dichiari una struttura Persona e richieda
in input all'utente i dati d’interesse. Effettuare i controlli ritenuti opportuni per acquisire
date valide. Tale funzione deve restituire la struttura appena acquisita.

5. Scrivere una procedura stampaDatiPersona che, ricevuta una Persona come
parametro, stampi tutti i suoi dati d’interesse.

6. Nel main, dichiarare una struttura Persona, a cui assegnare l'output di
acquisisciPersona; dopodiché stampare i suoi dati di interesse mediante la procedura
stampaDatiPersona.
*/
/*
//librerie
#include <stdio.h>
#include <stdlib.h>

//macro
#define DIM 31

// Esercizio 1
typedef enum { LUN = 1, MAR, MER, GIOV, VEN, SAB, DOM } Giorno; // enumerazione per il giorno della settimana
typedef enum { GEN = 1, FEB, MARZO, APRILE, MAGGIO, GIUGNO, LUGLIO, AGO, SEPT, OCT, NOV, DIC } Mese;

//enumerazione per il mese dell'anno

// Esercizio 2
//struttura contenente campi che definiscono una data
typedef struct {
    int giorno;
    Giorno giornoSettimana;
    Mese meseAnno;
    int anno;
} Data;

// Esercizio 3
//struttura contenente campi che definisco una persona
typedef struct {
    char nome[DIM];
    char cognome[DIM];
    char luogoNascita[DIM];
    Data dataNascita;
} Persona;

//chiamate funzioni
Persona acquisisciPersona();

void stampaDatiPersona(Persona persona);

//Esercizio 5
int main() {
    Persona persona;

    persona = acquisisciPersona();

    stampaDatiPersona(persona);

    return EXIT_SUCCESS;
}
// Esercizio 3
Persona acquisisciPersona() {

    Persona persona; //variabile di tipo Persona

    //acquisisco i vari campi della struttura
    printf("Inserisci il nome:\n");
    scanf(" %30[^\n]s", persona.nome);

    printf("Inserisci il cognome:\n");
    scanf(" %30[^\n]s", persona.cognome);

    printf("Inserisci il luogo di nascita:\n");
    scanf(" %30[^\n]s", persona.luogoNascita);

    printf("Inserisci il giorno in cui sei nato:\n");
    scanf("%d", &persona.dataNascita.giorno);

    // ciclo do while per controllo su inserimento giorno della settimana
    do {
        printf("Inserisci il giorno della settimana in cui sei nato:"
            "\n1) Lunedi"
            "\n2) Martedi"
            "\n3) Mercoledi"
            "\n4) Giovedi"
            "\n5) Venerdi"
            "\n6) Sabato"
            "\n7) Domenica\n");
        scanf("%d", &persona.dataNascita.giornoSettimana);
    } while (persona.dataNascita.giorno < 1 || persona.dataNascita.giorno > 7);

    //ciclo do while per controllo su inserimento mese
    do {
        printf("Inserisci il mese dell'anno:"
            "\n1) Gennaio"
            "\n2) Febbraio"
            "\n3) Marzo"
            "\n4) Aprile"
            "\n5) Maggio"
            "\n6) Giugno"
            "\n7) Lugllio"
            "\n8) Agosto"
            "\n9) Settembre"
            "\n10) Ottobre"
            "\n11) Novembre"
            "\n12) Dicembre\n");
        scanf("%d", &persona.dataNascita.meseAnno);
    } while (persona.dataNascita.meseAnno < 1 || persona.dataNascita.meseAnno > 12);

    printf("Inserisci l'anno di nascita:\n");
    scanf("%d", &persona.dataNascita.anno);

    return persona; //restituisco una persona di tipo Persona
}

//Esercizio 4
void stampaDatiPersona(Persona persona) {

    //stampa dei vari campi della variabile
    printf("\nNome: %s", persona.nome);
    printf("\nCognome: %s", persona.cognome);
    printf("\nLuogo di nascita: %s", persona.luogoNascita);
    printf("\nGiorno del mese: %d", persona.dataNascita.giorno);
    printf("\nGiorno della settimana: ");
    //switch case per stampare il giorno della settimana in relazione al numero inserito durante l'acquisizione precedente
    switch (persona.dataNascita.giornoSettimana) {
        case LUN:
            printf("Lunedi.\n");
            break;
        case MAR:
            printf("Martedi.\n");
            break;
        case MER:
            printf("Mercoledi.\n");
            break;
        case GIOV:
            printf("Giovedi.\n");
            break;
        case VEN:
            printf("Venerdi.\n");
            break;
        case SAB:
            printf("Sabato.\n");
            break;
        case DOM:
            printf("Domenica.\n");
            break;
        default:
            printf("Giorno inserito non valido.\n");
    }

    printf("Mese: ");
    //switch case per stampare il mese dell'anno in relazione al numero inserito durante l'acquisizione precedente
    switch (persona.dataNascita.meseAnno) {
        case GEN:
            printf("Gennaio.\n");
            break;
        case FEB:
            printf("Febbraio.\n");
            break;
        case MARZO:
            printf("Marzo.\n");
            break;
        case APRILE:
            printf("Aprile.\n");
            break;
        case MAGGIO:
            printf("Maggio.\n");
            break;
        case GIUGNO:
            printf("Giugno.\n");
            break;
        case LUGLIO:
            printf("Luglio.\n");
            break;
        case AGO:
            printf("Agosto.\n");
            break;
        case SEPT:
            printf("Settembre.\n");
            break;
        case OCT:
            printf("Ottobre.\n");
            break;
        case NOV:
            printf("Novembre.\n");
            break;
        case DIC:
            printf("Dicembre.\n");
            break;
        default:
            printf("Mese inserito non valido.\n");
    }

    printf("Anno: %d", persona.dataNascita.anno);
}
*/

/* Esercizio 6 */

/* Esercizio 6 1/3
1. Scrivere un tipo di dato struttura Data composto dai seguenti tre campi:
 • giorno (tipo intero)
 • mese (tipo enumerazione Mese con valori possibili da GEN a DIC)
 • anno (tipo intero)

2. Scrivere un tipo di dato struttura Cliente, costituito dai campi:
 • nome (stringa da 31 caratteri utili)
 • cognome (stringa da 31 caratteri utili)
 • codice fiscale (stringa da 10 caratteri utili)
 • data di check-in (di tipo Data)
 • data di check-out (di tipo Data)

3. Definire una struttura Albergo composta dai campi:
 • numeroStanzeDisponibili (tipo intero)
 • numeroClientiPresenti (tipo intero)
 • prezzo (tipo float)
 • localita’ (tipo stringa con 31 caratteri utili)
 • tipologia (tipo enumerazione con valori possibili: HOTEL, BNB, OSTELLO, AGRITURISMO )
 • clienti (array di tipo cliente con 100 posizioni utili)

 Esercizio 6 2/3
4.
 Scrivere una funzione acquisisciCliente( ), che dichiari una struttura Cliente e
 richieda in input all'utente i dati d’interesse. Effettuare i controlli ritenuti opportuni
 per acquisire i valori dei campi validi. La funzione restituisce la struttura appena
 acquisita.
5.
 Scrivere una procedura stampaCliente( ) che, ricevuto un Cliente come
 parametro, stampi tutti i suoi dati d’interesse.
6.
 Scrivere una funzione acquisisciAlbergo( ), che dichiari una struttura Albergo e
 richieda in input all'utente i dati d’interesse. Effettuare i controlli ritenuti opportuni
 per acquisire i valori dei campi validi. La funzione restituisce la struttura appena
 acquisita.
7.
 Scrivere una procedura stampaAlbergo( ) che, ricevuto un Albergo come
 parametro, stampi tutti i suoi dati d’interesse.

 Esercizio 6 3/3
8.
 Nel main, dichiarare una struttura Albergo, a cui assegnare l'output di
 acquisisciAlbergo( ); dopodiché strutturare un opportuno menù per permettere le
 seguenti operazioni:
 • Inserimento di un nuovo cliente
 • Stampa informazioni dell’albergo
BONUS:
 • Acquisire, nel main, la data corrente e controllare che il numero di clienti nella
 data corrente non ecceda il numero di stanze disponibili.
 • Automatizzare il controllo della data utilizzando la funzione time() in maniera da
 non dover inserire manualmente la data odierna
 • Permettere l’acquisizione e gestione di più alberghi (hint: usare un array di
 alberghi)
*/

//librerie
#include <stdio.h>
#include <stdlib.h>
/*
//macro
#define LEN 32
#define LEN_CF 11
#define CLIENTI_MAX 100

//spazio per strutture ed enumerazioni
typedef enum { GEN = 1, FEB, MARZO, APR, MAY, GIU, LUGLIO, AGO, SEPT, OCT, NOV, DIC } Mese;

// enumerazione per mese dell'anno
typedef enum { HOTEL = 1, BNB, OSTELLO, AGRITURISMO } Tipologia; //enumerazione per la tipologia di sosta

//enumerazione per scelta menu
typedef enum{REGISTRA_CLIENTE = 1, REGISTRA_ALBERGO, STAMPA_CLIENTE, STAMPA_ALBERGO, TERMINA = 0} menuScelta;

//struttura che definisce una data
typedef struct {
    int giorno;
    Mese mese;
    int anno;
} Data;

//struttura che definisce il tipo cliente
typedef struct {
    char nome[LEN];
    char cognome[LEN];
    char codiceFiscale[LEN_CF];
    Data checkIn;
    Data checkOut;
} Cliente;

// struttura che definisce l'albergo
typedef struct {
    int stanzeDisponibili;
    int clientiPresenti;
    float prezzo;
    char localita[LEN];
    Tipologia tipo;
    Cliente arrayClienti[CLIENTI_MAX];
} Albergo;

//chiamata funzioni
void stampaMenu();
int acquisisciScelta();

Cliente acquisisciCliente();
void stampaCliente(Cliente cliente);

Albergo acquisisciAlbergo();
void stampaAlbergo(Albergo albergo);

int main() {

    Cliente cliente; //variabile di tipo cliente
    Albergo albergo; //variabile di tipo albero
    int scelta;

    do {
        stampaMenu();
        scelta = acquisisciScelta();
        // gestione casi del menu scelta
        switch (scelta) {
            case REGISTRA_CLIENTE:
                printf("Hai scelto di inserire un nuovo cliente.\n");
                cliente = acquisisciCliente();
                break;
            case REGISTRA_ALBERGO:
                printf("Hai scelto di inserire un nuovo albergo.\n");
                albergo = acquisisciAlbergo();
                break;
            case STAMPA_CLIENTE:
                printf("Hai scelto di stampare i dati del cliente.\n");
                stampaCliente(cliente);
                break;
            case STAMPA_ALBERGO:
                printf("Hai scelto di stampare i dati dell'albergo.\n");
                stampaAlbergo(albergo);
                break;
            case TERMINA:
                printf("Il programma è terminato.");
                break;
                default:
                printf("La scelta inserita non è valida.\n");
        }

    }while (scelta != TERMINA);

    return EXIT_SUCCESS;
}

//dichiarazione funzioni

void stampaMenu() {
    //stampa menu
    printf("\nMenu scelta:"
           "\n1) Inserisci dati cliente."
           "\n2) Inserisci dati relativi albergo."
           "\n3) Stampa dati cliente."
           "\n4) Stampa dati albergo."
           "\n5) TERMINA.\n");
}

int acquisisciScelta() {
    //acquisizione scelta menu
    int scelta;

    printf("\nInserisci il numero relativo alla scelta che si vuole effettuare:\n");
    scanf("%d", &scelta);

    return scelta;
}
//acquisizione dati cliente
Cliente acquisisciCliente() {
    Cliente cliente;

    printf("Inserisci il nome:\n");
    scanf(" %31[^\n]s", cliente.nome);

    printf("Inserisci il cognome:\n");
    scanf(" %31[^\n]s", cliente.cognome);

    printf("Inserisci il codice fiscale:\n");
    scanf(" %10[^\n]s", cliente.codiceFiscale);

    printf("Inserisci la data del check-in:\n");
    printf("Giorno:\n");
    scanf("%d", &cliente.checkIn.giorno);
    printf("Mese:"
        "\n1) Gennaio."
        "\n2) Febbraio"
        "\n3) Marzo"
        "\n4) Aprile"
        "\n5) Maggio"
        "\n6) Giugno"
        "\n7) Luglio"
        "\n8) Agosto"
        "\n9) Settembre"
        "\n10) Ottobre"
        "\n11) Novembre"
        "\n12) Dicembre\n");
    scanf("%d", &cliente.checkIn.mese);
    printf("Anno:\n");
    scanf("%d", &cliente.checkIn.anno);

    printf("Inserisci la data del check-out:\n");
    printf("Giorno:\n");
    scanf("%d", &cliente.checkOut.giorno);
    printf("Mese:"
        "\n1) Gennaio."
        "\n2) Febbraio"
        "\n3) Marzo"
        "\n4) Aprile"
        "\n5) Maggio"
        "\n6) Giugno"
        "\n7) Luglio"
        "\n8) Agosto"
        "\n9) Settembre"
        "\n10) Ottobre"
        "\n11) Novembre"
        "\n12) Dicembre\n");
    scanf("%d", &cliente.checkOut.mese);
    printf("Anno:\n");
    scanf("%d", &cliente.checkOut.anno);

    return cliente;
}
//stampa dati cliente
void stampaCliente(Cliente cliente) {
    printf("Dati cliente\n");
    printf("\nNome: ");
    puts(cliente.nome);
    printf("\nCognome: ");
    puts(cliente.cognome);
    printf("\nCodice fiscale: ");
    puts(cliente.codiceFiscale);
    printf("\nData check-in: ");
    printf("%d /", cliente.checkIn.giorno);

    switch (cliente.checkIn.mese) {
        case GEN:
            printf(" 01 /");
            break;
        case FEB:
            printf(" 02 /");
            break;
        case MARZO:
            printf(" 03 /");
            break;
        case APR:
            printf(" 04 /");
            break;
        case MAY:
            printf(" 05 /");
            break;
        case GIU:
            printf(" 06 /");
            break;
        case LUGLIO:
            printf(" 07 /");
            break;
        case AGO:
            printf(" 08 /");
            break;
        case SEPT:
            printf(" 09 /");
            break;
        case OCT:
            printf(" 10 /");
            break;
        case NOV:
            printf(" 11 /");
            break;
        case DIC:
            printf(" 12 /");
            break;
        default:
            printf("Problemi nell'identificazione del mese");
    }

    printf(" %d\n", cliente.checkIn.anno);

    printf("\nData check-out: ");
    printf("%d /", cliente.checkOut.giorno);

    switch (cliente.checkOut.mese) {
        case GEN:
            printf(" 01 /");
            break;
        case FEB:
            printf(" 02 /");
            break;
        case MARZO:
            printf(" 03 /");
            break;
        case APR:
            printf(" 04 /");
            break;
        case MAY:
            printf(" 05 /");
            break;
        case GIU:
            printf(" 06 /");
            break;
        case LUGLIO:
            printf(" 07 /");
            break;
        case AGO:
            printf(" 08 /");
            break;
        case SEPT:
            printf(" 09 /");
            break;
        case OCT:
            printf(" 10 /");
            break;
        case NOV:
            printf(" 11 /");
            break;
        case DIC:
            printf(" 12 /");
            break;
        default:
            printf("Problemi nell'identificazione del mese");
    }

    printf(" %d\n", cliente.checkOut.anno);
}
//acquisizione dati albergo
Albergo acquisisciAlbergo() {
    Albergo albergo;

    printf("Inserisci il numero di stanze disponibili:\n");
    scanf("%d", &albergo.stanzeDisponibili);

    printf("Inserisci il numero di clienti presenti:\n");
    scanf("%d", &albergo.clientiPresenti);

    printf("Inserisci il prezzo della stanza:\n");
    scanf("%f", &albergo.prezzo);

    printf("Inserisci la località:\n");
    scanf(" %31[^\n]s", albergo.localita);

    do {
        printf("Inserisci la tipologia di albergo:"
               "\n1) Hotel"
               "\n2) BNB"
               "\n3) Ostello"
               "\n4) Agriturismo\n");
        scanf("%d", &albergo.tipo);
    } while (albergo.tipo < 1 || albergo.tipo > 5);

    return albergo;
}
//stampa dati albergo
void stampaAlbergo(Albergo albergo) {

    printf("Dati albergo");
    printf("Stanze disponibili: %d\n", albergo.stanzeDisponibili);
    printf("Numero clienti presenti: %d\n", albergo.clientiPresenti);
    printf("Prezzo medio stanze: %.2f\n", albergo.prezzo);
    printf("Località: ");
    puts(albergo.localita);
    printf("Tipologia: ");
    switch (albergo.tipo) {
        case HOTEL:
            printf("Hotel.\n");
            break;
        case BNB:
            printf("BnB.\n");
            break;
        case OSTELLO:
            printf("Ostello.\n");
            break;
        case AGRITURISMO:
            printf("Agriturismo.\n");
            break;
            default:
            printf("Ops something went wrong.\n");
    }
}
*/