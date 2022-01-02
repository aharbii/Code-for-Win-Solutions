#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input uppel limit: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i +=2;
    }
    
    return 0;
}