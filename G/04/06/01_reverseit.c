#include <stdio.h>
#include <stdlib.h>

int main(){

int n,i,mass[n];

scanf("%d",&n);
i=0;
while(i<=n){
i++;
scanf("%d",&mass[i]);
}i=n+1;
while(i>0){
printf("%d\n",mass[i]);
i--;}
return 0;
}
