#include <LCDKeypadShield_I2C.h>

LCDKeypadShield_I2C lcd(0x3F,16,2);

void setup() {
  lcd.init();
  lcd.backlight();

  // Print a message to the LCD.
  lcd.print(F("Hello world!"));
}

void loop() {
	// set the cursor to column 0, line 1
	// (note: line 1 is the second row, since counting begins with 0):
	lcd.setCursor(9, 1);
	// print the number of seconds since reset:
	lcd.print(millis() / 1000);

	lcd.setCursor(0,1);

	switch (lcd.getButton())
	{
		case BUTTON_RIGHT:
		{
			lcd.print(F("RIGHT "));
			break;
		}
		case BUTTON_LEFT:
		{
			lcd.print(F("LEFT  "));
			break;
		}
		case BUTTON_UP:
		{
			lcd.print(F("UP    "));
			break;
		}
		case BUTTON_DOWN:
		{
			lcd.print(F("DOWN  "));
	    	break;
		}
		case BUTTON_SELECT:
		{
			lcd.print(F("SELECT"));
			break;
		}
		case BUTTON_NONE:
		{
			lcd.print(F("NONE   "));
			break;
		}
	}
}
