#include <stdio.h>

int Sensor_Read(int *temperature, int *pressure)
{
    *temperature = 35;
    *pressure = 1012;

    return 0;
}

int main()
{
    int temp;
    int pressure;

    Sensor_Read(&temp, &pressure);

    printf("Temperature = %d\n", temp);
    printf("Pressure = %d\n", pressure);

    return 0;
}