#include <stdio.h>


void max_min(int v[], int n, int *max, int *min);

int main()
{
    int a[99];
    int min, max; 
    int dim, i = 0;
      
    printf("Inserire dimensione del vettore: ");
    scanf("%d", &dim);

    // Controllo di sicurezza opzionale
    if (dim > 99) dim = 99; 

    while(i < dim)
    {
        printf("Inserire elemento %d del vettore: ", i);
        scanf("%d", &a[i]);
        i++;
    }

    // Passiamo direttamente gli indirizzi (&max, &min)
    max_min(a, dim, &max, &min);

    // 3. Stampa dei risultati (mancava nel tuo main)
    printf("\nValore Massimo: %d", max);
    printf("\nValore Minimo: %d\n", min);

    return 0;
}


void max_min(int v[], int n, int *max, int *min)
{
    int i;

    // 4. Inizializziamo i valori puntati col primo elemento dell'array
    *max = v[0]; 
    *min = v[0];

    // Ciclo dall'elemento 1 fino a n
    for (i = 1; i < n; i++) {
        // 5. Usiamo l'operatore * per confrontare e assegnare i valori puntati
        if (v[i] > *max) {
            *max = v[i];
        }
        else if (v[i] < *min) {
            *min = v[i];
        }
    }
}