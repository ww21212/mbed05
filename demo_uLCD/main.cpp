// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.background_color(WHITE);
    uLCD.cls();
    uLCD.textbackground_color(WHITE);
    uLCD.color(BLUE);
    uLCD.printf("\n108061113\n"); //Default Green on black text
    uLCD.printf("\n  Starting Demo...");
    uLCD.text_width(3); //4X size text
    uLCD.text_height(3);
    uLCD.color(GREEN);
    for (int i=30; i>=0; i--) {
        uLCD.locate(1,2);
        uLCD.printf("%2d",i);
        // ThisThread::sleep_for(500ms);
    }
}
