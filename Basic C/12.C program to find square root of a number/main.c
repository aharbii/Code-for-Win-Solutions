#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    double number;
    printf("Enter number: ");
    scanf("%lf", &number);

    double root = sqrt(number);
    printf("Square root of %.2lf is %.2lf\n", number, root);
    return 0;
}