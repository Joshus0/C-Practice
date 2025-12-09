#include <stdio.h>


/*
    Progettazione:

    Sintattica: calcola_media(int,int) ---> double

    Semantica: calcola_media(a[],n) --> m

    La funzione calcola la media degli elementi presenti in un array

    Precondizioni: n deve essere la dimensione del vettore a

    Postcondizioni: la funzione restituerà m come valore che conterrà la media dei valori dell array,
                    che verrà calcolata sommando tutti i valori dell array dentro la variabile double somm per poi dividerla per n



    PSEUDOCODICE:

    1)Inizializzo la variabile int i = 0
    2)Inizializzo la variabile double somm = 0;
    3)Creo un ciclo che continua se i < n
    4)Sommo a somm += a[i]
    5)Incremento i++
    6)Finito il ciclo divido somm /= n
    7)Restituisco il valore di somm
*/
/* --- PROTOTIPO DELLA FUNZIONE DA IMPLEMENTARE --- */
double calcola_media(int a[], int n);


/* --- MAIN DI TEST (NON MODIFICARE) --- */
int main(void) {
    
    // --- Test Caso 1: Array standard ---
    int voti[] = {28, 30, 25, 27, 22};
    int n_voti = sizeof(voti) / sizeof(voti[0]);
    
    double media1 = calcola_media(voti, n_voti);
    
    printf("Test 1 - Array: {28, 30, 25, 27, 22}\n");
    printf("Risultato: La media dei %d voti e': %.2f\n", n_voti, media1); // Atteso: 26.40
    

    // --- Test Caso 2: Array vuoto ---
    int voti_vuoti[] = {};
    int n_vuoto = 0;
    
    double media2 = calcola_media(voti_vuoti, n_vuoto);
    
    printf("\nTest 2 - Array: {}\n");
    printf("Risultato: La media dei %d voti e': %.2f\n", n_vuoto, media2); // Atteso: 0.00
    
    return 0;
}

/* --- INSERISCI QUI LA TUA IMPLEMENTAZIONE --- */
double calcola_media(int a[], int n)
{
    int i = 0,somm = 0;
    
    while(i < n)
    {  
        somm+= a[i];
        i++;
    }

    if (somm == 0)
    {
        return 0;
    }
    else
    {
        return somm/n;
    }
}