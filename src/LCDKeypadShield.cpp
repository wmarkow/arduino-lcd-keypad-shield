/*
 * LCDKeypadShield.cpp
 *
 *  Created on: 17 kwi 2016
 *      Author: witek
 */

#include "LCDKeypadShield.h"

LCDKeypadShield::LCDKeypadShield(uint8_t rs, uint8_t enable, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7) : LiquidCrystal(rs, enable,
		d4, d5, d6, d7)
{

}

LCDKeypadShieldButton LCDKeypadShield::getButton()
{
	return getLCDKeypadShieldButton();
}
