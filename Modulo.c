#include <stdio.h>

/* --- PROTOTIPO DELLA FUNZIONE DA IMPLEMENTARE --- */
void azzera_negativi(int a[], int n);


/*
    Progettazione:

    Sintattica: azzera_negativi(int,int) --> void

    Semantica: azzera_negativi(a[],n)

    Precondizione: n deve rappresentare la dimensione dell array a

    Postcondizione: La funzione stamperà tutti gli elementi del vettore a dopo aver convertito tutti i valori negativi
                    a 0 moltiplicandoli per 0;


    PSEUDOCODICE:

    1)Inizilizzo int i = 0;
    2)Effetuo un ciclo che continua se i < n
    3)Verifico se a[i] < 0
    4)se è vero moltiplico il valore di a[i] *= 0
    5)Incremento i++ 

*/


/* --- MAIN DI TEST (NON MODIFICARE) --- */
int main(void) {
    
    int numeri[] = {10, -5, 42, -1, 0, 22, -8, 3};
    
    // Calcoliamo la dimensione dell'array [cite: 3048]
    int n = sizeof(numeri) / sizeof(numeri[0]);
    int i;

    // --- Stampa l'array "Prima" ---
    printf("Array 'Prima': ");
    for (i = 0; i < n; i++) {
        printf("%d ", numeri[i]);
    }
    printf("\n");
    
    // --- Chiamata alla tua funzione ---
    azzera_negativi(numeri, n);
    
    // --- Stampa l'array "Dopo" ---
    printf("Array 'Dopo':  ");
    for (i = 0; i < n; i++) {
        printf("%d ", numeri[i]);
    }
    printf("\n");
    
    return 0;
}

/* --- INSERISCI QUI LA TUA IMPLEMENTAZIONE --- */
void azzera_negativi(int a[], int n)
{
    int i = 0;

    while(i < n)
    {
        if(a[i] < 0)
        {
            a[i] *= 0;
        }

        i++;
    }
}
