#include <stdio.h>

int main() {
    long long num;
    long long original_num;
    long long product = 1;
    int digit;

    printf("Enter a number:\n");

    if (scanf("%lld", &num) == 1) {
        
        original_num = num;

        if (num < 0) {
            num = -num;
        }

        if (num == 0) {
            product = 1;
        } else {
            while (num > 0) {
                digit = num % 10;
                
                if (digit % 2 != 0) {
                    product = product * digit;
                }
                
                num = num / 10;
            }
        }

        printf("The product of the odd digits of %lld is: %lld\n", original_num, product);

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}