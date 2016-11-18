#include <stdio.h>

int main()
{
int i=0,a=0,n=0,count,s=0;
scanf("%d",&n);
int arr[n];
int sum[n/2];
for(i=0;i<n;){
scanf("%d",&a);
if(a%2!=0){
arr[i]=a;
i++;
}
}
if(n%2==0){
n=n-1;
for(count=0;count<=n;count++){
sum[count]=arr[count]-arr[n];
n=n-1;
}
for(s=0;s<=n;s++){
printf("%d\n", sum[s]);
}
}else{
n=n-1;
for(count=0;count<=n;count++){
sum[count]=arr[count]-arr[n];
n=n-1;
}
for(s=0;s<=n;s++){
printf("%d\n", sum[s]);
}
printf("%d\n",arr[n+1]);
}
return 0;
}
