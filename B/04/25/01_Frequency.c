#include<stdio.h>

int main()
{
	int n, a=0;
	scanf("%d", &n);
	int b[n];
	for(;a<n;a++)
		{
			scanf("%d", &b[a]);
		}
	for(a--;a>=0;a--)
	{
		printf("%d\n", b[a]);
	}
return 0;
}
