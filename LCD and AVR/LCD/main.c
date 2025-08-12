#include <avr/io.h>
#include <util/delay.h>
#include "LCD.h"
#include <string.h>

char message[] = "shaban w basant  ";

int main(void)
{
//>>BEGiNNER<<
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>static message<<<<<<<<<<<<<<<<<<<<<<<<	
/*  LCD_init();
  _delay_ms(7.2);
  LCD_command(0x80); // First line, first position
  LCD_display_string("Hello, Ahmed!");
  LCD_command(0xC0); // Second line, first position
  LCD_display_string("AVR LCD Test");*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>simple Scrolling message<<<<<<<<<<<<<<<<<<<<<<<<<< 
/*LCD_init();
_delay_ms(7.2);
LCD_command(0x80); // First line start
LCD_display_string("Hello, AVR World!,Ahmed");
while (1) {
	
	_delay_ms(1000);
	LCD_command(0x18);
}*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Blinking message<<<<<<<<<<<<<<<<<<<<<<<<<
/* LCD_init();
	 LCD_command(0x80); // First line
	 LCD_display_string("   WARNING!   ");
	 LCD_command(0xC0); // Second line
	 LCD_display_string(" DO NOT ENTER ");

	 while(1) {
		 // Blink "WARNING!"
		 LCD_command(0x80);     // First line start
		 LCD_display_string("   WARNING!   ");
		 _delay_ms(10);

		 LCD_command(0x80);     // First line start
		 LCD_display_string("               "); // Clear only the line
		 _delay_ms(10);
	 }*/	
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Text Alignment<<<<<<<<<<<<<<<<<<<<<<<<<<<
/*	   LCD_init();

	   char text1[] = "Left Align";
	   char text2[] = "Right Align";
	   char text3[] = "Center";

	   while(1) {
		   // Left aligned
		   LCD_command(0x01);
		   _delay_ms(10);
		   LCD_goto(0, 0);
		    _delay_ms(100);
		   LCD_display_string(text1);
		   _delay_ms(3000);

		   // Right aligned
		   LCD_command(0x01);
		   _delay_ms(100);
		   LCD_goto(0, 16 - strlen(text2));
		    _delay_ms(100);
		   LCD_display_string(text2);
		   _delay_ms(3000);

		   // Center aligned
		   LCD_command(0x01);
		   _delay_ms(100);
		   LCD_goto(0, (16 - strlen(text3)) / 2);
		    _delay_ms(100);
		   LCD_display_string(text3);
		   _delay_ms(3000);
	   }*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Text Marquee (Circular Scrolling).<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/*  LCD_init();

    char message[] = " Hello from AVR LCD Demo! ";
    int len = strlen(message);

    while(1) {
	    for (int i = 0; i < len; i++) {
		    LCD_command(0x01); // Clear screen
		    LCD_goto(0, 0);

		    // Print 16 chars starting from index i
		    for (int j = 0; j < 16; j++) {
			    LCD_data(message[(i + j) % len]);
		    }

		    _delay_ms(3000); // Adjust speed
	    }
    }*/
  //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Write your name and make it move from right to left until it reaches the end of the display, then move it left to right.Keep the name moving forever<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/* LCD_init();
  char message[] = "Shaban";
  char len=strlen(message);
  LCD_command(0x01);
  _delay_ms(100);
  LCD_goto(0, 16 - strlen(message));
  _delay_ms(100);
  LCD_display_string(message);
  _delay_ms(3000);
  while (1)
  {
	  for (char i=0;i<16-len;i++)
	  {
		  LCD_command(0x18);
		  _delay_ms(1000);
	  }
	   for (char i=0;i<16-len;i++)
	   {
		   LCD_command(0x1C);
		   _delay_ms(1000);
	   }
	  
  }*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LEC task (start in the first line then shift to the second line<<<<<<<<<<<<<<<<<<<<<<<<
/*LCD_init();
char message[] = "Basant&Shaban";

while (1)
{
	// --- First line ---
	LCD_command(0x01);  // Clear display
	_delay_ms(50);      
	LCD_command(0x80);// Go to line 1, col 0
	_delay_ms(50);         
	LCD_display_string(message);
	_delay_ms(500);

	for (uint8_t i = 0; i < 16; i++)  // Shift right until disappear
	{
		LCD_command(0x1C);  // Shift display right
		_delay_ms(500);
	}

	// --- Second line ---
	LCD_command(0x01); // Clear display
	_delay_ms(50);     
	LCD_command(0xC0);  // Go to line 2, col 0
	_delay_ms(50);
	LCD_display_string(message);
	_delay_ms(500);

	for (uint8_t i = 0; i < 16; i++)  // Shift right until disappear
	{
		LCD_command(0x1C);
		_delay_ms(500);
	}
}*/

i
 
	
	
	



