#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter charcater: ");
    scanf("%c", &c);

    if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z')) 
    {
        printf("%c is alphabet\n", c);
    }
    else if((c >= '0') && (c <= '9'))
    {
        printf("%c is digit\n", c);
    }
    else
    {
        printf("%c is special character\n", c);
    }
    

    return 0;
}