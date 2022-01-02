#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c", &c);

    if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z')) 
    {
        printf("%c is alphabet\n", c);
    }
    else
    {
        printf("%c is not alphabet\n", c);
    }

    return 0;
}