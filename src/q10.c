
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("enter two numbers: a,b");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("swapped: a = %d, b = %d", a, b);
    return 0;
}