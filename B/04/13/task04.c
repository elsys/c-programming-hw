#include<stdio.h>
float result(float*,int);
float num[64];
int n,i;

int main(){
 int j,in;
 float arr[100];
  i=0;
  n=0;
while(scanf("%f",&arr[i])!=EOF){
 in=0;
 for(j=0;j<i;j++){
  if(arr[i]==arr[j])in++;
 }
 if(in==0){
     num[n]=arr[i];
     n++;
   }
 
 i++;
}  

printf("%d\n%.3f\n",n,result(num,n));
return 0;
}

float result(float num[],int n){

 float sum=0;
 float rest=0;
 int i = n;
 while(i>=0){
 rest = num[i] - (int)num[i];
 if((int)num[i]%n!=0)sum=sum+(int)num[i]%n+rest;
 i--;
 }
return sum;
}
