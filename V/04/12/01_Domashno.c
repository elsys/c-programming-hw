#include <stdio.h>

int main()
{
int i,b,c;
b=0;
scanf("%d",&i);
c=i-1;
int arr[i];
while(b<i){
scanf("%d",&arr[b]);
b++;
}
while(c>=0){
printf("%d\n",arr[c]);
c=c-1;
}
return 0;
}
