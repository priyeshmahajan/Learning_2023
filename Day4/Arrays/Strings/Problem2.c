#include <stdio.h>

int computeTotalSeconds(int hours, int minutes, int seconds) {
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}

int main() {
    int hours = 2;
    int minutes = 30;
    int seconds = 45;

    int totalSeconds = computeTotalSeconds(hours, minutes, seconds);

    printf("Total Seconds: %d\n", totalSeconds);

    return 0;
}
/*Total Seconds: 9045
*/
