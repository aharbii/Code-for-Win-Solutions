#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int notes_500 = 0;
    int notes_100 = 0;
    int notes_50 = 0;
    int notes_20 = 0;
    int notes_10 = 0;
    int notes_5 = 0;
    int notes_2 = 0;
    int notes_1 = 0;

    if (number >= 500)
    {
        notes_500 += (number / 500);
        number %= 500;
    }
    if (number >= 100)
    {
        notes_100 += (number / 100);
        number %= 100;
    }
    if (number >= 50)
    {
        notes_50 += (number / 50);
        number %= 50;
    }
    if (number >= 20)
    {
        notes_20 += (number / 20);
        number %= 20;
    }
    if (number >= 10)
    {
        notes_10 += (number / 10);
        number %= 10;
    }
    if (number >= 5)
    {
        notes_5 += (number / 5);
        number %= 5;
    }
    if (number >= 2)
    {
        notes_2 += (number / 2);
        number %= 2;
    }
    if (number >= 1)
    {
        notes_1 += number;
    }
    
    printf("Total number of notes: \n");
    printf("500: %d\n", notes_500);
    printf("100: %d\n", notes_100);
    printf("50: %d\n", notes_50);
    printf("20: %d\n", notes_20);
    printf("10: %d\n", notes_10);
    printf("5: %d\n", notes_5);
    printf("2: %d\n", notes_2);
    printf("1: %d\n", notes_1);

    return 0;
}