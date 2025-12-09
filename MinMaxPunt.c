/*

Traccia: Inserire N numeri diversi da 0 in n array usando l'aritmetica del puntatore per muoversi nell array



SPECIFICA:

    -SINTATTICA:

        input_array(int *, int) --> void

    -SEMANTICA:

        input_array(a,n) --> modificherà come side effect l'array


    Precondizioni:

        -'a' deve puntare all indirizzo base di un array

        -'n' deve rappresentare il numero di valori da inserire nell array 'a'

    Postcondizioni:

        -L'array 'a' verrà modificato come side effect e verrà popolato con valori inseriti dall'utente

        -I valori contenuti nell'array 'a' devono essere diversi da 0

    PSEUDOCODICE:
        INIZIO input_array(a, n)
            p <- a
            q <- a + n
            MENTRE p < q FAI
                RIPETI
                    Leggi intero in *p
                    SE *p == 0 ALLORA
                        Stampa "Errore: inserire diverso da 0"
                FINCHÉ *p == 0
                p <- p + 1
            FINE MENTRE
        FINE





Traccia: Trovare il valore minimo e massimo in un array di N elementi usando l'aritmetica dei puntatori.

SPECIFICA:

    - SINTATTICA:
        get_values(int *, int, int *, int *) --> void

    - SEMANTICA:
        get_values(a, n, min, max) --> void

    Precondizioni:
        - 'a' deve puntare all'indirizzo base di un array inizializzato.
        - 'min' e 'max' devono essere indirizzi di memoria validi.

    Postcondizioni:
        - La variabile puntata da 'min' conterrà il valore più piccolo presente in 'a'.
        - La variabile puntata da 'max' conterrà il valore più grande presente in 'a'.

    PSEUDOCODICE:
        INIZIO get_values(a, n, min, max)
            p <- a           
            q <- a + n          
            
  
            *min <- *p          
            *max <- *p

            MENTRE p < q FAI
                SE *p < *min ALLORA
                    *min <- *p
                FINE SE
                
                SE *p > *max ALLORA
                    *max <- *p
                FINE SE

                p <- p + 1
            FINE MENTRE
        FINE
*/



#include <stdio.h>

void input_array(int *, int);
void get_values(int *, int, int *, int *);

int main()
{
    int v[99], dim = 0;
    int minimo, massimo;

    while((dim <= 0)||(dim > 99))
    {
        printf("Quanti elementi si vogliono inserire: ");
        scanf("%d",&dim);
    }


    input_array(v,dim);

    get_values(v, dim, &minimo, &massimo);

    printf("Il minimo è: %d\nIl massimo è: %d",minimo,massimo);
    return 0;
}


void input_array(int *a,int n)
{

    int *p = a;
    int *q = a + n;

    while(p < q)
    {
        printf("Inserire il valore a[%ld]:", (p-a) + 1);

        do
        {
            scanf("%d", p);
            if (*p == 0)
            {
                printf("Inserire solo numeri diversi da 0\n");
                printf("Inserire il valore a[%ld]:", (p-a) + 1);
            }
        }
        while(*p == 0);

        p++;
    }

}


void get_values(int *a, int n, int *min, int *max)
{
    int *p = a;
    int *q = a + n;


    *min = *a;
    *max = *a;

    while(p < q)
    {
       
        if(*p < *min)
        {
            *min = *p; 
        }

       
        if(*p > *max)
        {
            *max = *p; 
        }
        p++; 
    }
}
