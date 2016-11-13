#include <stdio.h>
int main()
{
float a[64],b,c,d,h=0;
int i,n,j,y,w;
while((scanf("%f",&b))!=EOF)
{
y=0;
i=0;
do
{
if(a[i]==b){y=1;}
i++;
}while(i<j);
a[j]=b;
if(y==0)j++;
}
n=j;
printf("%d\n",n);
j=0;
do
{
c=a[j];
d=a[j];
w=0;
while(d-n>=0){d=d-n; w++;}
c=a[j]-w*n;
h=c+h;
j++;
}while(j<n);
printf("%.3f\n",h);
return 0;
}
