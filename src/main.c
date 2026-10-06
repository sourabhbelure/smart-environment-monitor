#include <stdio.h>
#include "../include/sensor_processing.h"

int main(void) {
    int temperatures[5] = {23, 45, 2, 67, 75};
    int size = 5;

    printf("===== SENSOR MONITOR REPORT =====\n");
    for (int i = 0; i < size; i++) {
        checkTemperature(temperatures[i]);
}
    printf("---------------------------------\n");
    
    // Calling functions from your module
    printf("Maximum Temperature: %d C\n", findMaximum(temperatures, size));
    printf("Minimum Temperature: %d C\n", findMinimum(temperatures, size));
    printf("Average Temperature: %.1f C\n", calculateAverage(temperatures, size));
    printf("=================================\n");

    return 0;
}
