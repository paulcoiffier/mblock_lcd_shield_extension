#ifndef lcd_shield_h
#define lcd_shield_h

#include <Arduino.h>
///@brief Class for LcdShieldClass
class LcdShieldClass
{
	public:
		LcdShieldClass();
		void show_text(String text);
	private:
		int level;
};

#endif