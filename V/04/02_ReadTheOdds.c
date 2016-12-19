#include<stdio.h>

int main()
{
	int e, i = 0, k = 0, tmp = e - 1;
	scanf("%d", &e);
	int a[e];
	if(e%2 != 0)
        {
                printf("%d\n", a[e/2]);
        }
	while(k < e)
	{
		while(a[k]%2 == 0)
		{
			scanf("%d", &a[k]);
		}
		k++;
	}
	for(k = 0; k < e/2; k++)
	{
		i = a[k] - a[tmp];
		printf("%d\n", i);
		tmp--;
	}
	return 0;
}
