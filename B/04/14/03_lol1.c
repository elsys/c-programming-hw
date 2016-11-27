#include <stdio.h>
#define max_chars 1000
int main()
{
	char r[max_chars];
	char q[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	int p, z, g, l;
    z=0;
	fgets(r, max_chars, stdin);
    g=0;
	while(q[g]!='\0'){
        p=0;
        z=0;
        l=0;
		while(r[p]!='\0'){
			if(r[p] >= 'A' && r[p] <= 'Z'){
				r[p]=r[p]+32;
			}
			if(q[g] == r[p]){
				z++;
				l=1;
			}
			p++;
		}
		if(l){
			printf("%c - %d\n", q[g], z);
		}
		g++;
	}

	return 0;
}
