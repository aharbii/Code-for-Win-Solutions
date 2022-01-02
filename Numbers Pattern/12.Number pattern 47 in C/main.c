#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int digits = 0;
    int number_copy = number;
    while (number_copy > 0)
    {
        digits++;
        number_copy /= 10;
    }

    for (int i = --digits; i >= 0; i--)
    {
        printf("%d\n", number);
        number %= (int) pow(10, i);
    }
    

    return 0;
}