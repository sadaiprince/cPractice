<<<<<<< HEAD
#include<stdio.h>

main(){
    float number[3];
    printf("Enter 3 Numbers: ");
    for(int j = 0; j<3; j++){
        scanf("%f",&number[j]);
    }
    float largest = number[0];
    for(int i = 0; i<3; i++){
        if(number[i]> largest)
        largest = number[i];
    }
    printf("%.2f is the largest number.",largest);

}
=======
#include<stdio.h>
main(){
    float number[3];
    printf("Enter 3 Numbers: ");
    for(int j = 0; j<3; j++){
        scanf("%f",&number[j]);
    }
    float largest = number[0];
    for(int i = 0; i<3; i++){
        if(number[i]> largest)
        largest = number[i];
    }
    printf("%.2f is the largest number.",largest);

}
>>>>>>> 3e22f0cc92f843da863a418a660a13a97fbaa913
