#include <stdio.h>

int main()
{
	int boom[666],n,j=0;
    scanf("%d",&n);
    while(j<n){
        scanf("%d",&boom[j]);
        if(boom[j]%2!=0){
        j++;
        }
    }
    for(j=0;j<n/2;j++){
		printf("%d\n",boom[j]-boom[n-j-1]);
	}

    if(n%2!=0){
        printf("%d\n",boom[(n+1)/2]);
    }return 0;
}
