#include <stdio.h>
#include <stdlib.h>

int main()
{
    double consumed_units;
    printf("Enter total consumed units: ");
    scanf("%lf", &consumed_units);

    double total_amount = 0;

    if (consumed_units <= 50)
    {
        total_amount = consumed_units * 0.5;
    }
    else if (consumed_units <= 150)
    {
        total_amount = 25 + ((consumed_units - 50) * 0.75);
    }
    else if (consumed_units <= 250)
    {
        total_amount = 100 + ((consumed_units - 150) * 1.2);
    }
    else
    {
        total_amount = 220 + ((consumed_units - 250) * 1.5);
    }
    
    total_amount *= 1.2;

    printf("Total Bill: $%.2lf\n", total_amount);

    return 0;
}