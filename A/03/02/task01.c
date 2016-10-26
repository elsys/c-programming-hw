#include <stdio.h>

int main(){
    int n;
    int number;
    float sum;

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &number);

        sum = sum + number;
    }

    printf("Sum: %d", sum);
    printf("Avg: %.2f", sum / n);

    return 0;

}
