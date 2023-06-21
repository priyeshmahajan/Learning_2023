#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time diffTime;
    
    // Convert all time values to seconds
    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    
    // Calculate the difference in seconds
    int diffSeconds = endSeconds - startSeconds;
    
    // Convert the difference back to hours, minutes, and seconds
    diffTime.hours = diffSeconds / 3600;
    diffTime.minutes = (diffSeconds % 3600) / 60;
    diffTime.seconds = (diffSeconds % 3600) % 60;
    
    return diffTime;
}

int main() {
    struct Time startTime, endTime, diffTime;

    // Read the start time
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Read the end time
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the difference between the time periods
    diffTime = calculateTimeDifference(startTime, endTime);

    // Display the difference
    printf("\nTime difference: %02d:%02d:%02d\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}
