#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    double diameter = 2 * radius;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("Diameter      = %.2lf\n", diameter);
    printf("Circumference = %.2lf\n", circumference);
    printf("Area          = %.2lf\n", area);
    return 0;
}