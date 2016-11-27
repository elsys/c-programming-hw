#include<stdio.h>
#include<stdlib.h>

int TowerOfHanoi(int n, char a, char b, char c);

int main()
{

 int n;
//printf("Enter number of plates:");
 scanf("%d", &n);
 TowerOfHanoi(n, 'A', 'B', 'C');

return 0;
}

int TowerOfHanoi(int n, char a, char b, char c){
if(n == 1)printf("\n%c -> %c",a,b);

else{ 
  TowerOfHanoi(n-1,a,c,b);
  printf("%c -> %c",a,b);
  TowerOfHanoi(n-1,c,b,a);
  }
printf("\n");
return 0;
}
