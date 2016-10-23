#include <stdio.h>

int main() {

	int number;
	int sum = 0;
	int digit = 0;
	
	printf("Enter random number\n ");
	scanf("%d", &number);

	if(number < 1 || number > 9999){
		printf("The number must be between 1 and 9999!\n");
		return 0;
	}

	while(number > 0){
		sum += number % 10;
		number /= 10;
		digit ++;
	}

	if(sum / digit > 7){
		printf("Heavy\n");
	}else{
		printf("Light\n");
	}

	return 0;
}
