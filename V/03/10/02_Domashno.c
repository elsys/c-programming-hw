#include<stdio.h>
int main(){
int chislo,i,sum;
float avg;
scanf("%d",&chislo);
while(chislo!=0){
avg = chislo%10;
sum=sum+avg;
chislo=chislo/10;
i++;
}
avg=sum/i;
if(avg>=7){ printf("heavy");}
else{ printf("light");
}
return 0;
}
