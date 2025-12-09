/*
    Progettazione:
    Confronto tra la somma delle cifre di due numeri interi positivi.


    Sintattica:
        
        SommCrifre(int,int) --> int

    Semantica:

        SommCrifre(num1,num2) --> un valore tra 0,1,-1

        Precondizioni: 
            num1 e num2 devono essere dei numeri positivi

        PostCondizioni: 

            Il valore di ritorno sarà:
            0 se la somma delle cifre dei due numeri è uguale, 
            1 se la somma delle cifre del primo numero e maggiore di quella del secondo,
           -1 se la somma delle cifre del primo numero e minore di quella del seocondo



    FUNZIONE SommCifre(num1, num2)
    
    // Inizializzazione variabili 
    somma1 = 0
    somma2 = 0

    // Calcolo somma cifre per il primo numero
    MENTRE num1 DIVERSO DA 0 ESEGUI
        cifra <-- num1 MODULO 10
        somma1 <-- somma1 + cifra
        num1 <-- num1 DIVISO 10  // Divisione intera
    FINE

    // Calcolo somma cifre per il secondo numero
    MENTRE num2 DIVERSO DA 0 ESEGUI
        cifra <-- num2 MODULO 10
        somma2 <-- somma2 + cifra
        num2 <-- num2 DIVISO 10  // Divisione intera
    FINE

    // Confronto dei risultati
    SE somma1 = somma2 ALLORA
        RITORNA 0
    ALTRIMENTI SE somma1 > somma2 ALLORA
        RITORNA 1
    ALTRIMENTI
        RITORNA -1
    FINE 


*/

#include <stdio.h>


int SommCifre(int, int);

int main()
{
    int n1, n2, v;

    do
    {
        printf("Inserisci il primo numero (positivo): ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero (positivo): ");
        scanf("%d", &n2);
    }
    while((n1 < 0) || (n2 < 0));
    
    v = SommCifre(n1, n2);

    if (v == 0)
    {
        printf("\nLa somma delle cifre di %d e' UGUALE a quella di %d\n", n1, n2);
    }
    else if(v == 1)
    {
        printf("\nLa somma delle cifre di %d e' MAGGIORE di quella di %d\n", n1, n2);
    }
    else // Caso v == -1
    {
        printf("\nLa somma delle cifre di %d e' MINORE di quella di %d\n", n1, n2);
    }

    return 0;
}

int SommCifre(int num1, int num2)
{
    int somm1 = 0; 
    int somm2 = 0; 

    // Calcolo somma cifre primo numero
    while(num1 != 0)
    {
        somm1 = somm1 + (num1 % 10);
        num1 = num1 / 10; 
    }

    // Calcolo somma cifre secondo numero
    while(num2 != 0)
    {
        somm2 = somm2 + (num2 % 10);
        num2 = num2 / 10; 
    }

    // Logica di confronto
    if (somm1 == somm2)
    {
        return 0;
    }
    else if (somm1 > somm2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}