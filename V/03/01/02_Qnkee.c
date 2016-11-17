#include <stdio.h>
int main(){
	int num,c,d,b;
	scanf("%d",&num);
	c=0;
	d=num;
	while(d>0){
	d=d/10;
	c++;
	}
	for(int lul=0;num>0;){
		b+=num%10;
		num=num/10;
	}
	if(b/c<8){
	printf("light");
	}
	else{
	printf("heavy");
}
return 0;
}
