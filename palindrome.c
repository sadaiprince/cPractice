#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Add the digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    
    return 0;