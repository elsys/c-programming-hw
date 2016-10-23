#include <stdio.h>
int main()
{
int m,i,a,sum;
float avr;
scanf("%d",&m);
sum=0;
i=0;
do{
a=m%10;
sum=sum+a;
i++;
m=m/10;
}while(m>0);
avr=sum/i;
if(avr>7)
{printf("\n heavy");}
else
{printf("\n light");}
return 0;
}
