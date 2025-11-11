#include <stdio.h>
int main()
{
int n;
    int reversed_number = 0;
    int remainder;
    int original_number;
    scanf("%d", &n);
    original_number = n;
    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n = n / 10;
    }

if (original_number == reversed_number) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
return 0;
}