#include<stdio.h>

int main()

{
	int n, k;
	float m, sum;

	scanf("%d", &n);
	scanf("%f", &m);
	scanf("%d", &k);
	
	for(int i = 0; i < n; i++)
	{
		sum += m - ((m*(i/k*2))/100);
	}

	printf("%.f", sum);

	return 0;
}

