#include <stdio.h>

int main()
{   
    int n, i, j;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(j = 0; j<n; j++){
        i--;
        printf("%d\n", arr[i]);
    }

    return 0;
}
