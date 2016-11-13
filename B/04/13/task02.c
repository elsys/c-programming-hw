#include<stdio.h>

int main()
{
int n,o=0,i=1;

int read[100];
int odds[100];

scanf("%d",&n);

do{

scanf("%d",&read[o]);
if(read[o]%2!=0){odds[n-i]=read[o];i++;}o++;
}while(i<=n);
o=1;
do{
printf("%d\n",odds[n-o]-odds[o-1]);
o++;
}while(n/2>o-1);

if(n%2!=0)printf("%d\n",odds[n/2]);
   
return 0;
}
