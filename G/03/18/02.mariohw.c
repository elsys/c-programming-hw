#include <stdio.h>
int main()
{
int n,m,i,a,sum;
float avr;
scanf("%d",&n);
sum=0;
i=0;
m=n;
do{
i++;
a=m%10;
sum=sum+a;
m=m/10;
}while(m !=0);
avr=sum/i;
if(avr>7)
{printf("heavy");}
else
{printf("light");}
return 0;

}
