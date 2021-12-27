#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int digits = 0;
    while (number > 0)
    {
        digits++;
        number /= 10;
    }

    printf("Digits = %d\n", digits);
    

    return 0;
}