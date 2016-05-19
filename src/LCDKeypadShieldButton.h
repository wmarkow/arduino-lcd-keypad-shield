/*
 * LCDKeypadShieldButton.h
 *
 *  Created on: 2 maj 2016
 *      Author: witek
 */

#ifndef LCDKEYPADSHIELDBUTTON_H_
#define LCDKEYPADSHIELDBUTTON_H_

typedef enum LCDKeypadShieldButton
{
	BUTTON_RIGHT = 0,
	BUTTON_UP = 1,
	BUTTON_DOWN = 2,
	BUTTON_LEFT = 3,
	BUTTON_SELECT = 4,
	BUTTON_NONE   = 5
} LCDKeypadShieldButton;

#ifdef __cplusplus
extern "C" {
#endif

LCDKeypadShieldButton getLCDKeypadShieldButton();

#ifdef __cplusplus
}
#endif

#endif /* LCDKEYPADSHIELDBUTTON_H_ */
