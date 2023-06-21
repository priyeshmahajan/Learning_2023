#include <stdio.h>
#include <limits.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = INT_MAX;
    *max = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int min = 0;
    int max = 0;
    
    findMinMax(arr, size, &min, &max);
    
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    
    return 0;
}
