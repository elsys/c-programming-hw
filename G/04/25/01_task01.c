#include<stdio.h>
int main()
{
 int n,i;
 do{scanf("%d",&n);}while(n<=0);
 int a[n];
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
 printf("\n%d",a[i]);
}  
 return 0;
}
