#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, c=0, br, avg=0;
while(br<1||br>9999);)
{
scanf("%d",&br);
}
while(br>0)
{
i=br%10;
avg=avg+i;
br=br/10;
c=c+1;
}
if(avg / c >= 7) printf("heavy");
if(avg /c<=7) printf("light");    
return 0;
}
