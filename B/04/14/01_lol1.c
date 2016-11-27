#include <stdio.h>
int main()
{
	int p;
	scanf("%d",&p);

	int q[p],i=1;

    while(i<=p){
		scanf("%d",&q[i]);
		i++;
	}
    i=p;
	while(i>0){
		printf("%d\n",q[i]);
		i--;
	}

	return 0;
}
