#include <stdio.h>
int main(){ 
	int a; 
	float sum=0;
	float avg; 
	int c;
	scanf("%d", &a); 
	if(a>9){
		do{
			c=a%10;
			sum=sum+c;
			a=a/10; 
			} 
		while(a>0);} 
	else sum = a;  
	if(sum>7) printf("heavy\n");
	else printf("light");
return 0;}
