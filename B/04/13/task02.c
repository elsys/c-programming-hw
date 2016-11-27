#include<stdio.h>

int main()
{
int n,i,j;

int odds[100];

scanf("%d",&n);
i=0;
do{
 if(i!=n){ scanf("%d",&odds[i]);
 if(odds[i]%2!=0){i++; j=i;}
//  printf("i%d\n",i);
 }else{
  if(n%2!=0){
   printf("%d\n",odds[n-j]-odds[j-1]);j--;
   }else{
   printf("%d\n",odds[n+1]);
  }
  n=n/2;
  i=i/2;
  // printf("j%d\n",j);
  }
 }while(i<n||j>0);   
return 0;
}
