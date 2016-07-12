#include "LiquidCrystal.h"
#include "lcd_shield.h"

LiquidCrystal lcd_screen(8, 9, 4, 5, 6, 7); 

const int numRows = 2;
const int numCols = 16;

LcdShieldClass::LcdShieldClass(){
   // On défini l'écran sur 16 caractères et 2 lignes
   lcd_screen.begin(16, 2);   
   // Position initiale du curseur
   lcd_screen.setCursor(0,0);
}


void LcdShieldClass::show_text (String text)
{
	lcd_screen.clear();
	String line_one = "";
	String line_two = "";

	int taille = text.length();

	// Concat string pourl ligne 1
	for(int i = 0; i <= 16; i++) {
		if(text[i] != NULL){
		  line_one = line_one + text[i];
		}
	}

	// Concat string pourl ligne 2
	for(int i = 16; i <= 32; i++) {
		if(text[i] != NULL){
		  line_two = line_two + text[i];
		}
	}

	// Ecriture ligne 1
	lcd_screen.setCursor(0,0);
	lcd_screen.print(line_one);

	// Ecriture ligne 2
	if(line_two != NULL){
		lcd_screen.setCursor(0, 1);
		lcd_screen.print(line_two);
	}
}
