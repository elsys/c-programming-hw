#include <stdio.h>

int main()
{
        int n, i, num;
        scanf("%d", &n);
        int arr[n];

        if(n % 2 == 0)
        {
                for(i = 0; i < n;)
                {
                        scanf("%d", &num);
                        if(num % 2 != 0)
                        {
                                arr[i] = num;
                                i++;
                        }
                }
                for(i = 0; i <= n / 2; i++)
                {
                        printf("%d\n", arr[i] - arr[(n - i) - 1]);
                }
	}
       	else
       	{
                for(i = 0; i < n;)
                {
                        scanf("%d", &num);
                        if(num % 2 != 0)
                        {
                                arr[i] = num;
                                i++;
                        }
                }
                for(i = 0; i <= n / 2 - 1; i++)
                {
                        printf("%d\n", arr[i] - arr[(n - i) - 1]);
                }
                printf("%d", arr[n / 2]);
        }
}		
