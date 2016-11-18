#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,buff;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if (n%2!=0)
    {
        printf("%d",arr[n/2]);
    }
    else
    {
        for (i=0;i<(n/2);i++)
        {
            buff = arr[i]-arr[n-i-1];
            printf("%d\n",buff);
        }
    }
    return 0;
}
