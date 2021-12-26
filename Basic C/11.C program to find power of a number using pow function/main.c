#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base;
    printf("Enter number: ");
    scanf("%d", &base);
    int exponent;
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int power = pow(base, exponent);
    printf("%d ^ %d = %d\n", base, exponent, power);
    
    return 0;
}