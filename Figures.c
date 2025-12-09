#include <stdio.h>

/* 
 * Dichiarazione della funzione cifre che prende un intero e un array
 * e restituisce il numero di cifre del numero
 */
int cifre(int, int []);

int main()
{
    /* Dichiarazione delle variabili:
     * n: numero inserito dall'utente
     * a: array che conterrà le singole cifre
     * l: lunghezza (numero di cifre)
     */
    int n, a[9],l;

    printf("Inserire un numero intero positivo: ");
    /* Continua a chiedere input finché non viene inserito un numero >= 1000 */
    do
    {
        scanf("%d", &n);
    }
    while(n < 1000);
    
    /* Chiama la funzione cifre per scomporre il numero nelle sue cifre
     * e memorizza il numero di cifre in l
     */
    l = cifre(n, a);

    /* Stampa il numero totale di cifre */
    printf("Il numero ha %d cifre\n", l);
    
    /* Inizializza il contatore per il ciclo */
    int i = 0;
    /* Stampa ogni cifra memorizzata nell'array */
    while(i < l)
    {
        printf("Array: [%d] = %d\n",i, a[i]);
        i++;
    }
}

/* 
 * Funzione che scompone un numero nelle sue singole cifre
 * Parametri:
 * - num: il numero da scomporre
 * - array: array dove verranno memorizzate le cifre
 * Ritorna:
 * - il numero di cifre trovate
 */
int cifre(int num, int array[])
{
    /* Inizializza il contatore delle cifre */
    int i = 0;
    /* Continua finché ci sono cifre da estrarre */
    while(num != 0)
    {
        /* Estrae l'ultima cifra usando l'operatore modulo
         * e la memorizza nell'array */
        array[i] = num % 10;
        /* Rimuove l'ultima cifra dal numero */
        num = num / 10;
        /* Incrementa il contatore delle cifre */
        i++;
    }

    /* Ritorna il numero totale di cifre trovate */
    return i;
}
