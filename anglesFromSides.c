#include<stdio.h>
#include<math.h>

#define PI 3.1416 
int main()
{
    float a,b,c;
    printf("Enter side a: ");
    scanf("%f",&a);
    printf("Enter side b: ");
    scanf("%f",&b);
    printf("Enter side c: ");
    scanf("%f",&c);
    
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
    float A,B,C;
    A=acos(((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*(180/PI);
    B=acos(((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)))*(180/PI);
    C=acos(((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a)))*(180/PI);
    printf("Angle correspondent of a: %.2f Degree\n",A);
    printf("Angle correspondent of b: %.2f Degree\n",B);
    }
    else{
        printf("Entered value cannot create a triangle. Please try again.");
    }
    return 0;
}
