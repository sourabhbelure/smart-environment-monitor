#include <stdio.h>
#include "../include/sensor_processing.h"
#include "../include/sensor_data.h"

//1.fun to update the sensor data using pointers
void updateSensorData(SensorData *sensor, float temperature,float humidity,int battery){
sensor->temperature=temperature;
sensor->humidity=humidity;
sensor->battery=battery;
}

//2.fun to print single sensor reading using pointer
void printSensorData(const SensorData *sensor){
printf("Temperature: %.2f C\n", sensor->temperature);
printf("Humidity: %.2f %%\n", sensor->humidity);
printf("Battery: %d %%\n", sensor->battery);
}

//3.fun to cal avg
float calculateAverageTemperature(const SensorData readings[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += readings[i].temperature; // Access struct member in array
    }
    return sum / size;
}

// 4. Fun to cal highest temp
float findHighestTemperature(const SensorData readings[], int size) {
    float max = readings[0].temperature;
    for (int i = 1; i < size; i++) {
        if (readings[i].temperature > max) {
            max = readings[i].temperature;
        }
    }
    return max;
}

// 5. Function to cal lowest temp
float findLowestTemperature(const SensorData readings[], int size) {
    float min = readings[0].temperature;
    for (int i = 1; i < size; i++) {
        if (readings[i].temperature < min) {
            min = readings[i].temperature;
        }
    }
    return min;

}

