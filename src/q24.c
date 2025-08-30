
#include <stdio.h>
#include <math.h>

int main() {
    int n,result;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sqroot = (int)sqrt(n);

    result=  sqroot*sqroot == n;
    printf("%d",result);
    

    return 0;
}