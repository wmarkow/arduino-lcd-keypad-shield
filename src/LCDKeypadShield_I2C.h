/*
 * LCDKeypadShield_I2C.h
 *
 *  Created on: 2 maj 2016
 *      Author: witek
 */

#ifndef LCDKEYPADSHIELD_I2C_H_
#define LCDKEYPADSHIELD_I2C_H_

#include <LiquidCrystal_I2C.h>
#include "LCDKeypadShieldButton.h"

class LCDKeypadShield_I2C : public LiquidCrystal_I2C
{
public:
	LCDKeypadShield_I2C(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows);
	LCDKeypadShieldButton getButton();
};

#endif /* LCDKEYPADSHIELD_I2C_H_ */
