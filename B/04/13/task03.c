#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
int ascii;
char arr[1000];


fgets(arr, 1000, stdin);

for(ascii=1;ascii<26;ascii++){
int num = 0;
int c = 0;
 do{
  if(arr[c]=='a'+ ascii || arr[c]=='A'+ ascii)num++;
  c++;
 }while(c<strlen(arr));

 if(num!=0)printf("%c - %d\n",'a'+ascii,num);
}
return 0;
}

