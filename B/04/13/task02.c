#include<stdio.h>

int main()
{
int n,o;
int i=0;
int odds[100];

scanf("%d",&n);

do{
scanf("%d",o);
   if(o%2!=0){
     odds[i]=o;
     i++;
   }
}while(i<n);
   
i=0;
   
do{
 printf("%d\n",odds[i]-odds[n-i-1]);
i++;
}while(n/2>i);

if(n%2!=0)printf("%d\n",odds[n/2]);
   
return 0;
}
