#define sensibilidade 200
#define emg 0

int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int IN1i = 8;
int IN2i = 9;
int IN3i = 10;
int IN4i = 11;

void setup() {
Serial.begin(115200);

pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(IN1i, OUTPUT);
pinMode(IN2i, OUTPUT);
pinMode(IN3i, OUTPUT);
pinMode(IN4i, OUTPUT);

}

void loop() {
int value = analogRead(emg);
if (value >= sensibilidade){

fechar();
delay(500);

}else{

abrir();
delay(500);

}
Serial.println(value);
}

void fechar(){
digitalWrite(IN1, 1);
digitalWrite(IN2, 0);
digitalWrite(IN3, 1);
digitalWrite(IN4, 0);

digitalWrite(IN1i, 1);
digitalWrite(IN2i, 0);
digitalWrite(IN3i, 1);
digitalWrite(IN4i, 0);
}

void abrir(){
digitalWrite(IN1, 0);
digitalWrite(IN2, 1);
digitalWrite(IN3, 0);
digitalWrite(IN4, 1);

digitalWrite(IN1i, 0);
digitalWrite(IN2i, 1);
digitalWrite(IN3i, 0);
digitalWrite(IN4i, 1);
}