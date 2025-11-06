#include <stdio.h>
int main()
{
    float length, breadth;
    printf("Enter length\n");
    scanf("%f", &length);
    printf("Enter breadth\n");
    scanf("%f", &breadth);
    printf("the Area of the ractangle is %f\n", length*breadth);
    printf("the Peremeter of the ractangle is %f\n", 2*(length+breadth));
    return 0;
}