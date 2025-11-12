#include <stdio.h>

int main() {
    long long num;
    long long sum = 0;
    long long i;

    printf("Enter a number:\n");

    if (scanf("%lld", &num) == 1) {

        if (num <= 0) {
            printf("Not perfect number\n");
            return 0;
        }

        for (i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }

        if (sum == num) {
            printf("Perfect number\n");
        } else {
            printf("Not perfect number\n");
        }

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}