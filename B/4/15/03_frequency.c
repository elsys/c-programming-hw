#include<stdio.h>

int const max = 1000;

int main()
{
	char Input[max];
	fgets(Input, max, stdin);
	int frequ[26] = {0};
	
	for(int k = 0; Input[k] != '\0';k++ )
	{
		if(Input[k] >= 'a' && Input[k] <= 'z' )
		{
			frequ[Input[k]- 'a']++;
		}
		
		if(Input[k]>='A' && Input[k] <= 'Z' )
		{
			frequ[Input[k]- 'A']++;
		}
	}
	
	for(int l = 0; l<26; l++)
		{
			if(frequ[l] > 0)
			{
				printf("%c - %d \n", 'a' +l, frequ[l] );
			}
		}
	return 0;
}
