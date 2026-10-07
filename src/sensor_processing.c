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

