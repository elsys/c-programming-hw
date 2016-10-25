#include<stdio.h>
int main(){
int i,n;
float chislo,sum=0;
float avg;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%f",&chislo);
sum=sum+chislo;

}
avg=sum/n;
printf("\n sum: %.0f" ,sum);
printf("\n avg: %.2f" ,avg);
return 0;
}
