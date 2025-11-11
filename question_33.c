#include <stdio.h>

int main() {
    int n, original_number, digit;
    int num_digits = 0;
    long long sum = 0;
    int temp;

    scanf("%d", &n);

    original_number = n;

    temp = n;
    do {
        temp = temp / 10;
        num_digits++;
    } while (temp != 0);

    temp = n;
    
    while (temp != 0) {
        digit = temp % 10;

        long long power_of_digit = 1;
        for (int i = 0; i < num_digits; i++) {
            power_of_digit = power_of_digit * digit;
        }

        sum = sum + power_of_digit;
        
        temp = temp / 10;
    }

    if (sum == original_number) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}