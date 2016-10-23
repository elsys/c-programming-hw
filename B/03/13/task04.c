#include <stdio.h>

int main(){
int i,j,k,space,num,hash=0;

scanf("%d",&num);
space = num - 1;

for(i=1;i<num;i++){
for(k=1;k<2*i-2;k++)hash++;
}	
printf("%d\n",hash);
for(i=1;i<=num;i++){
	for(j=0;j<=space;j++)printf(" ");
	
	space--;
 
	for(k=0;k<2*i-1;k++){ 
		if(k==0||k==2*i-2||i==num){
		 printf("*");
	        } else {
		 printf("#"); 
		}
	}
	printf("\n");
  
}
return 0;
}
