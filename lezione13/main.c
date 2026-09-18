/* Lezione 13 */

/* Esercizio 1
Scrivere una funzione ricorsiva che sommi i numeri da 0 a n (passato in input);
*/

/*
#include <stdio.h>
#include <stdlib.h>

int somma(int n);

int main(void) {

    int numero, risultato;

    printf("Inserisci il numero: ");
    scanf("%d", &numero);

    risultato = somma(numero);

    printf("%d", risultato);

    return EXIT_SUCCESS;
}

int somma(int n) {

    // CASO BASE: SOMMO se N > 0
    // CASO RICORSIVO: se N > 0 FACCIO N + SOMMA(N - 1)

    if (n <= 0) {
        return n;
    } else {
        return n + somma(n - 1);
    }
}
*/

/* Esercizio 2
Scrivere una funzione ricorsiva che calcoli l'n-esimo numero di Fibonacci, dove:
f(n) = f(n-1)+f(n-2)
(la serie di Fibonacci è quindi la seguente: (0) 1 1 2 3 5 8 13 21 …)
*/

/*
#include <stdio.h>
#include <stdlib.h>
int acquisizioneParametro();
int fibonacci(int num);

int main() {

    int numero;
    int result;

    numero = acquisizioneParametro();

    result = fibonacci(numero);

    printf("Result: %d", result);


    return EXIT_SUCCESS;
}

int acquisizioneParametro() {

    int num;

    printf("Inserisci un numero di cui vuoi calcolare fibonacci: ");
    scanf("%d", &num);

    return num;
}

int fibonacci(int num) {

    // caso base n <= 1
    // caso ricorsivo fibonacci( n - 1 ) + fibonacci ( n - 2 )
    if (num < 2) {
        return num;
    } else {
        return fibonacci( num - 1) + fibonacci( num - 2);
    }
}
*/


