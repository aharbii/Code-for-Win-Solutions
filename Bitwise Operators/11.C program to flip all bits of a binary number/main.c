#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int flipped = ~number;
    printf("%d after flipping is %d\n", number, flipped);

    return 0;
}