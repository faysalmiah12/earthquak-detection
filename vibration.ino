int LED_Pin = 13;
int vibr_pin =3;
 
void setup(){
  pinMode(LED_Pin, OUTPUT);
  pinMode(vibr_pin, INPUT); //set vibr_Pin input for measurment
  Serial.begin(9600); //init serial 9600
 // Serial.println("----------------------Vibration demo------------------------");
}
void loop(){
  int val;
  val=digitalRead(vibr_pin);
   
  if (val == 1){
    Serial.println(" vibration detected");
  }
  else{
    Serial.println(" No Vibration");
  }
  delay(500);
}