#include <stdio.h>

int main()
{
	int numCount = 0;
    int i=0;
	int arr[1024];

	while ((numCount <= 0) || (numCount > 1024))
	{
		printf("Vavedete broi chisla\n");
		scanf("%d", &numCount);
	}

	printf("Zapochnete vuvezhdane na chisla\n");
	for (i = 0; i < numCount; i++)
	{
		scanf("%d", &(arr[i]));
	}

	printf("Chislata v obraten red sa:\n");
	for (i = numCount - 1; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}
