void setup() {
  // put your setup code here, to run once:
    float temp;
    float sensorReading;
}

void loop() {
  // put your main code here, to run repeatedly:

    
    sensorReading = getSensorReading
    temp = convert(sensorReading)
    Serial.print("Temperature: "+temp " at " + time)
    delay(3000)
}


