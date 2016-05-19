/*
 * LCDKeypadShield_I2C.cpp
 *
 *  Created on: 2 maj 2016
 *      Author: witek
 */

#include "LCDKeypadShield_I2C.h"

LCDKeypadShield_I2C::LCDKeypadShield_I2C(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows) : LiquidCrystal_I2C(lcd_Addr, lcd_cols, lcd_rows)
{

}

LCDKeypadShieldButton LCDKeypadShield_I2C::getButton()
{
	return getLCDKeypadShieldButton();
}
