#include <stdio.h>

long long find_hcf(long long a, long long b) {
    long long temp;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long find_lcm(long long a, long long b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    
    long long abs_a = a;
    long long abs_b = b;
    
    if (abs_a < 0) abs_a = -abs_a;
    if (abs_b < 0) abs_b = -abs_b;
    
    long long hcf = find_hcf(abs_a, abs_b);
    
    return (abs_a / hcf) * abs_b;
}

int main() {
    long long num1, num2;

    printf("Enter two numbers separated by a space:\n");

    if (scanf("%lld %lld", &num1, &num2) == 2) {
        
        long long lcm_result = find_lcm(num1, num2);
        
        printf("The LCM of %lld and %lld is: %lld\n", num1, num2, lcm_result);
    
    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}