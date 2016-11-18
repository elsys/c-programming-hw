#include <stdio.h>

int main()
{

    int n, k, result ,j;
    int i = 0;
    
    scanf("%d", &n);
    int arr[n];

    while(i < n) {
        scanf("%d", &j);
        if(j % 2 == 1) {
            arr[i] = j;
           i++;
        }
    }

    for (k = 0; k < (i / 2); k++) {

        result = arr[k] - arr[n - k - 1];
        printf("%d\n", result);
    }

    if(n % 2 == 1)
        printf("%d", (arr[n/2]));

    return 0;
}
