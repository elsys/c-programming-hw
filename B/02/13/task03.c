#include<stdio.h>

int main()
{
int a;
do{
scanf("%d",&a);

switch(a){
case 0:printf("zero\n");
break;
case 1:printf("one\n");
break;
case 2:printf("two\n");
break;
case 3:printf("three\n");
break;
case 4:printf("four\n");
break;
case 5:printf("five\n");
break;
case 6:printf("six\n");
break;
case 7:printf("seven\n");
break;
case 8:printf("eight\n");
break;
case 9:printf("nine\n");
break;
default: printf("Your number is not corect.\n"); break;
}
}while(a<=9||a>=0);
return 0;
}
