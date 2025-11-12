#include <stdio.h>

int find_hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers separated by a space:\n");

    if (scanf("%d %d", &num1, &num2) == 2) {
        
        int hcf;
        if (num1 < 0) num1 = -num1;
        if (num2 < 0) num2 = -num2;

        hcf = find_hcf(num1, num2);

        printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    
    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}