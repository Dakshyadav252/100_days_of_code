#include <stdio.h>
#include <string.h>

int main() {
    char binary_num[100];
    char ones_complement[100];
    int i = 0;
    int valid_input = 1;

    printf("Enter a binary number:\n");

    if (scanf("%s", binary_num) == 1) {
        
        while (binary_num[i] != '\0') {
            if (binary_num[i] == '1') {
                ones_complement[i] = '0';
            } else if (binary_num[i] == '0') {
                ones_complement[i] = '1';
            } else {
                valid_input = 0;
                break;
            }
            i++;
        }
        
        ones_complement[i] = '\0';

        if (valid_input) {
            printf("The 1's complement of %s is: %s\n", binary_num, ones_complement);
        } else {
            fprintf(stderr, "Invalid input: Please enter only 1s and 0s.\n");
            return 1;
        }

    } else {
        fprintf(stderr, "Failed to read input.\n");
        return 1;
    }

    return 0;
}