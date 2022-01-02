#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number % 2)
    {
        printf("%d is odd.\n", number);
    }
    else
    {
        printf("%d is even.\n", number);
    }
    
    return 0;
}