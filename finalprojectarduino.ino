void setup() {
  Serial.begin(9600);
  Serial.println("Time_ms,Raw_ADC,Voltage_V");
}

void loop() {
  unsigned long time_ms = millis();   // time since program started
  int adcValue = analogRead(A0);      // read probe
  float voltage = adcValue * (5.0 / 1023.0);

  Serial.print(time_ms);
  Serial.print(",");
  Serial.print(adcValue);
  Serial.print(",");
  Serial.println(voltage);

  delay(1000);
}
