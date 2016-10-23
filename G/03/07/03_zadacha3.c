#include <stdio.h>

int main() {

	int n, m, k;
	int sum = 0;
	int count;

	printf("Enter the number of the chairs:\n ");
	scanf("%d",&n);	
	printf("Enter the price of each chait:\n ");	
	scanf("%d",&m);
	printf("Enter the discount:\n ");
	scanf("%d",&k);

	for(count = 0; count < n; count++){
		sum += m-(count / k * (2 * m / 100));

	}

	printf("%d\n",sum);
	
	return 0;
}
