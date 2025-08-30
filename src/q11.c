
#include <stdio.h>

int main()
{
    int x, result;
    printf("enter a number: ");
    scanf("%d", &x);
    result = (x+1)*3-10;
    printf("the result is: %d", result);
    return 0;
}