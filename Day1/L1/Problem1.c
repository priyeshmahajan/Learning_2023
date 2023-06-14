/*Problem Statement - 1. Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator*/

#include <stdio.h>

// Function to find the biggest of two numbers using if-else
int findBiggestIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to find the biggest of two numbers using ternary operator
int findBiggestTernary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using if-else
    int resultIfElse = findBiggestIfElse(num1, num2);
    printf("Using if-else, the biggest number is: %d\n", resultIfElse);

    // Using ternary operator
    int resultTernary = findBiggestTernary(num1, num2);
    printf("Using ternary operator, the biggest number is: %d\n", resultTernary);

    return 0;
}
