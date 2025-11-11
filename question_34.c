#include <stdio.h>

int main() {
    int n;
    int isPrime = 1; 

    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    }
    
    else {
        for (int i = 2; i * i <= n; i++) {
            
            if (n % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
    }

    if (isPrime == 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}