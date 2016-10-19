#include <stdio.h>
int main() {
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i = (a>b)? b:a;i > 0; i--) if (a%i == 0 && b%i == 0) break;
    printf("%d",i);
    return 0;
}
