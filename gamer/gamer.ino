ColorLabel katie;
uint32_t dog = 750;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  sparkles(BLUE);
  sparkles(WHITE);
  sparkles(GREEN);
  sparkles(MAGENTA);
  sparkles(WHITE);
  sparkles(CYAN);
}

void sparkles(ColorLabel color){
  LED led;
  Timer timer;
  katie = color;
  led.turn_on_all(color);
  timer.pause(dog);
}

void button_press(void){
  Buzzer buzzer;
  LED led;
  Animation animation;
  Timer timer;

  if(katie == GREEN){
    animation.rainbows();
    animation.rainbows(); 
    dog = dog - 100; 
  }
  else{
    buzzer.short_buzz();
    dog = dog + 100;
    led.turn_on_all(RED);
    timer.pause(500);    
  }
  
}

