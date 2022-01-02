#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int bits = (sizeof(number) * 8);
    int highest_order = 0;
    _Bool get_highest = 0;
    for (int i = 0; i < bits; i++)
    {
        int bit_test = 1 << i;
        bit_test &= number;
        if (bit_test)
        {
            highest_order = i;
            get_highest = 1;
        }
        
    }
    
    if (get_highest)
    {
        printf("Highest order set bit of a number: %d\n", highest_order);
    }
    else
    {
        printf("Number is zero\n");
    }

    return 0;
}