/*
    Progettazione:

    Specifica
        -SINTATTICA:
            azzera_da(char *, int, int) --> void

        -SEMANTICA:
            azzera_da(NomCogn, k, d) --> void

    PRECONDIZIONI:
        1. 'NomCogn' deve essere l'indirizzo base di un array allocato in memoria.
        2. 'k' deve essere un indice valido, tale che 0 <= k < d, con d essendo il numero di caratteri inseriti.

    POSTCONDIZIONI:
        - L'array puntato da 'NomCogn' viene modificato come side-effect


    PSEUDOCODICE:

        MENTRE (k < d) ESEGUI
    
        ASSEGNA *(NomCogn + k) = 48

        k <-- k + 1
        
    FINE MENTRE

    RITORNA

FINE FUNZIONE
*/
#include <stdio.h>


void azzera_da(char *, int, int);

int main()
{
    char NomeCognome[] = "JoshuaSarnelli";
    int pos;

    int dim = sizeof(NomeCognome) / sizeof(char);
    
    do
    {
        printf("Inserire punto di partenza dell azzeramento: ");
        scanf("%d", &pos);
    }
    while(pos < 0 || pos >= dim );

    azzera_da(NomeCognome, pos, dim);
    
    int i = 0;
    printf("Array Modificato: ");
    while(i < dim)
    {
        printf("|%c", *(NomeCognome + i));
        i++;
    }
    printf("|");
    return 0;
}

void azzera_da(char *NomCogn, int k, int d)
{
    while(k < d)
    {
        *(NomCogn + k) = 48; 
        k++;
    }
    
    return;
}