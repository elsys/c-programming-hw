#include <stdio.h>
int main()
{
int a,b,g,j,t,n=1,l,p=0, c=1;;
scanf("%d",&l);
	if(l<3)
	{	
	n=0;
	}
	else
	{
for(b=1;b<=l-2;b++)
{
	l=n;
	while(a>0)
	{
	p++;
	l--;
	}
	n=n+2;
}
	}
	printf("%d\n",p);
	j=l-1;
		for(b=1;b<=l;b++)
		{
		g=c;
		t=j;
		while(t>0)
		{
		printf(" ");
		t--;
		}
		while(g>0)
		{
		if(b!=l)			{
	if(g==c||g==1)
	{
	printf("*");
	}
	else
	{
	printf("#");
	}
	}
	else
	{	
	printf("*");
	}
	g--;
			}
printf("\n");
j--;
c=c+2;
		}
return 0;
}
