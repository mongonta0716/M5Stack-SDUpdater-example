#include <M5Stack.h>
#include <M5StackUpdater.h>

void setup() {
  M5.begin();
  Wire.begin();
  if(digitalRead(BUTTON_A_PIN) == 0) {
    Serial.println("Will Load menu binary");
    updateFromFS(SD);
    ESP.restart();
  }

  // put your setup code here, to run once:
  M5.Lcd.print("Hello World\n");
  
}

void loop() {
  // put your main code here, to run repeatedly:
}
