#include <stdio.h>


int SommCifre(int, int);

int main()
{
    int n1, n2, v;

    do
    {
        printf("Inserisci il primo numero (positivo e maggiore di 1000): ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero (positivo e maggiore di 1000): ");
        scanf("%d", &n2);
    }
    while((n1 < 1000) || (n2 < 1000));
    
    v = SommCifre(n1, n2);

    if (v == 0)
    {
        printf("\nLa terza cifra di %d e' UGUALE a quella di %d\n", n1, n2);
    }
    else if(v == 1)
    {
        printf("\nLa terza cifra di %d e' MAGGIORE di quella di %d\n", n1, n2);
    }
    else // Caso v == -1
    {
        printf("\nLa terza cifra di %d e' MINORE di quella di %d\n", n1, n2);
    }

    return 0;
}

int SommCifre(int num1, int num2)
{

    // Calcolo terza cifra primo numero
        num1 %= 1000;
        num1 /= 100; 

    // Calcolo terza cifra secondo numero
        num2 %= 1000;
        num2 /= 100; 

    // Logica di confronto
    if (num1 == num2)
    {
        return 0;
    }
    else if (num1 > num2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}