#include <stdio.h>

int main()
{
	int n, num, i = 0, sum = 0;
	float avr;
	scanf("%d",&n);
	do
	{
		scanf("%d", &num);
		sum = sum + num;
		i++;
	}while(i < n);
	avr = sum / n;
	printf("Sum: %d",sum);
	printf("\nAvg: %.2f", avr);
}
