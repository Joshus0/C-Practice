/*
FUNZIONE 1

1. SINTATTICA:
        leggi_caratteri(char []) ---> void

2. PROGETTAZIONE SEMANTICA:
        leggi_caratteri(v) ---> modifica di v come side effect

3. PRECONDIZIONI:
    - Nessuna.

4. POSTCONDIZIONI:
   - L'array 'v' contiene la sequenza di caratteri inseriti dall utente terminata da '\0'.

5. PSEUDOCODICE:
   INIZIO
     Inizializza k = 0
     Stampa "Inserisci stringa"
     Leggi primo carattere in 'temp'
     MENTRE 'temp' != INVIO (\n) E k < 99
       v[k] = temp
       k++
       Leggi prossimo carattere in 'temp'
     FINE MENTRE
     v[k] = '\0'  <-- FONDAMENTALE
   FINE


FUNZIONE 2

1. PROGETTAZIONE SINTATTICA:
  rimuovi_duplicati(char [],char[]) --> void

2. PROGETTAZIONE SEMANTICA:
    rimuovi_duplicati(v,dup) --> modifica di dup come side effect

3. PRECONDIZIONI:
   - Nessuna

4. POSTCONDIZIONI:
   - 'dup' contiene i caratteri di v senza duplicati, terminati da '\0'.

5. PSEUDOCODICE:
   INIZIO
     c = 0
     PER i da 0 finché v[i] != '\0'
       f = 0
       PER j da 0 a c-1
         SE v[i] == dup[j] ALLORA f = 1
       FINE
       SE f == 0 ALLORA
         dup[c] = v[i]
         c++
       FINE
     FINE 
     dup[c] = '\0'
   FINE
*/

#include <stdio.h> 

void leggi_caratteri(char []);
void rimuovi_duplicati(char[], char[]);

int main()
{
    char c[99], d[99];
    int i = 0;

    leggi_caratteri(c);

    printf("La stringa inserita: ");
   
    while(c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }

    i = 0; 

    
    rimuovi_duplicati(c, d);

    printf("\nLa stringa senza duplicati: ");
    while(d[i] != '\0')
    {
        printf("%c", d[i]);
        i++;
    }
    printf("\n");

    return 0;
}

void leggi_caratteri(char v[])
{
    int k = 0;
    char temp;

    printf("Inserisci la stringa (premi invio per terminare): ");
    
    scanf("%c", &temp);

    while(temp != '\n' && k < 98) 
    {
        v[k] = temp;
        k++;
        scanf("%c", &temp);
    }
    
    
    v[k] = '\0';
}

void rimuovi_duplicati(char v[], char dup[])
{
    int i, j, c = 0, f;

    
    for(i = 0; v[i] != '\0'; i++)
    {
        f = 0;
        for(j = 0; j < c; j++)
        {
            if(v[i] == dup[j])
            {
                f = 1;
            }
        }

        if(f == 0)
        {
            dup[c] = v[i];
            c++;
        }
    }
    dup[c] = '\0';
}