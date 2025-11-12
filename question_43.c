#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    int i;
    
    if (n == 0) {
        return 1;
    }
    
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    long long num;
    long long original_num;
    long long temp_num;
    long long sum = 0;
    int digit;

    printf("Enter a number:\n");

    if (scanf("%lld", &num) == 1) {

        original_num = num;
        
        if (num <= 0) {
             printf("The number %lld is Not a strong number\n", original_num);
             return 0;
        }

        temp_num = num;

        while (temp_num > 0) {
            digit = temp_num % 10;
            sum = sum + factorial(digit);
            temp_num = temp_num / 10;
        }

        if (sum == original_num) {
            printf("The number %lld is a Strong number\n", original_num);
        } else {
            printf("The number %lld is Not a strong number\n", original_num);
        }

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}
