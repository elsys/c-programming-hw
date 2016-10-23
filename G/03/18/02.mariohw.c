#include <stdio.h>
int main()
{
int m,sum=0,i=0;
float avr;
scanf("%d",&m);
do
{
sum+=m%10;
i++;
m=m/10;
}while(m>0);
avr=(float)sum/i;
if(avr>7){printf("\n heavy");}
else{printf("\n light");}
return 0;
}
