//0mV + 10mV/C

float temp;
int sensorPin = A1;
unsigned long time;

void setup() {
    Serial.begin(115200);
    pinMode(sensorPin, INPUT);
    // digitalWrite(sensorPin, HIGH);
}

void loop() {
    //time = millis();
    //Serial.print("<");
    //Serial.print(time);  
    temp = getTemp();
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println("°C");
    delay(3000);
}

float getTemp() {
    float reading = analogRead(sensorPin);
    //Serial.print(": Reading: ");
    //Serial.print(reading);
    float percent = reading/1023;
    //Serial.print(", percent: ");
    //Serial.print(percent);
    float volts = percent*5;
    //Serial.print(", volts: ");
    //Serial.print(volts);
    //Serial.print("> ");
    return volts*100.0;
}


