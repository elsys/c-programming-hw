#include<stdio.h>
int main(){
	int n, a=0;
	scanf("%d", &n);
	int i[n], eq=0;
	while(a<n){
		scanf("%d", &i[a]);
		if(i[lol]%2!=0)a++;
	}
	if(n%2==0){
		for(a=0;a<n/2;a++){
			eq=i[a]-i[(n-1)-a];
			printf("%d\n", eq);
		}
	}else{
		n--;
		for(a=0;a<n/2;a++){
			eq=i[a]-i[n-a];
			printf("%d\n", eq);
		}
		printf("%d", i[a]);
	}
	return 0;
}
