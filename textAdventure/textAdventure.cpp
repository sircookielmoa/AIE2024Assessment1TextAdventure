#include "Room.h"
#include "Item.h"
#include "Player.h"
#include "Game.h"
#include "Misc.h"

int main()
{
	Game* textAdventure = new Game;

	//sets player location
	textAdventure->mainPlayer->setPlayerLocation(1, 1);

	std::cout << "\tYou awake in a dark cold dungeon." << std::endl;
	bool gameState = true;

	while (gameState == true)
	{
		int xPos = textAdventure->mainPlayer->xpos;
		int yPos = textAdventure->mainPlayer->ypos;
	
		std::cout << std::endl;
	
		std::cout << "\t-----Actions-----\n\tMove\n\tOpen Grimoire\n\tFind Item\n" << std::endl;
	
		textAdventure->castle[xPos][yPos]->description.WriteToConsole();
		std::cout << "\n\tthere is an item in this room. " << std::endl;
	
		bool playerActions = true;
	
		while (playerActions)
		{
			String _playerInput;
			std::cout << "\n\t>";
			_playerInput.ReadFromConsole().ToLower();
	
			//find spell
			if (_playerInput == "open grimoire")
			{
				std::cout << "\n\tyou open your grimoire, it emits a powerful aura\n";
				//std::cout << "\n-----Spells------\nflame blast\nblack flame\nlightning spear\nfrenzied burst\nscarlet aeonia\nruin\nroar\n";
				for (int i = 0; i < 7; i++) {
					std::cout << "\t[" << textAdventure->mainPlayer->grimoire[i]->name << "]\n";
				}

				String spellName;
				std::cout << "\n\t>";
				spellName.ReadFromConsole().ToLower();
				textAdventure->mainPlayer->FindSpell(spellName);
	
				if (textAdventure->mainPlayer->FindSpell(spellName) == true)
				{
					std::cout << "[" << spellName << "]" << "\n\tspell found";
					//spellName.WriteToConsole();
					std::cout << std::endl;
				}
				else
				{
					std::cout << "\nspell could not be found";
				}
			}
			//find item
			else if (_playerInput == "find item")
			{
				std::cout << "\n\n\t";
				//textAdventure->castle[xPos][yPos]->item->_name //Name of item in the currnet room.
				std::cout << "[" << textAdventure->castle[xPos][yPos]->item->_name << "]" << std::endl;
				//std::cout << "\tDescription: ";
				//std::cout << "\n\t";
				textAdventure->castle[xPos][yPos]->item->_description.WriteToConsole(); // description of item in the currnet room.
				//std::cout << std::endl;
				std::cout << "\n\tWhat do to with this item? "; //Asking for player use input.
				String itemInput;
				std::cout << "\n\t>";
				itemInput.ReadFromConsole().ToLower();
				
				if (itemInput == "use")
				{
					textAdventure->castle[xPos][yPos]->item->Use(itemInput.ToLower());
				}
				std::cout << std::endl;
			}
			//move
			else if (_playerInput == "move")
			{
				playerActions = false;
				textAdventure->mainPlayer->MovePlayer().WriteToConsole();
			}
			//quit
			else if (_playerInput == "quit")
			{
				playerActions = false;
				gameState = false;
			}
			std::cout << "\n\tNew action: \n\n";
		}
		std::cout << "\tPress enter to continue. " << std::endl;
		std::cin.get();
		system("CLS");
	}
}