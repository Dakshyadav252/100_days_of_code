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
            if (i == 1) {
                sum = sum + 1.0;
            } else {
                numerator = (double)(2 * i - 1);
                denominator = (double)(2 * i);
                sum = sum + (numerator / denominator);
            }
        }

        printf("Approximate sum: %.1f\n", sum);

    } else {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    return 0;
}