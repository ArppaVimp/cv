// the setup function runs once when you press reset or power the board
void setup() {
  // asetetaan pinnit outputeiksi.
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

// vilkutellaan ledejä
void loop() 
{
  digitalWrite(9, HIGH);   // 
  delay(300);                       // 
  digitalWrite(9, LOW);    // 
  delay(300); //
   
  digitalWrite(11, HIGH);   // 
  delay(300);                       // 
  digitalWrite(11, LOW);    // 
  delay(300);                       // 
  
  digitalWrite(13, HIGH);   // 
  delay(300);                       // 
  digitalWrite(13, LOW);    // 
  delay(300);                       // 

  
}
