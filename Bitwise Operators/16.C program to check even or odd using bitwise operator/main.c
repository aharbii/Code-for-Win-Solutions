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
        printf("%d is odd\n", number);
    }
    else
    {
        printf("%d is even\n", number);
    }
    

    return 0;
}

