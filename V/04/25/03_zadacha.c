#include <stdio.h>
int main()
{
	int i,j,bukvi[26];
	char c[1000];
	fgets(c,1000,stdin);
	for (i=0;i<26;i++) bukvi[i]=0;
	{
		for(i=0;i<strlen(c);i++)	
			if(c[i]>='A' && c[i]<='Z') c[i]=c[i]+32;
		for(j=0;j<26;j++)
		{
			for(i=0;i<strlen(c);i++)
			{
				if(c[i]=='a'+j)bukvi[j]++;
			}
		}
		
	}
	for(i=0;i<26;i++)
	{
		if(bukvi[i]){
			printf("%c - %d\n",'a'+i,bukvi[i]);
		}
	}
	return 0;
}
