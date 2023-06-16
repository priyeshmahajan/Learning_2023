#include <stdio.h>
#include <limits.h>

void findMinMaxDigits(int n, int numbers[]) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        
        while (num != 0) {
            int digit = num % 10;
            
            if (digit < smallest) {
                smallest = digit;
            }
            
            if (digit > largest) {
                largest = digit;
            }
            
            num /= 10;
        }
    }
    
    if (smallest == INT_MAX || largest == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int numbers[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    findMinMaxDigits(n, numbers);
    
    return 0;
}




/* *******************OUTPUT******************************
Smallest Digit: 1
Largest Digit: 6
*/