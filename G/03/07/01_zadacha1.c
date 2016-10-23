#include <stdio.h>
int main(){
int n;
int count;
int sum = 0;
float average;
scanf("%d", &n);
if(n < 1){
return 0;}
for(count = 0; count < n; count++){
int number; 
scanf("%d", &number);
sum += number;}
average = sum / count;
printf("Sum: %d\nAverage: %.2f\n", sum, average);
return 0;}
