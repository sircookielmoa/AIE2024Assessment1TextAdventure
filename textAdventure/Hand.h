#pragma once
#include "Game.h"
#include "Misc.h"
#include "Item.h"

class Hand : public Item
{
public:
	Hand();
	Hand(String name, String description);
	~Hand();

	void Use(String _playerInput) override;

private:

};

