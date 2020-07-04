
int x = 2;    // input from the IR sensor output 
int y = 3;    // input from the IR sensor output  
int outPin1 = 6;      // RED LED facing the road
int outPin2 = 13;     // BUZZER facing the road
int outPin3 = 8;      // GREEN LED facing the road
int outPin4 = 9;      // GREEN LED facing the railway track
int outPin5 = 10;     // RED LED facing the railway track
void setup(){
  pinMode(outPin1, OUTPUT);
  pinMode(outPin2, OUTPUT);
  pinMode(outPin3, OUTPUT);
  pinMode(outPin4, OUTPUT);
  pinMode(outPin5, OUTPUT);  
  pinMode(x, INPUT);
  pinMode(y, INPUT);
}
void loop() {
  if ( ((digitalRead(x) == HIGH)) && ((digitalRead(y) == LOW)) )              //condition 1, Train crossing first sensor
  {
    digitalWrite (outPin1, HIGH); //RED LED facing the road turns ON
    digitalWrite (outPin2, HIGH);//BUZZER turns ON 
    digitalWrite (outPin3, LOW); //GREEN LED facing the road stays OFF
    digitalWrite (outPin4, HIGH);//GREEN LED facing the railway track turns ON
    digitalWrite (outPin5, LOW); //RED LED facing the railway track stays OFF  
  }
  if ( ((digitalRead(x) == LOW)) && ((digitalRead(y) == HIGH)) )              //condition 1, Train crossing second sensor
  {
    digitalWrite (outPin1, LOW); //RED LED facing the road turns OFF
    digitalWrite (outPin2, LOW); //BUZZER turns OFF
    digitalWrite (outPin3, HIGH); //GREEN LED facing the road turns ON
    digitalWrite (outPin4, LOW);//FREEN LED facing the road track OFF
    digitalWrite (outPin5, HIGH);//RED LED facing the railway track turns ON   
  }
  else
  {
    digitalWrite (outPin1, LOW);
    digitalWrite (outPin2, LOW);
    digitalWrite (outPin3, LOW); 
    digitalWrite (outPin4, LOW);
    digitalWrite (outPin5, LOW); 
  }
 
}
