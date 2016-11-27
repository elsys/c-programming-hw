//C program for base conversion from binary to decimal 

#include<stdio.h>
#include<stdlib.h>

int fun (int);

int main()
{
 long int num;
 int index, i=0, j=0, flag=1;

 printf("Enter a binary number:\n");
 scanf("%ld",&num);
 
 while(flag){
  index = num%10;
  j = j + index*fun(i);
  i++;
  num = num / 10;
  if(num == 0)flag=0;
 }
 printf("Decimal equivalent:\n%d\n",j);
 
return 0;
}
int fun(int i){
 int j,k=1;
 
 for(j = 1;j <= i;j++) 
 k = k*2;

return(k);
}

