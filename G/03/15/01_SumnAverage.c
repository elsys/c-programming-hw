#include<stdio.h>
#include<stdlib.h>
    int main () {
    int n,m,suma,i;
    float average;
    scanf("%d", &n);
    suma=0;
    for (i=0; i<n; i++)
    {
        scanf("%d", &m);
        suma=suma+m;
    }
    average=suma/m;
    printf("\nSum: %d", suma);
    printf("\nAgv: %.2f", average);

    return 0;
    }
