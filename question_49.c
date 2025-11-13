#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = (rows - i + 1); j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}