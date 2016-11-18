#include <stdio.h>
#include <math.h>

int main()
{
    int i,x,j,n;
    i=0;
    n=0;
    float arr[1000],num,sum=0;
    while((scanf("%f",&num))!=EOF)
        {
            x=0;
            for(j=0;j<64;j++){

            if(arr[j]==num) x=1;
            if(x==0)
            {
            arr[i]=num;
            i++;
            }
            }
    }
    while(n < i)
    {
        sum += fmod(arr[n], i);
        n++;
    }
	printf("%d\n%.3f ",i,sum);
	return 0;
}
