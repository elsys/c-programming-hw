#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    printf("%c", 'z'- (a-'a'));
    return 0;
}
