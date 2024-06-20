int R = 5;
int G = 6;
int B = 7;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(R, HIGH);
  delay(1000);
  digitalWrite(R, LOW);
  
  
  digitalWrite(G, HIGH);
  delay(1000);
  digitalWrite(G, LOW);
  

  digitalWrite(B, HIGH);
  delay(1000);
  digitalWrite(B, LOW);
}
