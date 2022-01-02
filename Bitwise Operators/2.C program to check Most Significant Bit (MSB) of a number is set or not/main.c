#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int checker = 1 << ((sizeof(number) * 8) - 1);
    int MSB = checker & number;
    if (MSB)
    {
        printf("Most Significant Bit of %d is set (1).\n", number);
    }
    else
    {
        printf("Most Significant Bit of %d is not set (0).\n", number);
    }
    

    return 0;
}