#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int width;
	int height;
	bool border;
	char borderStyle;
} Screen;

typedef struct {
	char playerStyle;
	int posX;
	int posY;
	char playerAction;
} Player;

int main(void) {
	
	int quit = false;
	
	Screen screen;
	screen.width = 15;
	screen.height = 10;
	screen.border = true;
	screen.borderStyle = '*';

	Player player;
	player.posX = 1;
	player.posY = 1;
	player.playerStyle = '%';
	player.playerAction = ' ';
	
	
	do
	{
		system("clear");
		
		for(int h = 0; h < screen.height; h++)
		{
			if(h == 0 && screen.border)
			{
				for(int v = 0; v < screen.width; v++)
				{
					printf("%c", screen.borderStyle);
				}
			}
			else
			{
				for(int v = 0; v < screen.width; v++)
				{
					if(v == 0 && screen.border)
					{
						printf("%c", screen.borderStyle);
					}
					else
					{
						if(player.posX == v && player.posY == h)
						{
							printf("%c", player.playerStyle);
						}
						else
						{
							printf(" ");
						}
					}
				}
			}

			printf("*\n");
		}
		
		if(screen.border)
		{
			for(int v = 0; v < screen.width; v++)
			{
				printf("%c", screen.borderStyle);
			}
		}
		
	  	system ("/bin/stty raw");
		player.playerAction = getchar();
		system ("/bin/stty cooked");
		
		if(player.playerAction == 'w')
			player.posY--;
		else if (player.playerAction == 's')
			player.posY++;
		else if (player.playerAction == 'a')
			player.posX--;
		else if (player.playerAction == 'd')
			player.posX++;
			
		if(player.playerAction == 'q')
			quit = true;
			
		if(player.posY < 0) player.posY = 0;
		if(player.posX < 0) player.posX = 0;
		if(player.posY > screen.height-1) player.posY = screen.height - 1;
		if(player.posX > screen.width-1) player.posX = screen.width - 1;
	}
	while(quit == false);
	return 0;
}
