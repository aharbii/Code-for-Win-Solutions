#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int bits = (sizeof(number) * 8);
    int lowest_order = 0;
    _Bool get_lowest = 0;
    for (int i = 0; (i < bits) && (!get_lowest); i++)
    {
        int bit_test = 1 << i;
        bit_test &= number;
        if (bit_test)
        {
            lowest_order = i;
            get_lowest = 1;
        }
        
    }
    
    if (get_lowest)
    {
        printf("lowest order set bit of a number: %d\n", lowest_order);
    }
    else
    {
        printf("Number is zero\n");
    }
    return 0;
}