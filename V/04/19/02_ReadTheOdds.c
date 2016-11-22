#include<stdio.h>

int main()
{
	int e, i = 0, k = 0, tmp, m;
	scanf("%d", &e);
	int mas[e];
	while(i < e)
        {
                scanf("%d", &m);
		if(m%2 == 1)
		{
			mas[i] = m;
			i++;
		}
        }
	while(k < e/2)
	{
                tmp = mas[k]-mas[e-k-1];
                printf("%d\n", tmp);
                if(e%2!=0)
                {
                        printf("%d",mas[e/2]);
                }
                k++;
        }
	return 0;
}
