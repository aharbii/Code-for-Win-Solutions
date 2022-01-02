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
    int new_number = checker | number;
    printf("%d after setting %d bit is %d\n", number, bit_position, new_number);
    

    return 0;
}