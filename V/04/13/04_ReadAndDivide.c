#include <stdio.h>
#include <math.h>
#define n 64

int main()
{
	int i, c;
	float sum = 0, nums[n];

	while(i < n)
	{
		while(scanf("%f", &nums) != EOF)
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
	printf("%d\n%.3f",i , sum);
}
