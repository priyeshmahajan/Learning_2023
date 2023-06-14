/*Problem Statement - Write a function to find if a give character is vowel using switch case statements, 
    - If vowel, return 1
    - If not vowel, return 0;

In main print,
"Vowel" if return value is 1
"Not Vowel" if return value is 1*/

#include <stdio.h>

int isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1; // Vowel
    } else {
        return 0; // Not a vowel
    }
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    int result = isVowel(character);

    if (result == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}
