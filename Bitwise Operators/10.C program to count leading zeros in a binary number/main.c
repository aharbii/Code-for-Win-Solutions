#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int bits = (sizeof(number) * 8);
    int count = 0;
    _Bool get_ones = 0;
    for (int i = 0; i < bits; i++)
    {
        int bit_test = 1 << i;
        bit_test &= number;
        if (!bit_test)
        {
            count++;
        }
        else
        {
            count = 0;
        }
    }

    printf("Leading zeros = %d\n", count);
}