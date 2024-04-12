#pragma once
#include "Spell.h"
#include "String.h"

#include <vector>
#include <algorithm>

class Player
{
public:

	Player();

	~Player();

	void setPlayerLocation(int _xpos, int _ypos);

	String MovePlayer();

	bool FindSpell(String spell);

	//Player location.
	int xpos = 0;
	int ypos = 0;

	Spell* grimoire[7];



private:


protected:
};

