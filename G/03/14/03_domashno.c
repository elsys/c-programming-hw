#include <stdio.h>

int main(){
    int n,k,m,i,sum;
    sum=0;
    i=0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    do{
        sum=sum+m-(i/k*(2*m/100));
        i++;
    }while(n>i);
    printf("%d", sum);
return 0;
}
