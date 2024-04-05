#pragma once
#include "Map.h"
#include "Player.h"
#include "Room.h"

class Game
{
public:
	Game();
	~Game();

	void Run();

	void PossibleDirections(int x, int y);

	void MakeRooms();
	Item* MakeItems();

	Spell* MakeSpell();
private:
	Room* rooms[MAP_HEIGHT][MAP_WIDTH];
	Player* _player;
};

