#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    printf("Enter number: ");
    scanf("%d", &number);

    unsigned int checker = 1;
    unsigned int LSB = checker & number;
    if (LSB)
    {
        printf("Least Significant Bit of %d is set (1).\n", number);
    }
    else
    {
        printf("Least Significant Bit of %d is not set (0).\n", number);
    }
    

    return 0;
}