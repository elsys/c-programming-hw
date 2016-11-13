#include<stdio.h>

int main()
{
int n,i;
int oth = 0;
int odd = 0;

int read[100];
int odds[100];

scanf("%d",&n);

do{
scanf("%d",&read[oth]);
if(read[oth]%2!=0){
odds[odd]=read[oth];
odd++;
}
oth++;
}while(odd!=n);

for(i=0;n>0;n=n/2,i++){
 if(n!=1){
	printf("%d\n",odds[odd-n+i]-odds[odd-i-1]);
 }else{
	printf("%d\n",odds[n]);
 }
}
return 0;
}
