#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BITS ((sizeof(unsigned int) * 8) - 1)

int main()
{
    unsigned int number;
    printf("Enter number: ");
    scanf("%d", &number);

    unsigned int rotation;
    printf("Enter rotation: ");
    scanf("%d", &rotation);
    
    unsigned int right_rotation = number;
    unsigned int left_rotation = number;

    for (int i = 0; i < rotation; i++)
    {
        unsigned int bit_test = 1 << i;
        bit_test &= number;
        right_rotation >>= 1;
        bit_test <<= BITS;
        right_rotation |= bit_test;

        bit_test = 1 << (BITS - i);
        bit_test &= number;
        left_rotation <<= 1;
        bit_test >>= (BITS - i);
        left_rotation |= bit_test;
    }

    printf("%d left rotated %d times = %d \n",number, rotation, left_rotation);
    printf("%d right rotated %d times = %d\n",number, rotation, right_rotation);
}