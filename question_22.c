#include <stdio.h>

int main()
{
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);

    if (sp > cp)
    {
        double profit = sp - cp;
        double profit_percentage = (profit / cp) * 100.0;

        printf("Profit %.0f%%\n", profit_percentage);
    }
    else if (cp > sp)
    {
        double loss = cp - sp;
        double loss_percentage = (loss / cp) * 100.0;

        printf("Loss %.0f%%\n", loss_percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}