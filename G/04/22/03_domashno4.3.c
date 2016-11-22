#include<stdio.h>
#include<string.h>
	int main()
	{
	char c[1000],d;
	int m[30],a;
	a=0;
	while(a<30)
		{
		m[a]=0;
		a++;
	}
	fgets(c,1000,stdin);
	for(int i=0;i<=strlen(c);i++){
	for(int b=0,d='a',g='A';b<30;b++){
	if(c[i]==d||c[i]==g){
	m[b]++;break;}d++;g++;}}
	d='a';
	for(int ns=0;ns<30;ns++,d++){
	if(m[ns]==0)
	continue;
	printf("%c - %d\n", d, m[ns]);}
	return 0;
	}
