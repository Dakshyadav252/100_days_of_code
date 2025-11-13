#include <stdio.h>

int is_prime(int num) {
    int i;

    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }

    for (i = 3; i * i <= num; i = i + 2) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    int i;

    printf("Enter the value of n:\n");

    if (scanf("%d", &n) == 1) {

        printf("Prime numbers from 1 to %d are:\n", n);

        for (i = 1; i <= n; i++) {
            if (is_prime(i) == 1) {
                printf("%d ", i);
            }
        }
        printf("\n");

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}