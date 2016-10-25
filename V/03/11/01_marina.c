#include<stdio.h>
int main(){
int n,i,chislo;
float avg,sum;
sum=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&chislo);
sum=sum+chislo;
}
avg=sum/n;
printf("Sum:%.f\n",sum);
printf("Avg:%.2f\n",avg);
return 0;
}



