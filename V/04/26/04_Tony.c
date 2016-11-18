#include <stdio.h>
int main()
{
    int a=0;
    float arr[64];
    float sumof=0;
    while(scanf("%f",&arr[a])!=EOF)
	{
        int b=1;
        for(int j=1;j<a;j++)
	{
            if(arr[j]==arr[a])
		{
               		 b=0;
            	}
        }
        if(b)
	{
            a++;
        }
    	}
    		for(int k=1;k<a;k++)
		{
       		 float n=arr[k];
       		 if(n>=a)
		{
        	  do
		{
                n=n-a;
            	}while(n>=a);
        	}
		sumof=sumof+n;
    		}
	    printf("%d",a);
	    printf("\n%.3f",sumof);
	return 0;
}
