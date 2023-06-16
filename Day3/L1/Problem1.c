#include <stdio.h>

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces(2 * (n - i));
        printNumbers(i);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}



/* *******************OUTPUT*************************

1234554321
1234  4321
123    321
12      21
1        1
*/