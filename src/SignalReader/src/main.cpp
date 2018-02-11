#include <Arduino.h>

#define DTR 5
#define RTS 7

#define PLOTTER

int olddtr = 0;
int oldrts = 0;

long ciclo = 0;
void setup()
{
    Serial.begin(9600);

    // put your setup code here, to run once:
    pinMode(DTR, INPUT);
    pinMode(RTS, INPUT);

    olddtr = digitalRead(DTR);
    oldrts = digitalRead(RTS);

    Serial.print(ciclo);
    Serial.print("\t\tDTR: ");
    Serial.print(olddtr);
    Serial.print("\t\t");
    Serial.println(micros());

    Serial.print(ciclo);
    Serial.print("\t\tRTS: ");
    Serial.print(oldrts);
    Serial.print("\t\t");
    Serial.println(micros());
}

void loop()
{
    // put your main code here, to run repeatedly:
    int dtr = digitalRead(DTR);
    int rts = digitalRead(RTS);

    #ifdef PLOTTER
    
        Serial.print(dtr);
        Serial.print(",");
        Serial.println(rts);

    #else

    if (olddtr != dtr)
    {
        Serial.print(ciclo);
        Serial.print("\t\tDTR: ");
        Serial.print(dtr);
        Serial.print("\t\t");
        Serial.println(micros());
        olddtr = dtr;
    }

    if (oldrts != rts)
    {
        Serial.print(ciclo);
        Serial.print("\t\tRTS: ");
        Serial.print(rts);
        Serial.print("\t\t");
        Serial.println(micros());
        oldrts = rts;
    }
    
    #endif

    ciclo++;
}