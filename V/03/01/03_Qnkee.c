#include <stdio.h>
int main(){
	int n,m,k,i,j=0;
	float chef,haveuseen,hellyeah,chef1;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	chef=0;
	hellyeah=0;
	haveuseen=0.02;
	i=0;
	while(i<=k){
	hellyeah=hellyeah+m;
	i++;
	j++;
	}

	while(n>=j){
		if(i<=k){
		chef=m-(haveuseen*m);
		hellyeah=hellyeah+chef;
		i++;
		}
		else if(i>k){
		haveuseen=haveuseen+0.02;
		i=0;
		}
	j++;
	}
	
	printf("%0.0f", hellyeah);
	printf("\n%0.2f=haveuseen",haveuseen);
	printf("\n%0.0f=chef",chef);


return 0;
}
