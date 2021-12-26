#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int height;

    printf("Enter base:   ");
    scanf("%d", &base);

    printf("Enter height: ");
    scanf("%d", &height);

    double area = (base * height) / 2;
    printf("Area of triangle = %.2lf sq. units\n", area);

    return 0;
}