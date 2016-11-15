#include<stdio.h>

int main()
{
	float entered, sum=0, sub, mas[64];
	int iP=0, prom=0, cS=0, kS, div; 
	while(scanf("%f", &entered) != EOF)
	{
		for(kS=0; kS<64; kS++)
		{
			if(mas[kS] == entered)
			{
				break;
			}
	        	else 
			{
				cS++;
			}
		}
		if(cS == 64)
		{
			mas[prom] = entered;
			prom++;
		}
		cS = 0;
		iP++;
	}
	printf("%d", prom);
	for(kS=0; kS<prom; kS++)
	{
		div=mas[kS]/prom;
		sub=mas[kS]-div*prom;
		sum=sum+sub;
	}
	printf("\n%.3f",sum);
	return 0;
}
