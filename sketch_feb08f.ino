
void setup() {
  // put your setup code here, to run once:
  rf_setup();
  whl_setup();
  echo_setup();
  stepper_setup();
  Serial.begin(9600);
  Serial.println("setup");
}

boolean bl[9][4] = {
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1},
  {0, 0, 0, 0},
};
unsigned long curTime = 0;
void loop() {
  /*
  // distance measurement
  Serial.print("status: ");
  Serial.println(rf_read());
  Serial.print("distance: ");
  Serial.println(echo_measure());
  */
  /*
  // stepper motor
  // 4096 steps = 360 / 5.625 angle resolution * 64 gear ratio
  for( int j = 0; j < 256; j++ )
  for( int i = 0; i < 8; i++ ) {
    stepper_step(bl[i]);
    // 28BYJ-48 5-Volt Stepper
    // must have slight delay, otherwise the frequency of mcu overlap the step intervals
    // no delay or delay(1) is not okay, but delay(2) is okay
    // for higher speed, use accurate delayMicroseconds(), the us passed in determined the
    // torque of the rotor
    delayMicroseconds(1400);
  }
  stepper_step(bl[8]);
  */
  /*
  Serial.println("lf");
  whl_set(255, 0, 0, 0);
  delay(3000);
  Serial.println("lr");
  whl_set(0, 255, 0, 0);
  delay(3000);
  Serial.println("rf");
  whl_set(0, 0, 255, 0);
  delay(3000);
  Serial.println("rr");
  whl_set(0, 0, 0, 255);
  delay(3000);
  */
  delay(1000);
  
}

/*
void serialEvent() {
  if( Serial.available() > 0 ) {
    String s = Serial.readString();
    Serial.print(s);
    if(s.startsWith("f")) {
      whl_set(255, 0, 255, 0);
      Serial.println("forward");
    }else if(s.startsWith("r")) {
      whl_set(0, 255, 0, 25);
      Serial.println("backward");
    }else {
      whl_set(0, 0, 0, 0);
      Serial.println("stop");
    }
  }
}
*/

