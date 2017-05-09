#include <stdio.h>

int main() {
    int a, b=0, i=0;
    scanf("%d", &a);
    for(; a>0; a/=10, i++) b += a%10;
    printf((float)(b)/i > 7 ?"heavy":"light");
return 0;
}
