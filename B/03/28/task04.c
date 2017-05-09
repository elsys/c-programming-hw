#include <stdio.h>

int main() {
    int a,i,o;
    scanf("%d",&a);
    printf("%d\n",(a-2)*(a-2));
    for(o=0;a>o;o++) {
        for(i=1;i<=a-o;i++) printf(" ");
        for(i=0;i<=o*2;i++) printf(i==0 || o*2==i || o == a-1? "*":"#");
        printf("\n");
    }
return 0;
}
