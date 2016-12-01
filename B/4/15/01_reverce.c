#include<stdio.h>

int main()

{ 
	int n, i;

	scanf("%d", &n);

	int arr[n];
	
	for(i; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n", arr[i]);
		if(i==0)break;
	}
}
