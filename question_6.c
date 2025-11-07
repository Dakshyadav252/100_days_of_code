#include <stdio.h>
int main()
{
int a, b, temp;
printf("Enter any 2 digits:\n");
scanf("%d %d", &a, &b);
temp= a;
a= b;
b= temp;
printf("After swap %d %d\n", a, b);
return 0;
}