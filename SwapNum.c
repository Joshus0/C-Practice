#include <stdio.h>


void swap(int *,int*); 

int main()
{

    int a,b;
    printf("Inserisci A:");
    scanf("%d",&a);
    printf("Inserisci B: ");
    scanf("%d",&b); 


    swap(&a, &b);


    printf("A : %d", a);
    printf("\nB : %d", b);
    return 0;
}


void swap(int *c, int *d)
{
    int temp;

    temp = *c;
    *c = *d;
    *d = temp;

}