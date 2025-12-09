#include <stdio.h>

// Prototipo
int MiaStrlen(char *s);

int main()
{
    char parola[100];
    
    printf("Inserisci una parola: ");
    scanf("%s", parola);

    // Chiamata alla tua funzione
    int lunghezza = MiaStrlen(parola);
    
    printf("La stringa è lunga %d caratteri.\n", lunghezza);

    return 0;
}

int MiaStrlen(char *s)
{
    char *dim = s;

    while(*s != '\0')
    {
        s++;
    }

    return s - dim;
}