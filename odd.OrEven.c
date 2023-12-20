#include<stdio.h>
main(){
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);


    if(number == 0){
        printf("0 is 0");
    }
    else if(number % 2 == 0){
        printf("%d is a Even Number.", number);
    }

    else{
        printf("%d is a Odd Number.", number);
}
}
