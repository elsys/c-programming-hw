#include<stdio.h>

int main()
{
int n,o,i,odds[100];

scanf("%d",&n);
   
for(i=0;i<n;){
   scanf("%d",&o);
   if(o%2!=0)
   {
     odds[i]=o;
     i++;
   }
}
   
for(i=0;i<n/2;i++){
   printf("%d\n",(odds[i]-odds[n-i-1]));
 }

  if(n%2!=0)printf("%d",odds[n/2]);
   
return 0;
}
