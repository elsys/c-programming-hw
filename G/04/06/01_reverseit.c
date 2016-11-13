#include <stdio.h>
#include <stdlib.h>

int main(){

long n,i,mass[n];

scanf("%li",&n);
i=0;
while(i<=n){
i++;
scanf("%li",&mass[i]);
}i=n+1;
while(i>0){
printf("%li\n",mass[i]);
i--;}
return 0;
}
