#include <stdio.h>

float calculateAverage(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return (float)sum / size;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0;
    float average = 0.0;
    
    // Calculate the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    // Calculate the average
    average = calculateAverage(arr, size);
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    
    return 0;
}
