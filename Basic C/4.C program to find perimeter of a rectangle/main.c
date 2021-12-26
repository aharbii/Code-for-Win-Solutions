#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int width;
    int length;

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Enter length: ");
    scanf("%d", &length);

    int perimeter;
    perimeter = (width + length) * 2;

    printf("Perimeter of rectangle = %d units\n", perimeter);

    return 0;
}