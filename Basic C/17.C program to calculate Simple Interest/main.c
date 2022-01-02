#include <stdio.h>
#include <stdlib.h>

int main()
{
    double principle, time, rate;
    printf("Enter principle: ");
    scanf("%lf", &principle);

    printf("Enter time: ");
    scanf("%lf", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    double interest = (principle * time * rate) / 100;
    printf("Simple interest = %.2lf\n", interest);

    return 0;
}