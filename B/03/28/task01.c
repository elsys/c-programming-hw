#include <stdio.h>

int main() {
    int a, b, c=0,i;
    scanf("%d", &a);
    for(i=0; a>i; i++) {
        scanf("%d", &b);
        c += b;
    }
    printf("Sum: %d\nAvg: %.2f",c,(float)c/i);
return 0;
}
