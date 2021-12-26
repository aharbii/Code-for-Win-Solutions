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

    int area;
    area = width * length;

    printf("Area of rectangle = %d square units\n", area);

    return 0;
}