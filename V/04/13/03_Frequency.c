#include <stdio.h>

int main()
{
	char stc[1000];
	fgets (stc, 1001, stdin);

	int freq[26] = {0};
	for(int i = 0; stc[i]; i++)
	{
		if(stc[i] >= 'A' && stc[i] <= 'Z')
		{
			freq[stc[i] - 'A']++;
	        }
		if(stc[i] >= 'a' && stc[i] <= 'z')
		{
			freq[stc[i] - 'a']++;
		}
	}

	for(int i = 0; i < 26; i++)
	{
		if(freq[i] > 0)
		{
			printf("%c - %d\n", 'a' + i, freq[i]);	
		}	
}
}
