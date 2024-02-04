#include<stdio.h>
main(){
    float fah, cel;
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f",&fah);
    cel = ((fah - 32)/9)*5;
    printf("Temperature in Celsius = %.2f ",cel);


}
