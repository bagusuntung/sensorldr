int hasilSensorLDR; // Variable untuk sensor LDR

void setup() {
  Serial.begin(9600); // Serial Monitor
  pinMode(8,OUTPUT);  // Set pin 8 sebagai Output
}

void loop() {
  hasilSensorLDR=analogRead(0); // Hasil LDR = Hasil input pada pin A0
  if (hasilSensorLDR<350)       // (Kurang Cahaya)
{
    digitalWrite(8,HIGH);       // Aktifkan Relay atau LED
}
  else digitalWrite(8,LOW);     // Jika tidak, Matikan Relay/LED
  Serial.println(hasilSensorLDR); // Print hasil LDR ke Serial Monitor
  delay(500);                   // Delay setengah detik
}
