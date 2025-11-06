#include <stdio.h>
int main()
{
    printf("Enter the temperature celsius\n ");
    float c, f;
    scanf("%f", &c);
    printf("Temperature converted from celsius to Fahrenheit %f", (c*1.8)+32);
    return 0;
}