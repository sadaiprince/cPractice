#include<stdio.h>
main(){
    float area, perimeter, width, length;
    printf("Enter the width and length of your rectangle: ");
    scanf("%f %f",&width, &length);
    area = width * length;
    perimeter = 2* (width + length);
    printf("Area = %.2f \nPerimeter = %f", area, perimeter);

}


