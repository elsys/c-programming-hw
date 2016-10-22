#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k,sum=0,i;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    while (n>0)
    {
        for (i=0;i<k;i++)
        {
            sum +=m;
        }
        n -=k;
        m = m*0.98f;
        printf("%d \n",sum);
    }
    printf("%d",sum);
    return 0;
}
