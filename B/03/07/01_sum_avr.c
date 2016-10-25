#include <stdio.h>

int main()

{ int n, i, sum=0, v;
float  avr;

scanf("%d", &n);

for(i=1; i<=n; i++)
 {
 scanf("%d",& v);
 sum=sum+v;

 }
avr=sum/n;

printf("Sum:%d", sum);
printf("\nAvg:%.2f", avr);
return 0;
}

