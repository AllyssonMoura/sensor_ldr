void setup(){
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  Serial.begin(9600);
}

void loop(){
  delay(500);
  int valorLido = analogRead(A0);
  Serial.println("Valor Lido: " + (String)valorLido);
  
  if(valorLido < 800) {
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
}