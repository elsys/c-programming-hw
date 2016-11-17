#include <stdio.h>
#include <string.h>
	int main(){
	int i1,i2,j;
	char words[1000];
	fgets(words,1000,stdin);
	for(i1=0;i1<26;i1++){
		i2=0;
		for(j=0;j<strlen(words);j++){
			if(words[j]=='a'+i1 || words[j]=='A'+i1){
				i2++;
			}
			}
			if(i2>0){
			printf("\n%c - %d",'a'+i1,i2);
			}
		}
	
	return 0;
	}
