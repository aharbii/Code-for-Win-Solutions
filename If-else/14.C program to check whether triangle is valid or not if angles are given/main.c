#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int first_angle;
    unsigned int second_angle;
    unsigned int third_angle;

    printf("Enter first angle: ");
    scanf("%d", &first_angle);
    
    printf("Enter second angle: ");
    scanf("%d", &second_angle);
    
    printf("Enter third angle: ");
    scanf("%d", &third_angle);

    int angles_sum = first_angle + second_angle + third_angle;

    if (angles_sum == 180)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }
    
    return 0;
}