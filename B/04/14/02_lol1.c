#include <stdio.h>
int main()
{
	int q;
	scanf("%d",&q);
	int p[q],k,l=1;
    k=0;
	do{
		scanf("%d",&p[k]);
		if(p[k]%2!=0){
			k++;
		}
	}while(k<q);
    k=0;
	while(k<q/2){
		printf("%d\n",p[k]-p[q-l]);
		k++;
		l++;
	}
	if(q%2!=0){
		printf("%d\n",p[q/2]);
	}

	return 0;
}
