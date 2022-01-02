#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int bit_position;
    printf("Enter bit to check: ");
    scanf("%d", &bit_position);

    int checker = 1 << bit_position;
    int bit_state = checker & number;
    if (bit_state)
    {
        printf("%d Bit of %d is set (1).\n",bit_position, number);
    }
    else
    {
        printf("%d Bit of %d is not set (0).\n",bit_position, number);
    }
    

    return 0;
}