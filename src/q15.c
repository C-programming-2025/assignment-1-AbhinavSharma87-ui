
#include <stdio.h>

int main()
{
    int x, check;
    printf("enter a number: ");
    scanf("%d", &x);
    check = x % 2 == 0 && x > 0;
    printf("%d", check);
    return 0;
}