/*Problem statement - Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.*/

#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;
    float result;

    // Read Operand 1
    printf("Enter Number 1: ");
    scanf("%f", &operand1);

    // Read Operator
    printf("Enter the operator: ");
    scanf(" %c", &operator);

    // Read Operand 2
    printf("Enter Number 2: ");
    scanf("%f", &operand2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check if the second operand is not zero
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero!\n");
                return 1; // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1; // Exit the program with an error code
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
