#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, a, broi=0;
   float sum=0, avg=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
     scanf("%d",&a);
     sum=sum+a;
     broi=broi+1;
   }
   avg=sum/broi;
   printf("Sum:%.f\n",sum);
   printf("Avg:%.2f\n",avg);

}
