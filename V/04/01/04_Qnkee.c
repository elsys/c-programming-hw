#include <stdio.h>
#include <math.h>
	int main(){
	int i=1,solo=0,j=1,only=0;
	float lul[64];
	float n,extra=0;
	while(scanf("%f",&n)!=EOF){
		solo=0;
		j=i;
		do{
			if(lul[j]==n){
				solo=1;
			}
			j--;
		}while(j>=1);
		if(solo==0){
			only++;
			lul[i]=n;
		}
		i++;
	}
	printf("\n%d",only);
	extra=0;
	for(j=0;j<=i;j++){
		extra=extra+fmod(lul[j],only);
	}
	printf("\n%.3f",extra);
	return 0;
	}
