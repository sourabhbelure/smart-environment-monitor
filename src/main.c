#include <stdio.h>
#include "sensor_data.h"
#include "sensor_processing.h"

int main()
{
    SensorData readings[5];
    updateSensorData(&readings[0], 27.5, 60.0, 95);
    updateSensorData(&readings[1], 28.0, 62.0, 94);
    updateSensorData(&readings[2], 29.2, 64.0, 93);
    updateSensorData(&readings[3], 30.1, 66.0, 92);
    updateSensorData(&readings[4], 29.5, 65.0, 91);

   printf("SMART ENVIRONMENT MONITOR\n");
   printf("=========================\n\n");

   for (int i = 0; i < 5; i++) {
        printf("Reading %d\n", i + 1);
        printSensorData(&readings[i]); // Pass the address of the current array slot
        printf("\n");
    }
return 0;
}
