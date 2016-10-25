#include<stdio.h>
int main(){
int n,i,chislo;
float avg,sum;
sum=0;
i=0;
scanf("%d",&n);
for(;i<n;i++){
scanf("%d",&chislo);
sum=sum+chislo;
}
avg=sum/n;
printf("\nSum:%.f",sum);
printf("\nAvg:%.2f",avg);
return 0;
}



