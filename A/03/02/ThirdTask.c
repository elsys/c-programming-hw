#include <stdio.h>

const float INCREASE = 0.02f;

int main(){
    int n; 
    int m; 
    int k; 

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    float discount = 0.0f;
    int total = 0, b = k, price;

    for(int i = 0; i < n; i++){
        if(i == k){
            discount += INCREASE;
            k += b;
        }

    price = m - (discount * m);
    total += price;

    }
    
    printf("%d\n", total);

    return 0;
}
