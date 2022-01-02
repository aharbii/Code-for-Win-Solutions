#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double length;
    printf("Enter length in centimeter: ");
    scanf("%lf", &length);

    double meter = length * 0.01;
    double kilometer = length * 0.00001;

    printf("Length in meter     = %2.2lf m\n", meter);
    printf("Length in kilometer = %2.2lf km\n", kilometer);
    return 0;
}