/*
 * LCDKeypadShield.h
 *
 *  Created on: 17 kwi 2016
 *      Author: witek
 */

#ifndef LCDKEYPADSHIELD_H_
#define LCDKEYPADSHIELD_H_

#include <LiquidCrystal.h>
#include "LCDKeypadShieldButton.h"

class LCDKeypadShield : public LiquidCrystal
{
public:
	LCDKeypadShield(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3);
	LCDKeypadShieldButton getButton();
};

#endif /* LCDKEYPADSHIELD_H_ */
