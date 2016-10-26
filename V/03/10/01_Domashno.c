#include<stdio.h>
int main(){
int n;
float chislo,sum;
float avg;
scanf("%d",&n);
int i;
sum=0;
for(i=1;i<=n;i++){
scanf("%f",&chislo);
sum=sum+chislo;

}
avg=sum/n;
printf("\n sum: %.0f" ,sum);
printf("\n avg: %.2f" ,avg);
return 0;
}
