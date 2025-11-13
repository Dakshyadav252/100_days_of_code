#include <stdio.h>

int main() {
    int block_sizes[] = {1, 3, 5, 3, 1};
    int num_blocks = 5;
    int i, j;

    for (i = 0; i < num_blocks; i++) {
        
        for (j = 0; j < block_sizes[i]; j++) {
            printf("*\n");
        }
        
        if (i == num_blocks - 1) {
            printf("\n\n");
        } else {
            printf("\n");
        }
    }

    return 0;
}