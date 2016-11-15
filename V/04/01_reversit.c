#include <stdio.h>

int main()
{
	int e, k = 0;

	scanf("%d",&e);

	int a[e];
	
	while(k < e)
	{
		scanf("%d", &a[k]);
		k++;
	}
	k = e -1;
	while(k >= 0)
	{
		printf("%d\n", a[k]);
		k--;
	}
	return 0;
}
