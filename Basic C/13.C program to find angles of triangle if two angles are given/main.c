#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_angle;
    int second_angle;
    printf("Enter first angle: ");
    scanf("%d", &first_angle);

    printf("Enter second angle: ");
    scanf("%d", &second_angle);

    int third_angle = 180 - (first_angle + second_angle);
    printf("Third angle = %d\n", third_angle);
    
    return 0;
}