char nombre[10] = "Aduino";//Nuevo nombre
char password[10] = "1234";// DUKTW
char baud = '4';
//pins
int Rueda1a = 11;
int Rueda1b = 10;
int Rueda2a = 9;
int Rueda2b = 8;
int ArmaA = 7;
int ArmaB = 6;

void setup() {
  Serial.begin(9600);
  pinMode(Rueda1a, OUTPUT);
  pinMode(Rueda1b, OUTPUT);
  pinMode(Rueda2a, OUTPUT);
  pinMode(Rueda2b, OUTPUT);
}

void loop() {
  if (Serial.available() >= 1)
  {
    char entrada = Serial.read();
    if (entrada == 'A')
    {
      digitalWrite(Rueda1a, HIGH);
      digitalWrite(Rueda1b, LOW);
      digitalWrite(Rueda2a, HIGH);
      digitalWrite(Rueda2b, LOW);
      Serial.println("Adelante");
      delay(100);
    }
    else if (entrada == 'R')
    {
      digitalWrite(Rueda1b, HIGH);
      digitalWrite(Rueda1a, LOW);
      digitalWrite(Rueda2b, HIGH);
      digitalWrite(Rueda2a, LOW);
      Serial.println("Atrás");
      delay(100);
    }
    else if (entrada == 'D')
    {
      digitalWrite(Rueda1b, LOW);
      digitalWrite(Rueda1a, LOW);
      digitalWrite(Rueda2b, HIGH);
      digitalWrite(Rueda2a, LOW);
      Serial.println("Derecha");
      delay(100);
    }
    else if (entrada == 'I')
    {
      digitalWrite(Rueda1b, HIGH);
      digitalWrite(Rueda1a, LOW);
      digitalWrite(Rueda2b, LOW);
      digitalWrite(Rueda2a, LOW);
      Serial.println("Izquierda");
      delay(100);
    }
    else if (entrada == 'S')
    {
      digitalWrite(Rueda1b, LOW);
      digitalWrite(Rueda1a, LOW);
      digitalWrite(Rueda2b, LOW);
      digitalWrite(Rueda2a, LOW);
      Serial.println("Alto ahí vaquero");
      delay(100);
    }
    else if (entrada == 'K')
    {
      digitalWrite(ArmaA, HIGH);
      digitalWrite(ArmaB,LOW);
    }
    else if (entrada == 'N')
    {
      digitalWrite(ArmaA,LOW);
      digitalWrite(ArmaB,LOW);
    }
  }
}
