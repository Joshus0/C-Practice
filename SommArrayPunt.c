#include <stdio.h>

int SommaElementi(int *v, int dim);

int main() {
    int numeri[] = {10, 20, 30, 40};
    int dimensione = 4; // Sappiamo che sono 4

    int totale = SommaElementi(numeri, dimensione);

    printf("La somma è: %d\n", totale); // Deve stampare 100
    return 0;
}

int SommaElementi(int *v, int dim) {
    
    int *fine = v + dim;
    int som;

    while(v < fine)
    {
        som += *v;
        v++;
    }

    return som;
}