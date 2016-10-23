#include <stdio.h>

int main()
{

int n,num;
float avg;

 scanf("%d",&n);

int i=0;
int sum=0;

while(n>i){
	scanf("%d",&num);
	sum = sum + num;
	i++;
}
	avg = (float)sum/n;
printf("Sum: %d\nAvg: %.2f\n",sum,avg);
return 0;
}
