
/* any code setup here will only run once when we first start
 *  usually used to set things up connected to the arduino
 */

int led = 13;
int button = 1;
void setup() { 
  // put your setup code here, to run once:
  // pin mode to set up if the digial pins are going to be inputs or outputs
  pinMode(pinNumber,INPUT); // this takes input
  pinMode(pinNmumber, OUTPUT); // this pin should be attached to output

  // another way to do this: (better)
  pinMode (led, OUTPUT); // led defined above void setup
  pinMode(button, INPUT);
}

/*
 * runs the loops repeatedly
 * this is where we put the body of the code 
 */

void loop() { // this loop runs infinitely until we unplug the arduino
  // put your main code here, to run repeatedly

  // we are writing a code to turn on the LED
  /*
   * syntax of digitalWrite
   * digitalWrite(Pin Number, HIGH/LOW) HIGH if the voltage is to be 5V, and LOW
   * if the voltage is to be 0V
   */
   
  digitalRead(button); // take care that button should be INPUT in pinMode
  
  digitalWrite(led, LOW);
  delay(1000); // 1 ms delay
  digitalWrite(led, HIGH);
  delay(1000);

 
}

