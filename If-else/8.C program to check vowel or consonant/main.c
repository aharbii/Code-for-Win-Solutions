#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c", &c);


    if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z')) 
    {
        if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || 
        (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U'))
        {
            printf("%c is vowel.\n", c);
        }
        else
        {
            printf("%c is consonant.\n", c);
        }
    }
    else
    {
        printf("%c is not alphabet\n", c);
    }
    

    return 0;
}