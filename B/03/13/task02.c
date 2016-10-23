#include <stdio.h>

int main()
{
int num,i;
float sum = 0.00;

scanf("%d",&num);

for(i=0;num%10!=0;i++){
 sum = sum + num%10;
 num = num/10;
}
if((sum/i)<7.00){
printf("light\n");
}else{
printf("heavy\n");
}
return 0;
}
