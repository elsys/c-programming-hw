#include <stdio.h>

int main(){
    int n;
    int number;
    int sum;
    float average;

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &number);

        sum = sum + number;
    }

    average = sum / n;

    printf("Sum: %d", sum);
    printf("Avg: %.2f", average);

    return 0;

}
