
#include<stdio.h>
#define PI 3.1416
main(){
    float area, circum, radius;
    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2* PI * radius;
    printf("Area = %.2f \nCircumference = %.2f", area, circum);
}
