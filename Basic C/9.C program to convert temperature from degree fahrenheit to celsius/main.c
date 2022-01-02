#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celsius =  (fahrenheit -32) * 5 / 9;
    printf("Temperature in celsius = %.2lf C\n", celsius);

    return 0;
}