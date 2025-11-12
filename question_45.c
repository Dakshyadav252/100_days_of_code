#include <stdio.h>

int main() {
    int n;
    int i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms (n):\n");

    if (scanf("%d", &n) == 1) {
        
        if (n < 0) {
             printf("Number of terms cannot be negative.\n");
             return 1;
        }

        for (i = 1; i <= n; i++) {
            numerator = (double)(2 * i);
            denominator = (double)(4 * i - 1);
            sum = sum + (numerator / denominator);
        }

        printf("Approximate sum: %.2f\n", sum);

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}