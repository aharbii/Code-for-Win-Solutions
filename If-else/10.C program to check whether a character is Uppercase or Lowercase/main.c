#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter charcater: ");
    scanf("%c", &c);

    if ((c >= 'a') && (c <= 'z')) 
    {
        printf("%c is lowercase\n", c);
    }
    else if((c >= 'A') && (c <= 'Z'))
    {
        printf("%c is uppercase\n", c);
    }
    else
    {
        printf("%c is not an alphabet\n", c);
    }
    

    return 0;
}