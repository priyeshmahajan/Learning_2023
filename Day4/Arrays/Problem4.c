#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int sumEven = 0;
    int sumOdd = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    
    return sumEven - sumOdd;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int difference = calculateDifference(arr, size);
    
    printf("Difference between sum of even and odd elements: %d\n", difference);
    
    return 0;
}
