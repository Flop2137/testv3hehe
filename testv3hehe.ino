#include <Keyboard.h>





void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
delay(4000);


// otwarcie okna
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(150);
// otwarcie cmd 
Keyboard.print("cmd.exe");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// wejscie w google
Keyboard.print("start chrome.exe");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// otwarcie YT
Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
//start video
Keyboard.write((char) 32);
Keyboard.releaseAll();
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
