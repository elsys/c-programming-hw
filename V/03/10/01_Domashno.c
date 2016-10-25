#include<stdio.h>
int main(){
int i,n,chislo,sum=0;
float avg;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&chislo);
sum=sum+chislo;
avg=sum/n;
}
printf("sum: %d" ,sum);
printf("\navg: %.2f" ,avg);
return 0;
}
