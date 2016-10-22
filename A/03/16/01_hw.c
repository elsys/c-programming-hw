#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,sum=0,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum += a;
    }
    printf("Sum: %d \n",sum);
    printf("Avg: %d", sum/n);
    return 0;
}
