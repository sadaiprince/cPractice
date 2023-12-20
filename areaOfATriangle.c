#include<stdio.h>
main(){
    float area,perimeter, side1,side2, height,base;
    printf("Enter length and height: ");
    scanf("%f %f", &base, &height);
    area = (.5 *(base * height));
    printf("%.2f is the area of your triangle",area);
    printf("\n \n");
    printf("Enter other 2 side of this Triangle: ");
    scanf("%f %f", &side1, &side2);
    perimeter = side1 + side2+ base;
    printf("%.2f is the perimeter of Your triangle", perimeter);

}
