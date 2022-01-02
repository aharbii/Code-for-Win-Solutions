#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double principle, time, rate;
    printf("Enter principle: ");
    scanf("%lf", &principle);

    printf("Enter time: ");
    scanf("%lf", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    double interest = principle * pow(1 + (rate / 100), time);
    printf("Simple interest = %.2lf\n", interest);

    return 0;
}