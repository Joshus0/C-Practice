#include <stdio.h>

void AzzeraArray(int *, int);

int main()
{
    int k;
    int a[100];


    do
    {
        printf("Quanti elementi vuoi inserire: ");
        scanf("%d",&k);
    }
    while(k < 0 || k > 100);

    int i = 0;

    while(i != k)
    {
        printf("Inserire il valore a[%d]:", i + 1);
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;
    printf("Array Originale:\n");
    while(i != k)
    {
        printf("\na[%d]: %d", i + 1, a[i]);
        i++;
    }

    i = 0;
    AzzeraArray(a, k);
    printf("\nArray Azzerata");
    while(i != k)
    {
        printf("\na[%d]: %d", i + 1, a[i]);
        i++;
    }
}

void AzzeraArray(int *v, int dim)
{
        int *fine = v + dim;

    while(v < fine)
    {
        *v = 0;
        v++;
    }
}
