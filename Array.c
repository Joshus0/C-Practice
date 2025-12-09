#include <stdio.h>

int main()
{
    int v[5] = {2,9,10,3,4};
    int i;
        for (i = 0; i < 4; i++)
        {
            v[i]=v[i]/2.0;
            printf("[%d] = %d\n", i, v[i]);
        }
        
}