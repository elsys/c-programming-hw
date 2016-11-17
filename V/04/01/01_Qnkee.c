#include <stdio.h>

int main(){
	int a,i;
	scanf("%d",&a);
	int lul[a];
	i=1;
	do{
	scanf("%d",&lul[i]);
	i++;
	}while(i<=a);
	i=a;
	do{
	printf("\n%d",lul[i]);
	i--;
	}while(i>0);
	return 0;
	}
