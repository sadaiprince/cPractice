
//the program for finding the quadratic roots of an equation

#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d;
    float x1,x2;
    printf("Enter the value of a and b and c:");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(a==0){
        x1=x2=(-c/b);
        printf("There is only one root, x1=x2=%.3f\n",x1);
    }
    if(d==0){
        x1= -b/2*a;
        printf("There are two equal & real value, x1 = %.3f and x2 = %.3f\n",x1, x1);
    }
    else if(d>0){
        x1= (-b+sqrt(d))/(2*a);
        x2= -(b-sqrt(d))/(2*a);
        printf("Roots are real and unequal, x1= %.3f and x2= %.3f\n",x1,x2);
    }
    else
    printf("The roots aere imajinary");

}



