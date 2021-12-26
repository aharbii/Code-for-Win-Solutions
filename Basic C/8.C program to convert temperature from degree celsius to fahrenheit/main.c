#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius;
    printf("Enter temperature in celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit =  (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2lf F\n", fahrenheit);

    return 0;
}