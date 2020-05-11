#include <math.h>

const int B = 4275;
const int R0 = 100000;
const int pinTempSensor = A0;

const int pinAdc = A3;

#if defined(ARDUINO_ARCH_AVR)
#define debug  Serial
#elif defined(ARDUINO_ARCH_SAMD) ||  defined(ARDUINO_ARCH_SAM)
#define debug  SerialUSB
#else
#define debug  Serial
#endif

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int a = analogRead(pinTempSensor);

    float R = 1023.0/a-1.0;
    R = R0*R;

    float temperature = 1.0/(log(R/R0)/B+1/298.15)-273.15; // convert to temperature via datasheet

    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(pinAdc);
    }

    sum >>= 5;
    
    Serial.print("Temperature");
    Serial.print(",");
    Serial.println(sum);
    delay(5000);
}
