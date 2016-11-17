#include<stdio.h>

int main(){

	char sentence[1000];
	fgets(sentence,1000,stdin);

	char letter='a';
	int i=0;
	int charcnt=0;
	for(;(letter>='a' && letter <='z') || sentence[i]!=EOF;i++, letter++){
		if(sentence[i]==letter) charcnt++;
		printf("%c - %d\n", letter, charcnt);
		charcnt=0;
	}
		
return 0;
}
