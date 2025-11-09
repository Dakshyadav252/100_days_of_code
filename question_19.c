#include <stdio.h>
int main()
{
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }
    return 0;
}