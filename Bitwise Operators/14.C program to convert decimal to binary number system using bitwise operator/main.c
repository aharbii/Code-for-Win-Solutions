/******************************************************************************
 * Sheet.02
 * 
 * Problem.04:
 *      --> Write a program to count the number of 1's in an unsigned 32-bit
 *          integer.
 * 
 * @author: Ahmed Harbi
 * @date:   Dec 31th, 2021
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%u", &number);

    printf("%u in binary is 0b", number);

    for (int i = 31; i >= 0; i--)
    {
        int bit = 1 << i;
        bit = bit & number;
        bit >>= i;
        
        printf("%u", bit);
    }
    printf("\n");

    return 0;
}