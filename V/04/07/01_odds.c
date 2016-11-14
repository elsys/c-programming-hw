#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   int main()
{
  int n,br;
  int arr [n];
  scanf("%d",&n);
  br=0;
   do{
      scanf("%d",&arr[br]);
      br=br+1;
     }while(br<n);
    br=n-1;
   do{
       printf("%d\n",arr[br]);
       br=br-1;
   }while(br>=0);
   return 0;
}
