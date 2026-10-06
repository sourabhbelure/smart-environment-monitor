#include <stdio.h>
#include "sensor_data.h"

int main()
{
    SensorData readings[5];

    readings[0].temperature = 27.5;
    readings[0].humidity = 60;
    readings[0].battery = 95;

    readings[1].temperature = 28.0;
    readings[1].humidity = 62;
    readings[1].battery = 94;

    readings[2].temperature = 29.2;
    readings[2].humidity = 64;
    readings[2].battery = 93;

    readings[3].temperature = 30.1;
    readings[3].humidity = 66;
    readings[3].battery = 92;

    readings[4].temperature = 29.5;
    readings[4].humidity = 65;
    readings[4].battery = 91;
    printf("Environmental Sensor Data\n");

    for (int i=0;i<5;i++){
    printf("READING %d --->",i+1);
    printf("Temperature: %.2f C\n", readings[i].temperature);
    printf("Humidity: %.2f %%\n", readings[i].humidity);
    printf("Battery: %d %%\n", readings[i].battery);
    }
    float avg=readings[0].temperature;
    for (int j=1;j<5;j++)
    avg+=readings[j].temperature;
printf("AVERAGE TEMPERATURE IS : %.2f",avg/5.00);
    return 0;
}
