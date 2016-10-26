#include <stdio.h>

int main()
{
    int sum = 0, a, i, n;
    float avg;

    scanf("%f", &n);

        for (i = 1; i<=n; i++){
            scanf("%d", &a);
            sum += a;
        }

    avg = (float)sum / n;

    printf("Sum: %d \n Avg: %.2f \n", sum , avg);
    return 0;
}
