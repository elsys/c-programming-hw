#include<stdio.h>

int main()
{
int n;
int i=0;
int arr[100];
scanf("%d",&n);
do{
scanf("%d",&arr[i]);
i++;
}while(i<n);
n--;
for(;n>=0;printf("%d\n",arr[n--]));

return 0;
}
