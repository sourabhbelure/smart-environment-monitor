#include <stdio.h>
#include "../include/sensor_processing.h"

// 1. Function to find the maximum temperature
int findMaximum(int temp[], int size) {
    int x = temp[0];
    for (int i = 1; i < size; i++) {
        if (x < temp[i]) {
            x = temp[i];
        }
    }
    return x;
}

// 2. Function to find the minimum temperature
int findMinimum(int temp[], int size) {
    int x = temp[0];
    for (int i = 1; i < size; i++) {
        if (x > temp[i]) {
            x = temp[i];
        }
    }
    return x;
}

// 3. Function to calculate the average temperature
float calculateAverage(int temp[], int size) {
    float sum = temp[0];
    for (int i = 1; i < size; i++) {
        sum += temp[i];
    }
    return sum / (float)size;
}

//4.Temperature status checker function
void checkTemperature(int temp) {
    if (temp <= 30) {
        printf("Temperature = %d C, Status: NORMAL\n", temp);
    } else if (temp <= 40) {
        printf("Temperature = %d C, Status: WARNING\n", temp);
    } else {
        printf("Temperature = %d C, Status: CRITICAL\n", temp);
    }
}
