#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter character: ");
    c = getchar();
    getchar();

    (isalpha(c)) ? printf("It's alphabet\n") : printf("It's not alphabet\n");  
    return 0;
}