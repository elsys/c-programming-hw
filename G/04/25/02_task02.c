#include<stdio.h>
int main()
{
int i,n,r,b,m;
do{scanf("%d",&n);}while(n<=0);
int a[n];
for(i=0;i<n;i++)
{do{scanf("%d",&a[i]);}while(a[i]%2==0);}
r=n-1;
m=n/2;
if(n%2!=0){ printf("\n %d",a[m]);}
else{for(i=0;i<m;i++)
{b=a[i]-a[r];
printf("\n%d",b);
r--;}}
return 0;
}
