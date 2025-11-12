#include <stdio.h>

int main() {
    long long num;
    long long original_num;
    int sum = 0;
    int digit;

    printf("Enter a number:\n");

    if (scanf("%lld", &num) == 1) {
        
        original_num = num;

        if (num < 0) {
            num = -num;
        }

        if (num == 0) {
            sum = 0;
        } else {
            while (num > 0) {
                digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }
        }

        printf("The sum of the digits of %lld is: %d\n", original_num, sum);

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}
