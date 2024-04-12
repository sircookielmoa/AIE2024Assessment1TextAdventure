#pragma once
#include "Game.h"
#include "Misc.h"
#include "Item.h"

class SmallBoy : public Item
{
public:
	SmallBoy();
	SmallBoy(String name, String description);
	~SmallBoy();

	void Use(String _playerInput) override;

private:

};

