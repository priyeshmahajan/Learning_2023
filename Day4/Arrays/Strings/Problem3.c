#include <stdio.h>
#include <string.h>

void rotateString(char str[], int positions) {
    int length = strlen(str);
    int effectiveRotations = positions % length;
    char temp[length + 1];

    // Copy characters from the effective rotation position to the end of the string
    strcpy(temp, str + effectiveRotations);

    // Append characters from the beginning of the string to the effective rotation position
    strncat(temp, str, effectiveRotations);

    // Copy the rotated string back to the original string
    strcpy(str, temp);
}

int main() {
    char str[] = "Hello, World!";
    int positions = 5;

    printf("Original string: %s\n", str);

    rotateString(str, positions);

    printf("Rotated string: %s\n", str);

    return 0;
}
/*Original string: Hello, World!
Rotated string: World!Hello, 
*/