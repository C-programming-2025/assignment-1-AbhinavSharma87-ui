
#include <stdio.h>
int main()
{
    int num, week, day;
    printf("enter the number of days: ");
    scanf("%d", &num);
    week = num / 7;
    day = num % 7;
    printf("%d week and %d days", week, day);
    return 0;
}