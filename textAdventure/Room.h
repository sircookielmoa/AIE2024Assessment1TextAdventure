#pragma once
#include "Misc.h"
#include "Item.h"

class Room
{
public:
	Room();
	Room(Item& _itemSlot);
	~Room();
	
	Item* item;
	String description;

private:

protected:

};