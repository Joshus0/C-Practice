#include <stdio.h>
#include <string.h>


void InvertString(char *Str);

int main()
{
    
    char strng[100]; 
    
    printf("Inserire stringa (senza spazi): ");
    
    scanf("%s", strng); 

    InvertString(strng);
    
    printf("Risultato: %s\n", strng);

    return 0;
}

void InvertString(char *Str)
{
    int dim = strlen(Str);
    char *inizio = Str;
    char *fine = Str + dim - 1;
    char temp;

    while(fine > inizio)
    {
        
        temp = *fine;
        *fine = *inizio;
        *inizio = temp;

        
        fine--;
        inizio++;
    }
}