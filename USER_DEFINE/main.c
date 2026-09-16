#include <stdio.h>
/*
• Create a data type to store temperature, humidity, and pressure of one sensor.
• Store values and print all three values.
*/

struct Sensor_Data
{
    float temperature;
    int humidity;
    int pressure;
};


//
struct adc_Configuration
{
    int channel;
    int resolution;
    int sampling_time;
};
//05
enum FanState
{
    OFF,
    ON
};



//3 

typedef unsigned int uint32_t;
typedef unsigned short int uint16_t;
typedef unsigned char uint8_t;

union data
{
    uint32_t a;
    uint16_t b;
    uint8_t c;
};
// typedf + strcut
typedef struct
{
    int temperature;
    int pressure;
    int humidity;
} Sensor;


//07
enum SystemState
{
    INIT,
    IDLE,
    RUNNING,
    ERROR
};


//01 sensir data
void sensor_data(struct Sensor_Data sensor)
{
    printf("Temperature: %.2f\nHumidity: %d\nPressure: %d\n",
           sensor.temperature, sensor.humidity, sensor.pressure);
}
// AD  CONFIG
void adc_config(struct adc_Configuration adc1 )
{
    printf("channel: %d\nresolution:%d\nsampling_time:%d\n",adc1.channel,adc1.resolution,adc1.sampling_time);
}

//3 UNION
void same_memory(union data data)
{
    data.a = 100;
    printf("a = %X\n", data.a);

    data.b = 50;
    printf("b = %X\n", data.b);

    data.c =20;
    printf("c=%X\n", data.c);
}




// 04

void sensor_data1( Sensor sensor1)
{
    printf("Temperature: %.2f\nHumidity: %d\nPressure: %d\n",
           sensor1.temperature, sensor1.humidity, sensor1.pressure);

}

// enum
void enum_func(enum FanState f1)
{
    
    f1 = OFF;
    printf("Fan State = %d\n", f1);

    f1 = ON;
    printf("Fan State = %d\n",f1);
}

//07
void enum_func2(enum SystemState state)
{ 
    state = RUNNING;

    switch(state)
    {
        case INIT:
            printf("System is initializing\n");
            break;

        case IDLE:
            printf("System is idle\n");
            break;

        case RUNNING:
            printf("System is running\n");
            break;

        case ERROR:
            printf("System has an error\n");
            break;

        default:
            printf("Unknown state\n");
    }

   

}
int main()
{
    struct Sensor_Data sensor = {25.5f, 60, 1013};
    struct adc_Configuration adc1={2,12,15};
    union data data1;
    Sensor sensor1= {25.5f, 60, 1013};
    enum FanState f1;
    enum SystemState state;



    adc_config(adc1);

    sensor_data(sensor);
    same_memory(data1);
    sensor_data1(sensor1);
    enum_func(f1);
    enum_func2(state);
    
}