#ifndef SENSOR_PROCESSING_H
#define SENSOR_PROCESSING_H

// We must include this so the compiler knows what 'SensorData' is
#include "sensor_data.h"

// Function prototypes for pointer-based structure manipulation
void updateSensorData(SensorData *sensor, float temperature, float humidity, int battery);
void printSensorData(const SensorData *sensor);


// 2. Array-based function prototypes (for calculating statistics)
float calculateAverageTemperature(const SensorData readings[], int size);
float findHighestTemperature(const SensorData readings[], int size);
float findLowestTemperature(const SensorData readings[], int size);

#endif

