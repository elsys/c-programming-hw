#include <stdio.h>
#include <math.h>

int main()
{
    int j;
    float n, result, arr[64];
    int i = 0;
    result = 0;

    while (scanf("%f", &n) != EOF){

        arr[i] = n;
        for (j = 0; j < i; j++){
            if(n == arr[j]) {
                i--;
                break;

            }
        }

        i++;
    }
    printf("%d\n", i);
    for(j = 0; j < i; j++) {

         result += fmod(arr[j], i);
    }
        printf("%.3lf", result);

    return 0;
}
