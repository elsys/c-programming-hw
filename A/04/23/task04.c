#include <stdio.h>
#include <stdlib.h>

int main(){
	int b=0,d=0,a=0,i=0,e;
	float c,n[64],s,m;
	while(!feof(stdin)){
		scanf("%f",&c);
		while(b<=i){
			if(n[b]==c){d=1;break;}
			b++;
		}
		if(d==0){n[i]=c;i++;}
		b=0;
		d=0;
	}
	printf("%d",i);
}
