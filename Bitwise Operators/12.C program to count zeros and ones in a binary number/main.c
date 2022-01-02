#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int bits = (sizeof(number) * 8);
    int ones = 0;
    int zeros = 0;
    for (int i = 0; i < bits; i++)
    {
        int bit_test = 1 << i;
        bit_test &= number;
        if (bit_test)
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }

    printf("ones  = %d\n", ones);
    printf("zeros = %d\n", zeros);
}