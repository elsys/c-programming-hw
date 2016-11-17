#include <stdio.h>

	int main(){
	int a,i=1,j=1,flag=0,middle;
	scanf("%d", &a);
	int arr[100];
	int odds[a];
	if(a%2!=0){
	flag=1;
	}
	do{
	scanf("%d",&arr[i]);
		if(arr[i]%2!=0){
		odds[j]=arr[i];
			if(flag==1 && a%i==1){
				middle=arr[i];
//				printf("\n flag=%d,odds=%d",flag,odds[j]);
			}
		j++;
		}
	i++;
	}while(j<=a);
	i=1;
	j--;
	while(i<j){
		odds[i]=odds[i]-odds[j];
		printf("\n%d",odds[i]);
		j--;
		i++;
	}
	
	if(flag==1){
		printf("\n%d",middle);
	}
	return 0;
	}
