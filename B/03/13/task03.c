
#include <stdio.h>

int main()
{
int n,m,k,i, sum=0;

scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
	
float perc = 0;
int a = k;

for(i=0;i<n;i++){
	 if(i==k){
		perc = perc + 0.02;
		k=k+a;
	}
		sum = sum + m - m * perc; 
}

printf("%d\n",sum);
return 0;
}

