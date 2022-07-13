int entry=0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}


void loop() {

  if (Serial.available()>0){
   
   entry=Serial.read();
   if (entry=='0'){
    int sensorValue0 = analogRead(A0);
    float voltage0 = sensorValue0 * (5.0 / 1023.0);
    Serial.println(voltage0);
     
   }
    
  if (entry=='1'){
    int sensorValue1 = analogRead(A1);
    float voltage1 = sensorValue1 * (5.0 / 1023.0);
    Serial.println(voltage1);
   }  

  if (entry=='2'){
    int sensorValue2 = analogRead(A2);
    float voltage2 = sensorValue2 * (5.0 / 1023.0);
    Serial.println(voltage2);
  }

  if (entry=='3'){
    int sensorValue3 = analogRead(A3);
    float voltage3 = sensorValue3 * (5.0 / 1023.0);
    Serial.println(voltage3);
  }

  if (entry=='4'){
    int sensorValue4 = analogRead(A4);
    float voltage4 = sensorValue4 * (5.0 / 1023.0);
    Serial.println(voltage4);
  } 
  
    
 }
}
