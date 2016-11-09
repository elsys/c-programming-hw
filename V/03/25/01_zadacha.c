#include <stdio.h>
int main()
{
	int i,n,num;
	float sum,avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	avg=sum/n;
	printf("Sum:%.f\nAvg:%.2f\n",sum,avg);
	return 0;

}
