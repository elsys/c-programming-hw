#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    int ld;
    int length = 0;
    float avg;

    scanf("%d", &n);

    while(n > 0){
        ld = n % 10;

        sum += ld;

        length++;
        
        n /= 10;
    }

    avg = sum / length;

    if(avg > 7.0){
        printf("heavy\n");    
    }else{
        printf("light\n");
    }

    return 0;
}
