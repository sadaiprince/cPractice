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
