#include <stdio.h>

int main()
{
    int units;
    double bill = 0.0;

    scanf("%d", &units);

    if (units <= 100)
    {

        bill = units * 5.0;
    }
    else if (units <= 200)
    {

        bill = 100 * 5.0;
        bill += (units - 100) * 7.0;
    }
    else if (units <= 300)
    {

        bill = 100 * 5.0;
        bill += 100 * 7.0;
        bill += (units - 200) * 10.0;
    }
    else
    {

        bill = 100 * 5.0;
        bill += 100 * 7.0;
        bill += 100 * 10.0;
        bill += (units - 300) * 12.0;
    }

    printf("Bill: ₹%.0f\n", bill);

    return 0;
}