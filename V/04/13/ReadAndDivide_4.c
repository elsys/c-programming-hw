#include <stdio.h>
#include <math.h>

int main()
{
	int i, c;
	float sum = 0, nums[64];

	while(i < 64)
	{
		while(scanf("%f", nums[i] != EOF))
		{
			c = i - 1;
			while(c >= 0)
			{
				if(nums[i] == nums[c])
				{
					i--;
					break;
				}
				c--;
			}
			i++;
		}
	}
	printf("%d", i);
	c = 0;
	while(c < i)
	{
		sum = sum + fmod(nums[i], i);
		i++;
	}
	printf("\n%.3f", sum);
}
