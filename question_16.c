#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            printf("Largest is %d\n", n1);
        }
        else
        {
            printf("Largest is %d\n", n3);
        }
    }
    else
    {
        if (n2 >= n3)
        {
            printf("Largest is %d\n", n2);
        }
        else
        {
            printf("Largest is %d\n", n3);
        }
    }
    return 0;
}