#include <stdio.h>

int main()
{
	int n, m, k, sum, i = 2, nodsksum = 0, dsksum = 0, dsk = 0, money;
	scanf("%d", &n);	//number of chairs
	scanf("%d", &m);	//price for 1 chair
	scanf("%d", &k);	//2% discount for every k chairs
	nodsksum = nodsksum + m * 2;
	money = 0;
	while(i < n)
	{
		if(i != 0 && i % k == 0)
		{
			dsk = dsk + 2;
			money = m - (m * dsk / m);
		}
		dsksum = dsksum + money;
		i++;
	}
	sum = nodsksum + dsksum;
	printf("%d", sum);
}
