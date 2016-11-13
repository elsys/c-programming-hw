#include <stdio.h>
#include <stdlib.h>

int main(){

int n,mass[n],i;

scanf("%d",&n);
i=0;
while(i<n){
i++;
scanf("%d",&mass[i]);
}
while(n>0){
printf("%d\n",mass[n]);
n--;}
return 0;
}

