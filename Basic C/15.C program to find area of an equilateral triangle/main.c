#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int length;
    printf("Enter length: ");
    scanf("%d", &length);

    double area = (sqrt(3) / 4) * pow(length, 2);
    printf("Area = %.2lf sq. units\n", area); 
    return 0;
}