#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Extracting individual digits from the number
    int digit1 = (num / 1000) % 10;
    int digit2 = (num / 100) % 10;
    int digit3 = (num / 10) % 10;
    int digit4 = num % 10;

    // Comparing adjacent digits and deleting the smaller digit
    if (digit1 >= digit2 && digit1 >= digit3 && digit1 >= digit4) {
        largest = (digit2 * 1000) + (digit3 * 100) + (digit4 * 10);
    } else if (digit2 >= digit3 && digit2 >= digit4) {
        largest = (digit1 * 1000) + (digit3 * 100) + (digit4 * 10);
    } else if (digit3 >= digit4) {
        largest = (digit1 * 1000) + (digit2 * 100) + (digit4 * 10);
    } else {
        largest = (digit1 * 1000) + (digit2 * 100) + (digit3 * 10);
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);
    printf("Largest number after deleting a digit: %d\n", largest);

    return 0;
}




/*  ***************************OUTPUT********************************
Largest number after deleting a digit: 872
Largest number after deleting a digit: 986
*/