#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int mas[26];
 	char str[1000];
	fgets (str,1000,stdin);
	i=0;
	while(i<26)
	{
		mas[i]=0;
		i++;
	}
	i=0;
	do
	{
		if(str[i]>='A' && str[i]<= 'Z')
		{
			mas[str[i]-'A']++;
		}
		if(str[i]>='a' && str[i]<='z');
		{
			mas[str[i]-'a']++;
		}
		i++;
	}while(i<strlen(str));
	i=0;
	do
	{
		if(mas[i]!=0)
		{
			printf("%c - %d\n", (i+'a'), mas[i]);
		}
		i++;
	}while(i<26);
	return 0;
}
