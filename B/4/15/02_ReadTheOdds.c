#include<stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	int num[n];
	while(i < n)
	{
		scanf("%d", &num[i]);
		if(num[i] % 2 != 0)
		{
			i++;
		}
	}

	int del = (n + 1) / 2;
	for(i=0; i < del; i++)
	{
		printf("%d\n", num[i] - num[n - 1 -i]);
	}
	
	if(n % 2 == 1)
	{
		printf("%d", num[n/2]);
	}
	return 0;
}
