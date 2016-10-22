#include <stdio.h>

int main() {
    float n,m,k;
    scanf("%f %f %f",&n,&m,&k);
    printf("%.f", m*( ( 100*n - k*( ((n/k)*(n/k)) - (n/k) ) )/100 ));
return 0;
}
