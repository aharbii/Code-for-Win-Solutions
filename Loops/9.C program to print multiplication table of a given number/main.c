#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d = %d\n", n, i, (n*i));
    }
    
    return 0;
}