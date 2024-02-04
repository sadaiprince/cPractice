//The program to find the sum of all numbers that is greater than 100 and less than 200 and also it should divided by 7
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i = 100; i<200;i++){
        if(i%7==0){
            sum= sum+i;
        }
    }
    printf("Sum is %d",sum);
    return 0;
}
