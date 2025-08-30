#include <stdio.h>

int main(){
    float c,f;
    printf("Enter temperature in celcius");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Fahrenheit: %f\n",f); 
    return 0;
}