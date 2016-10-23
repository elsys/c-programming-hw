#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,sum,a;
 float avr;
  	scanf("%d",&n);  
 sum=0;
for(int i=0;i<n;i++)
{
 scanf("%d",&a);  
 sum=sum+a;
}
avr=0;
avr=(float)sum/n;
printf("Sum: %d\n",sum);
printf("Avr: %.2f\n",avr);
return 0;
}
