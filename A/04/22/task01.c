#include <stdio.h>
int main() {
    int arr[600];
    int n,count;
    scanf("%d", &n);
    for(i=0;i<n;i++){
      scanf("%d", &arr[i]);
    ;}
    for(i=n-1;i>=0;i--){
      printf("%d\n", arr[i]);
    }
  return 0;
}

