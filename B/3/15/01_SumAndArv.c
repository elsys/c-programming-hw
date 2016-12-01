#include<stdio.h>

int main()

{
	int n, a, sum;
	float avr;

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		sum += a; 
	}
	avr = sum/n;
	printf("Sum : %d\n", sum);
	printf("Avr : %.2f", avr);
	
	return 0;
}
