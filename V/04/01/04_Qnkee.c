#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
	int i=1,solo=0,j=1,only;
	float lul[64];
	float n,extra;
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
	for(j=0;j<i;j++){
		extra=extra+fmod(lul[j],solo);
	}
	printf("\n%0.3f",extra);
	return 0;
	}
