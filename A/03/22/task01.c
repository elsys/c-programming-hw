#include <stdio.h>
int main() {
  int n,count=0,a,sum=0;
  float avg;
    scanf("%d", &n);
  while(count<n){
    scanf("%d", &a);
    sum = sum + a;
    count = count+1;
  }
  avg=sum/n;
  printf("Sum: %d\nAvg: %.2f\n", sum, avg);
  return 0;
}
