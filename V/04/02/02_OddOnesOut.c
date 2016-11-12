#include<stdio.h>

int main(){

	int n;
	scanf("%d", &n);

	int arr[100];
	int odd[n];
	int j = 0;

	for(int i = 0; i < n;){
		scanf("%d", &arr[j]);
		if(arr[j]%2!=0) {
			odd[i]=arr[j];
			i++;
		}
	}

	

return 0;
}
