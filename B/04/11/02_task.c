#include<stdio.h>
int main()
{
 int n,k=0,k2=0,i=0,masiv[100],masiv2[100];
 scanf("%d",&n);
   while(k<=i)
   {
     scanf("%d",&masiv[i]);
     if(masiv[i]%2!=0){masiv2[k]=masiv[i];k++;}
     if(k==n)break;
     i++;
     k2=k;
   }
   i=0;
   for(;i<(k/2);)
   { 
      printf("%d\n",masiv2[i]-masiv2[k2]);
      i++;
      k2--;
      if(n%2!=0)printf("%d",masiv2[k/2]);
    
   }
 
return 0;
}

