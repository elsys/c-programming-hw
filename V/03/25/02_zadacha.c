#include <stdio.h>
int main()
{
	int num,sum=0,i=0;
	float avg;
	do{
	scanf("%d",&num);
	}while(num<1&&num>9999);
	while(num!=0)
	{
		sum=sum+num%10;
		num=num/10;
		i++;
	}
	avg=sum/i;
	if(avg>7)
	{
		printf("heavy\n");
	}
	else
	{
		printf("light\n");
	}
	return 0;
}
