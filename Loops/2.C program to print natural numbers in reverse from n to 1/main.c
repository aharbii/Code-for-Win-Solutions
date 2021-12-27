#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input uppel limit: ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d\n", n--);
    }
    
    return 0;
}