//0mV + 10mV/C

float temp;
int sensorPin = A1;
    
void setup() {
    Serial.begin(115200);
    pinMode(sensorPin, INPUT);
}

void loop() {
    temp = getTemp();
    Serial.print("Temperature: ");
    Serial.println(temp);
    delay(3000);
}

float getTemp() {
    float reading = analogRead(sensorPin);
    float percent = reading/1023;
    float volts = percent*5;
    return 100*volts;    
}

