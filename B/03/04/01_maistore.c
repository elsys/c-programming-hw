#include <stdio.h>
int main()
{
int n,q,a,sum;
float avr;
q=0;
sum=0;
scanf("%d",&a);
do{
scanf("%d",&n);
q++;
sum=sum+n;
  }
while(a>q);
avr=sum/n;
printf("Sum: %.0f\n", sum);
printf("Avr: %.2f\n", avr);







return 0;
}
