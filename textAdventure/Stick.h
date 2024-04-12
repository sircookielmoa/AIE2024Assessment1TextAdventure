#pragma once
#include "Game.h"
#include "Misc.h"
#include "Item.h"

class Stick : public Item
{
public:
	Stick();
	Stick(String name, String description);
	~Stick();

	void Use(String _playerInput) override;

private:

};

