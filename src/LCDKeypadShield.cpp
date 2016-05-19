/*
 * LCDKeypadShield.cpp
 *
 *  Created on: 17 kwi 2016
 *      Author: witek
 */

#include "LCDKeypadShield.h"

LCDKeypadShield::LCDKeypadShield(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3) : LiquidCrystal(rs, enable,
		d0, d1, d2, d3)
{

}

LCDKeypadShieldButton LCDKeypadShield::getButton()
{
	return getLCDKeypadShieldButton();
}
