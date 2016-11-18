#include<stdio.h>
#include<string.h>

int main()
{
	int i, a, b=0;
	char j[1000];
	fgets(j,1000,stdin);
	for(a=0;a<26;a++)
	{
		for(i=0;i<strlen(j);i++)
		{
			if(j[i]>='A'&&j[i]<='Z')
			{
				j[i]=j[i]-('A'-'a');
			}
			if(j[i]=='a'+a)
			{
				b++;
			}
		}
		if(b!=0)
	{
		printf("%c - %d\n", 'a'+a, b);
	}
		b=0;
	}
	return 0;
}
