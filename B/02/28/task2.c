#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#include <stdio.h>
int main() {
float a,b,c;
  scanf("%f %f %f", &a,&b,&c);
  printf("%.1f", MAX(MAX(a,b),MAX(b,c)));
return 0;
}
