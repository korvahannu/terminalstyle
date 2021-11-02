terminalstyle.h takes use of ANSI escape sequences and provides an easier verison of making your basic C terminal application look better with colors and other features.

Usage:
#include "terminalstyle.h" at the start of your script file and have this file in the same folder

**********FUNCTIONS AND USAGE**********

void terminalStyle(char *);		Call this function to set an invidual style change. You can use the definitions below to help
					e.g. terminalStyle(TEXT_RED); terminalStyle(TEXT_EFFECT_ITALIC); would result in red text that is italic
					
void resetTerminalStyle(void);		Resets the terminal style to default

void clearTerminal(void);		Clear terminal with system("clear")

void terminalMoveCursor(int, int);	Move terminal cursor

void terminalStyleManual(char *);	Manuallu set your escape code. For example: 1;31 is bold red text

void printColorTable(void);		INDEV ONLY! Prints colortable that you can use with terminalStyle255()

void terminalStyle255(int, int);	changes terminal style to your liking using rbg codes between 1-255, first parameter is text color and second is background


void terminalRectangle(int, int, char *, char *);	// Draw a text rectangle


void terminalTextRectangle(int, int, char, char);	// Draw a rectangle using colors

cursor stuff:

void hideTerminalCursor(void);		Hide cursor

void showTerminalCursor(void);		show cursor

void toggleTerminalCursor(void);	toggle cursor

void saveCursorState(void);		save cursor location

void restoreCursorState(void);		sets cursor back to previously saved location

***************************************

Hannu Korvala 2021

Information got from fnky @ https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797
