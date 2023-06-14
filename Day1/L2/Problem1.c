/*Problem Statement - Write a function to return the greatest of 3 number using if else if.*/

#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    int greatest;

    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }

    return greatest;
}

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    int greatest = findGreatest(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
