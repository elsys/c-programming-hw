#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    scanf("%d", &n);
    int arr[n],a,i,br,sum,ch;
    int check;
    ch=0;
    check=(n/2);
    i=0;
    br=0;

    do{
        scanf("%d", &a);
        if(a%2!=0){
         arr[i]=a;
         br++;
         i++;
        }


    }while(br<n);
    i=0;
   if(n%2!=0){
        do{
    if(n-1==check){
    printf("\n%d",arr[check]);
    ch++;
    }
    else{
    sum=arr[i]-arr[n-1];
    printf("\n%d", sum);
    }
    n--;
    i++;

    }while(ch==0);
   }
    else{
    do{
        sum=arr[i]-arr[n-1];
        printf("\n%d", sum);
        n--;
      i++;
    }while(n>i);
   }
}
