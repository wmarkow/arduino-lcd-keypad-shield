/*
 * LCDKeypadShieldButton.c
 *
 *  Created on: 2 maj 2016
 *      Author: witek
 */


#include "LCDKeypadShieldButton.h"
#include <Arduino.h>

LCDKeypadShieldButton getLCDKeypadShieldButton()
{
	uint16_t adc_key_in = analogRead(0);

	if (adc_key_in > 1000) return BUTTON_NONE;
	if (adc_key_in < 50)   return BUTTON_RIGHT;
	if (adc_key_in < 250)  return BUTTON_UP;
	if (adc_key_in < 450)  return BUTTON_DOWN;
	if (adc_key_in < 650)  return BUTTON_LEFT;
	if (adc_key_in < 850)  return BUTTON_SELECT;

	return BUTTON_NONE;
}
