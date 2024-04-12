#pragma once
#include "Misc.h"
#include "Player.h"
#include "Room.h"

class Game
{
public:
	Game();
	~Game();

	Player* mainPlayer;
	Room* castle[3][3];
	Item** collectionItems;


private:
};

