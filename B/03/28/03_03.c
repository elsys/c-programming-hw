#include <stdio.h>
int main() {
    char a;
	while(1){
		scanf("%c", &a);
		if(a == '.') break;
		printf("%c", a >= 'a' && a <= 'z' ? 'z'- (a-'a'):a);	
	}
    return 0;
}
