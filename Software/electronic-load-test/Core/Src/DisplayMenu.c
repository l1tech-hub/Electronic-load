#include "DisplayMenu.h"

#include "ssd1306.h"
#include "ssd1306_fonts.h"


void DisplayMenuInit() {

  ssd1306_Fill(Black);
  ssd1306_SetCursor(15, 0);
  ssd1306_WriteString("Operation mode", Font_7x10, White);
  ssd1306_Line(0, 11, 128, 11, White);
  ssd1306_SetCursor(0, 15);
  ssd1306_WriteString("Current", Font_7x10, White);
  ssd1306_SetCursor(0, 28);
  ssd1306_WriteString("Power", Font_7x10, White);
  ssd1306_SetCursor(0, 41);
  ssd1306_WriteString("Resistance", Font_7x10, White);
  ssd1306_SetCursor(0, 54);
  ssd1306_WriteString("Battery", Font_7x10, White);
}


void DisplayMenuSelect(int row) {
  ssd1306_FillRectangle(122, 17 + row * 13, 126, 21 + row * 13, White);
}

void DisplayMenuUnselect(int row) {
  ssd1306_FillRectangle(122, 17 + row * 13, 126, 21 + row * 13, Black);
}


void DisplayMenuDown(int* current_row) {

  DisplayMenuUnselect(*current_row);
  (*current_row)++;
  DisplayMenuSelect(*current_row);
}

void DisplayMenuUp(int* current_row) {

  DisplayMenuUnselect(*current_row);
  (*current_row)--;
  DisplayMenuSelect(*current_row);
}

