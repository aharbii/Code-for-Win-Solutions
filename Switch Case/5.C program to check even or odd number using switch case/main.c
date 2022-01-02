#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    switch (number % 2)
    {
    case 0:
        printf("%d is even.\n", number);
        break;
    case 1:
        printf("%d is odd.\n", number);
        break;
    default:
        break;
    }
    return 0;
}