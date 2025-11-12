#include <stdio.h>

int main() {
    long long num;
    long long original_num;
    long long swapped_num;
    long long first_digit, last_digit, middle_part;
    long long power;
    int sign = 1;

    printf("Enter a number:\n");

    if (scanf("%lld", &num) == 1) {
        
        original_num = num;

        if (num < 0) {
            sign = -1;
            num = -num;
        }

        if (num < 10) {
            swapped_num = num;
        
        } else {
            last_digit = num % 10;
            
            long long temp = num;
            power = 1;
            
            while (temp >= 10) {
                temp = temp / 10;
                power = power * 10;
            }
            
            first_digit = temp;
            
            middle_part = (num % power) / 10;
            
            swapped_num = (last_digit * power) + (middle_part * 10) + first_digit;
        }

        swapped_num = swapped_num * sign;
        
        printf("The number %lld with its first and last digits swapped is: %lld\n", original_num, swapped_num);

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}