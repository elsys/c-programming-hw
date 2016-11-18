#include <stdio.h>
 #include <stdlib.h>
 int main() {
 int n,i,a;
 do {scanf("%d",&n);
} while(n<=0);
int dodo[n];
 i=0;
 while(i<n) { scanf("%d",&a);
              if(a%2!=0) { dodo[i]=a;
                           i++;}}
i=0;
while(i<n/2){
printf("%d\n", (dodo[i]-dodo[n-i-1]));
if(n%2!=0)printf("%d",dodo[n/2]);
i++;}}
