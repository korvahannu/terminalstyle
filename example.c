#include <stdio.h>
#include "terminalstyle.h"

void printHaha(void);

int main(void) {

	
	
	clearTerminal();
	terminalStyle(TEXT_RED);
	printf("This text is red\n");
	getchar();
	
	terminalStyle(TEXT_EFFECT_BOLD);
	terminalStyle(TEXT_EFFECT_ITALIC);
	printf("And now I'm bold and italic!\n");
	getchar();
	
	resetTerminalStyle();
	printf("Plain old text makes me sad :(\n");
	getchar();
	
	clearTerminal();
	printColorTable();
	
	getchar();
	clearTerminal();
	
	printf("\n\n\n");
	terminalStyle255(232, 46);
	printf("You " );
	terminalStyle255(124, 3);
	printf("can " );
	terminalStyle255(89, 24);
	printf("write " );
	terminalStyle255(232, 25);
	printf("above " );
	terminalStyle255(125, 232);
	printf("me!\n" );
	resetTerminalStyle();
	
	terminalMoveCursor(-1, 3);
	getchar();
	
	terminalMoveCursor(-1, -3);
	getchar();
	
	clearTerminal();
	
	clearTerminal();
	terminalTextRectangle(50, 10, '%', ' ');
	printf("\n");
	terminalRectangle(50, 10, BACKGROUND_GREEN, BACKGROUND_GREY);
	printf("\n");
	terminalMoveCursor(51, 24);
	terminalRectangle(50, 10, BACKGROUND_RED, BACKGROUND_BLACK);
	printf("\n");
	terminalMoveCursor(51, 0);
	terminalTextRectangle(50, 10, '%', ' ');
	printf("\n");
	saveCursorState();
	terminalMoveCursor(60, 6);
	printf("Cool text here\n");
	terminalMoveCursor(60, 0);
	terminalTextRectangle(6, 2, 'x', ' ');
	restoreCursorState();
	
	
	return 0;
}
