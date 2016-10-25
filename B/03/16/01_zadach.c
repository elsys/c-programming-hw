#include <stdio.h>

int main()
{
	int n, a, i, sum;
	float avr;
	sum = 0;
	avr = 0;
	scanf("%d", &n);
	
	for (i = 0; i < n; i ++)
	{
		scanf("%d", &a);
		sum = sum + a;
	}
	avr = sum / n;
	printf("Sum: %d\n", sum);
	printf("Avr: %.2f", avr); 
}
