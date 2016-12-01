#include<stdio.h>

int main()

{
	int n, i, sum;
	float avr;
	
	scanf("%d", &n);
	i = 0; 

	while(n != 0)
	{
		sum += n%10;
		n /= 10;
		i++;
	}
	
	avr = (float)sum / i;

	if(avr < 7 )printf("light");
	else printf("heavy");

	return 0;
}
