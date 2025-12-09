#include <stdio.h>

/* --- PROTOTIPO DELLA FUNZIONE DA IMPLEMENTARE --- */
// (Come da Lezione 9, un prototipo è necessario se la funzione è definita dopo il main) [cite: 4781-4784]
int trova_indice(int a[], int n, int valore_da_cercare);

/*
    Progettazione: 

    Sintattica: trova_indice(int,int,int) --> int

    Semantica: trova_indice(a[],n,valore_da_cercare) --> i

    Precondizioni: 

*/


/* --- MAIN DI TEST (NON MODIFICARE) --- */
int main(void) {
    
    int dati[] = {10, 5, 42, 7, 19, 22, 5, 8};
    
    // Calcoliamo la dimensione dell'array [cite: 3894]
    int n = sizeof(dati) / sizeof(dati[0]);
    
    int valore1 = 42;
    int valore2 = 99;
    
    // --- Test Caso 1: Valore presente ---
    int indice1 = trova_indice(dati, n, valore1);
    
    if (indice1 != -1) {
        printf("Test 1: Il valore %d e' stato trovato all'indice %d\n", valore1, indice1);
    } else {
        printf("Test 1: Il valore %d non e' stato trovato.\n", valore1);
    }
    
    // --- Test Caso 2: Valore non presente ---
    int indice2 = trova_indice(dati, n, valore2);
    
    if (indice2 != -1) {
        printf("Test 2: Il valore %d e' stato trovato all'indice %d\n", valore2, indice2);
    } else {
        printf("Test 2: Il valore %d non e' stato trovato.\n", valore2);
    }
    
    return 0;
}

/* --- INSERISCI QUI LA TUA IMPLEMENTAZIONE --- */
int trova_indice(int a[], int n, int valore_da_cercare)
{
    int i = -1,j = 0;

    while(j < n )
    {
        if (a[j] == valore_da_cercare)
        {
            i = j;
            return i;
        }
        j++;
    }

    return i;
}