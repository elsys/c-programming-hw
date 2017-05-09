#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,space=0,i;
	scanf("%d",&a);
	if(a%2==0) a--;
	for(space = a/2;abs(space)*2<a;space--) {
		for(i=0;i<=abs(space)-1;i++) printf(" ");
		for(i=0;i<=(a/2-abs(space))*2;i++) printf("*");
		printf("\n");
	}
    return 0;
}
