#include <stdio.h>
int main()
{
	int c, b,n,i=0;
	scanf("%d",&n);
	int a[n];
	while(i<n)
	{
		do{
		scanf("%d",&a[i]);
		}while(a[i]%2==0);  i++;
	}
	i=0;c=n;
	
	while(i<c/2)
	{
		b=a[i]-a[n-1];
		printf("%d\n",b);
			
		n--;i++;
	}if(c%2!=0) printf("%d\n",a[c/2]);
	return 0;


}
