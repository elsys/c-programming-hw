#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while (i>0)
    {
        printf("%d\n",arr[i-1]);
        i--;
    }
    return 0;
}
